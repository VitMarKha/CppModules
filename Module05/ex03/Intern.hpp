#ifndef EX03_INTERN_HPP
#define EX03_INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

using std::string;

class Intern {
public:
	Intern();
	Intern(Intern& intern);
	~Intern();
	Intern& operator=(const Intern& intern);

	Form* makeForm(const string name_form, const string target) const;

private:
	string forms_names[3];

	class ExceptionIntern : public std::exception {
	public:
		ExceptionIntern(const char* error);
		virtual const char* what() const throw();
	private:
		const char* _error;
	};
};

#endif
