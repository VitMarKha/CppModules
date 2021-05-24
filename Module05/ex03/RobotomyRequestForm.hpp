#ifndef EX03_ROBOTOMYREQUESTFORM_HPP
#define EX03_ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {
public:
    RobotomyRequestForm(string name);
	RobotomyRequestForm(RobotomyRequestForm& robotomyRequestForm);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm& operator=(const RobotomyRequestForm& robotomyRequestForm);

    virtual void    execute(const Bureaucrat& executor);

private:
    void    action();
};

#endif
