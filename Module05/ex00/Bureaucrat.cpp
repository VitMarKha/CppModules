#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const string &name, int grade) : _name(name), _grade(grade) {
	try {
		if ((this->getGrade() + 1) > 150)
			throw Exception_bureaucrat("Incorrect rating, more than the allowed 150");
	}
	catch (Exception_bureaucrat &exceptionBureaucrat) {
		cout << exceptionBureaucrat.what() << endl;
	}
}

Bureaucrat::~Bureaucrat() { }

string Bureaucrat::getName() const { return this->_name; }

int Bureaucrat::getGrade() const { return this->_grade; }

void Bureaucrat::reduceRating() {
	try {
		if ((this->getGrade() + 1) > 150)
			throw Exception_bureaucrat("Incorrect rating, more than the allowed 150");
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
			throw Exception_bureaucrat("Incorrect rating, more than the allowed 150");
		else
			this->_grade -= 1;
	}
	catch (Exception_bureaucrat &exceptionBureaucrat) {
		cout << exceptionBureaucrat.what() << endl;
	}
}

Bureaucrat::Exception_bureaucrat::Exception_bureaucrat(string error) : _error(error) { }

const char *Bureaucrat::Exception_bureaucrat::what() const { return this->_error.c_str();; }


ostream& operator<<(ostream& out, const Bureaucrat& bureaucrat) {
	cout << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << endl;
	return out;
}