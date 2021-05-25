#ifndef EX03_BUREAUCRAT_HPP
#define EX03_BUREAUCRAT_HPP

#include <iostream>
#include <ostream>
#include "Form.hpp"

using std::string;
using std::cout;
using std::endl;
using std::ostream;

class Form;

class Bureaucrat  {
public:
	Bureaucrat(const string& name, int grade);
	Bureaucrat(const Bureaucrat& bureaucrat);
	~Bureaucrat();
	Bureaucrat& operator=(const Bureaucrat& bureaucrat);

	string	getName() const;

	int 	getGrade() const;

	void 	reduceRating();

	void	increaseRating();

	void    signForm(Form& form);

	void    executeForm(Form const & form);

private:
	const string	_name;
	int				_grade;

	class ExceptionBureaucrat : public std::exception {
	public:
		ExceptionBureaucrat(const char* error);
		virtual const char* what() const throw();
	private:
		const char* _error;
	};
};

ostream& operator<<(ostream& out, const Bureaucrat& bureaucrat);

#endif
