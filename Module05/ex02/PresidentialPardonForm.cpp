#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(string name) : Form(name, 25, 5) {}

void PresidentialPardonForm::action() {
    cout << this->getName() << " has been pardoned by Zafod Beeblebrox" << endl;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) {
    try {
        if (this->getSigned() != true)
            throw Exception_form("Form: " + this->getName() + " not signed");
        else if (executor.getGrade() > this->getGradeExecute())
            throw Exception_form("The bureaucrat: " + executor.getName() + " has a low score");
        this->action();
    }
    catch (Exception_form exceptionForm) {
        cout << exceptionForm.what() << endl;
    }
}
