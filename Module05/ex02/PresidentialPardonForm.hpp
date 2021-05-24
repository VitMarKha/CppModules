#ifndef EX02_PRESIDENTIALPARDONFORM_HPP
#define EX02_PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {
public:
    PresidentialPardonForm(string name);
	PresidentialPardonForm(PresidentialPardonForm& presidentialPardonForm);
	virtual ~PresidentialPardonForm();

    virtual void    execute(const Bureaucrat& executor);

private:
    void    action();
};

#endif
