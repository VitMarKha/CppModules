#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(string name) : Form(name, 72, 45), _name(name) { }

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

