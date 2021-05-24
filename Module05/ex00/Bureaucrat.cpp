#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const string &name, int grade) : _name(name), _grade(grade) {
	try {
		if (this->getGrade() > 150)
			throw Exception_bureaucrat("Bureaucrat: Incorrect rating, more than the allowed 150");
		else if (this->getGrade() < 1)
			throw Exception_bureaucrat("Bureaucrat: Incorrect rating, less than the allowed 1");
	}
	catch (Exception_bureaucrat &exceptionBureaucrat) {
		cout << exceptionBureaucrat.what() << endl;
	}
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
	try {
		if ((this->getGrade() + 1) > 150)
			throw Exception_bureaucrat("Bureaucrat: Incorrect rating, more than the allowed 150");
		else
			this->_grade += 1;
	}
	catch (Exception_bureaucrat &exceptionBureaucrat) {
		cout << exceptionBureaucrat.what() << endl;
	}
}

void Bureaucrat::increaseRating() {
	try {
		if ((this->getGrade() - 1) < 1)
			throw Exception_bureaucrat("Bureaucrat: Incorrect rating, less than the allowed 1");
		else
			this->_grade -= 1;
	}
	catch (Exception_bureaucrat &exceptionBureaucrat) {
		cout << exceptionBureaucrat.what() << endl;
	}
}

Bureaucrat::Exception_bureaucrat::Exception_bureaucrat(const char* error) : _error(error) { }

const char *Bureaucrat::Exception_bureaucrat::what() const throw() { return this->_error; }

ostream& operator<<(ostream& out, const Bureaucrat& bureaucrat) {
	cout << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << endl;
	return out;
}
