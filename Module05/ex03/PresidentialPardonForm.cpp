#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(string name) : Form(name, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &presidentialPardonForm) : Form(presidentialPardonForm) { }

PresidentialPardonForm::~PresidentialPardonForm() { }

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &presidentialPardonForm) {
	(void)presidentialPardonForm;
	return *this;
}

void PresidentialPardonForm::action() const {
    cout << this->getName() << " has been pardoned by Zafod Beeblebrox" << endl;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	if (this->getSigned() != true)
		throw ExceptionForm("FormNotSigned");
	else if (executor.getGrade() > this->getGradeExecute())
		throw ExceptionForm("GradeTooLowException");
	this->action();
}
