#include "Intern.hpp"

Intern::Intern() {
	forms_names[0] = "Shrubbery Creation";
	forms_names[1] = "Robotomy Request";
	forms_names[2] = "Presidential Pardon";
}

Intern::Intern(Intern &intern) { *this = intern; }

Intern::~Intern() { }

Intern &Intern::operator=(const Intern &intern) {
	(void)intern;
	return *this;
}

Form* Intern::makeForm(const string name_form, const string target) const {
	int i;
	Form* forms[3];
	Form *form_result = nullptr;

	forms[0] = new ShrubberyCreationForm(target);
	forms[1] = new RobotomyRequestForm(target);
	forms[2] = new PresidentialPardonForm(target);
	for (i = 0; i < 3; i++) {
		if (this->forms_names[i] == name_form) {
			form_result = forms[i];
			cout << "Intern creates form: " << form_result->getName() << endl;
			for (int j = 0; j < 3; j++)
				if (i != j)
					delete forms[j];
			return form_result;
		}
	}
	if (!form_result)
		throw ExceptionIntern("IncorrectFormName");
	for (int j = 0; j < 3; j++)
		delete forms[j];
	return form_result;
}

Intern::ExceptionIntern::ExceptionIntern(const char* error) : _error(error) { }

const char *Intern::ExceptionIntern::what() const throw() { return this->_error; }
