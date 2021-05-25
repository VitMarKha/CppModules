#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const string &name, int grade) : _name(name), _grade(grade) {
	if (this->getGrade() > 150)
		throw ExceptionBureaucrat("GradeTooHighException");
	else if (this->getGrade() < 1)
		throw ExceptionBureaucrat("GradeTooLowException");
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) : _name(bureaucrat.getName()), _grade(bureaucrat.getGrade()) { }

Bureaucrat::~Bureaucrat() { }

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat) {
	this->_grade = bureaucrat.getGrade();
	return *this;
}

string Bureaucrat::getName() const { return this->_name; }

int Bureaucrat::getGrade() const { return this->_grade; }

void Bureaucrat::reduceRating() {
	if ((this->getGrade() + 1) > 150)
		throw ExceptionBureaucrat("GradeTooHighException");
	else
		this->_grade += 1;
}

void Bureaucrat::increaseRating() {
	if ((this->getGrade() - 1) < 1)
		throw ExceptionBureaucrat("GradeTooLowException");
	else
		this->_grade -= 1;
}

void Bureaucrat::signForm(Form& form) {
	try {
		form.beSigned(*this);
	}
	catch (std::exception& exception) {
		cout << "Bureaucrat " << this->getName() << " cannot sign form: \"" << form.getName() << "\"" \
        << " because it has an insufficient rating" << endl;
	}
}

void Bureaucrat::executeForm(const Form& form) {
	try {
		form.execute(*this);
		cout << "Bureaucrat " << this->getName() << " executes " << form.getName() << endl;
	}
	catch (ExceptionBureaucrat exceptionBureaucrat) {
		cout << exceptionBureaucrat.what() << endl;
	}
}

Bureaucrat::ExceptionBureaucrat::ExceptionBureaucrat(const char* error) : _error(error) { }

const char *Bureaucrat::ExceptionBureaucrat::what() const throw() { return this->_error; }

ostream& operator<<(ostream& out, const Bureaucrat& bureaucrat) {
	cout << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << endl;
	return out;
}
