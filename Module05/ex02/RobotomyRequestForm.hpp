#ifndef EX02_ROBOTOMYREQUESTFORM_HPP
#define EX02_ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {
public:
    RobotomyRequestForm(string name);
	RobotomyRequestForm(RobotomyRequestForm& robotomyRequestForm);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm& operator=(const RobotomyRequestForm& robotomyRequestForm);

    virtual void    execute(const Bureaucrat& executor) const;

private:
    void    action() const;
};

#endif
