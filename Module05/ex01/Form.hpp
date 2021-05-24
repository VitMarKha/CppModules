#ifndef EX01_FORM_HPP
#define EX01_FORM_HPP

#include <iostream>
#include <ostream>
#include "Bureaucrat.hpp"

using std::string;
using std::cout;
using std::endl;
using std::ostream;

class Bureaucrat;

class Form {
public:
	Form(const string& name, const int grade_sign, const int grade_execute);
	~Form();

	const string	getName() const;

	const int		getGradeSign() const;

	const int		getGradeExecute() const;

	bool			getSigned() const;

	void            beSigned(Bureaucrat& bureaucrat);

private:
	const string	_name;
	const int		_grade_sign;
	const int		_grade_execute;
	bool			_signed;

	class Exception_form {
	public:
		Exception_form(string error);
		const char* what() const;
	private:
		string	_error;
	};
};

ostream& operator<<(ostream& out, const Form& form);

#endif
