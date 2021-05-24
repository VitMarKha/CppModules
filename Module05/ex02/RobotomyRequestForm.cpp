#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(string name) : Form(name, 72, 45) { }

void RobotomyRequestForm::action() {
    try {
        if (rand() % 2)
            cout << "BRBRBRRBBRRBRbrbrbr...: " << this->getName() << " has been robotomized successfully!" << endl;
        else
            throw Exception_form("There was a failure in automation");
    }
    catch (Exception_form& exceptionForm) {
        cout << exceptionForm.what() << endl;
    }
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) {
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

