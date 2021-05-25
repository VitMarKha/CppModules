#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(string name) : Form(name, 72, 45) { }

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &robotomyRequestForm) : Form(robotomyRequestForm) { }

RobotomyRequestForm::~RobotomyRequestForm() { }

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &robotomyRequestForm) {
	(void)robotomyRequestForm;
	return *this;
}

void RobotomyRequestForm::action() const {
	if (rand() % 2)
		cout << "BRBRBRRBBRRBRbrbrbr...: " << this->getName() << " has been robotomized successfully!" << endl;
	else
		throw ExceptionForm("There was a failure in automation");
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	if (this->getSigned() != true)
		throw ExceptionForm("FormNotSigned");
	else if (executor.getGrade() > this->getGradeExecute())
		throw ExceptionForm("GradeTooLowException");
	this->action();
}
