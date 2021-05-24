#ifndef EX02_ROBOTOMYREQUESTFORM_HPP
#define EX02_ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {
public:
    RobotomyRequestForm(string name);

    virtual void    execute(const Bureaucrat& executor);

private:
    void    action();
};

#endif
