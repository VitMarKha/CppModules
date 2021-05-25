#include "Form.hpp"

Form::Form(const string &name, const int grade_sign, const int grade_execute) :
	_name(name), _grade_sign(grade_sign), _grade_execute(grade_execute), _signed(false) {
	if (this->getGradeSign() > 150)
		throw ExceptionForm("GradeTooHighException");
	else if (this->getGradeSign() < 1)
		throw ExceptionForm("GradeTooLowException");
	else if (this->getGradeExecute() > 150)
		throw ExceptionForm("GradeTooHighException");
	else if (this->getGradeExecute() < 1)
		throw ExceptionForm("GradeTooLowException");
}

Form::Form(const Form &form)
		: _name(form.getName()), _grade_sign(form.getGradeSign()), _grade_execute(form.getGradeExecute()), _signed(form.getSigned()) { }

Form::~Form() { }

Form &Form::operator=(const Form &form) {
	this->_signed = form.getSigned();
	return *this;
}

int Form::getGradeSign() const { return this->_grade_sign; }

int Form::getGradeExecute() const { return this->_grade_execute; }

const string Form::getName() const { return this->_name; }

bool Form::getSigned() const { return this->_signed; }

void Form::beSigned(Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() < this->getGradeSign())
		this->setSigned(true);
	else
		throw ExceptionForm("GradeTooLowException");
}

void Form::setSigned(const bool new_signed) { this->_signed = new_signed; }

Form::ExceptionForm::ExceptionForm(const char* error) : _error(error) { }

const char *Form::ExceptionForm::what() const throw() { return this->_error; }

ostream& operator<<(ostream& out, const Form& form) {
	cout << "Form: \"" << form.getName() << "\"" << " is " << form.getSigned() << " her grade sign: " \
		<< form.getGradeSign()<< " and her grade execute: " << form.getGradeExecute() << endl;
	return out;
}
