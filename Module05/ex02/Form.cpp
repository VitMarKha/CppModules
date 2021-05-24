#include "Form.hpp"

Form::Form(const string &name, const int grade_sign, const int grade_execute) :
	_name(name), _grade_sign(grade_sign), _grade_execute(grade_execute), _signed(false) {
	try {
		if (this->getGradeSign() > 150)
			throw Exception_form("Form: Incorrect rating, more than the allowed 150 [sign]");
		else if (this->getGradeSign() < 1)
			throw Exception_form("Form: Incorrect rating, less than the allowed 1 [sign]");
		else if (this->getGradeExecute() > 150)
			throw Exception_form("Form: Incorrect rating, more than the allowed 150 [execute]");
		else if (this->getGradeExecute() < 1)
			throw Exception_form("Form: Incorrect rating, less than the allowed 1 [execute]");
	}
	catch (Exception_form &exception_form) {
		cout << exception_form.what() << endl;
	}
}

Form::~Form() { }

const int Form::getGradeSign() const { return this->_grade_sign; }

const int Form::getGradeExecute() const { return this->_grade_execute; }

const string Form::getName() const { return this->_name; }

bool Form::getSigned() const { return this->_signed; }

void Form::beSigned(Bureaucrat &bureaucrat) {
    try {
        if (bureaucrat.getGrade() < this->getGradeSign()) {
            this->_signed = true;
            bureaucrat.signForm(this->getSigned(), *this);
        }
        else {
            bureaucrat.signForm(this->getSigned(), *this);
            throw Exception_form("The bureaucrat's: " + bureaucrat.getName()  \
                + " score is too low to sign the form: \"" + this->getName() + "\"");
        }
    }
    catch (Exception_form& exceptionForm) {
        cout << exceptionForm.what() << endl;
    }
}

Form::Exception_form::Exception_form(string error) : _error(error) {}

const char *Form::Exception_form::what() const { return this->_error.c_str(); }

ostream& operator<<(ostream& out, const Form& form) {
	cout << "Form: \"" << form.getName() << "\"" << " is " << form.getSigned() << "her grade sign: " \
		<< form.getGradeSign()<< "and her grade execute: " << form.getGradeExecute() << endl;
	return out;
}
