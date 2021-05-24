#ifndef EX00_BUREAUCRAT_HPP
#define EX00_BUREAUCRAT_HPP

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
	~Bureaucrat();

	string	getName() const;

	int 	getGrade() const;

	void 	reduceRating();

	void	increaseRating();

	void    signForm(bool sign, Form& form);

    void    executeForm(Form const & form);

private:
	const string	_name;
	int				_grade;

	class Exception_bureaucrat {
	public:
		Exception_bureaucrat(string error);
		const char* what() const;
	private:
		string	_error;
	};
};

ostream& operator<<(ostream& out, const Bureaucrat& bureaucrat);

#endif
