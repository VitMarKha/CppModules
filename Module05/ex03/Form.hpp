#ifndef EX03_FORM_HPP
#define EX03_FORM_HPP

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
	Form(const Form& form);
	virtual	~Form();
	Form& operator=(const Form& Form);

	const string	getName() const;

	int		getGradeSign() const;

	int		getGradeExecute() const;

	bool			getSigned() const;

	void            beSigned(Bureaucrat& bureaucrat);

	void			setSigned(const bool new_signed);

	virtual void    execute(const Bureaucrat& executor) const = 0 ;

protected:
	class ExceptionForm : public std::exception {
	public:
		ExceptionForm(const char* error);
		virtual const char* what() const throw();
	private:
		const char* _error;
	};

private:
	const string	_name;
	const int		_grade_sign;
	const int		_grade_execute;

	bool			_signed;
};

ostream& operator<<(ostream& out, const Form& form);

#endif
