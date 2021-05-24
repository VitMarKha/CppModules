#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(string name) : Form(name, 72, 45) { }

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &robotomyRequestForm) : Form(robotomyRequestForm) { }

RobotomyRequestForm::~RobotomyRequestForm() { }

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &robotomyRequestForm) {
	(void)robotomyRequestForm;
	return *this;
}

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
