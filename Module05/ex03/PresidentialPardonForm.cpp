#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(string name) : Form(name, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &presidentialPardonForm) : Form(presidentialPardonForm) { }

PresidentialPardonForm::~PresidentialPardonForm() { }

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &presidentialPardonForm) {
	(void)presidentialPardonForm;
	return *this;
}

void PresidentialPardonForm::action() {
    cout << this->getName() << " has been pardoned by Zafod Beeblebrox" << endl;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) {
    try {
        if (this->getSigned() != true) {
			string error = "Form: " + this->getName() + " not signed";
			throw Exception_form(error.c_str());
		}
        else if (executor.getGrade() > this->getGradeExecute()) {
			string error = "The bureaucrat: " + executor.getName() + " has a low score";
			throw Exception_form(error.c_str());
		}
        this->action();
    }
    catch (Exception_form exceptionForm) {
        cout << exceptionForm.what() << endl;
    }
}
