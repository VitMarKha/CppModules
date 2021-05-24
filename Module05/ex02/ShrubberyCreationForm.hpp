#ifndef EX02_SHRUBBERYCREATIONFORM_HPP
#define EX02_SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {
public:
    ShrubberyCreationForm(string name);
    ShrubberyCreationForm(ShrubberyCreationForm& shrubberyCreationForm);
    virtual ~ShrubberyCreationForm();

    virtual void    execute(const Bureaucrat& executor);

private:
    void    action();
};

#endif
