#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main() {
	cout << "-----------TEST-0-----------" << endl;
	try {
		Intern	someRandomIntern;
		Form*	rrf;
		rrf = someRandomIntern.makeForm("Robotomy Request", "Bender");
		cout << *rrf;
	}
	catch (std::exception& exception) {
		cout << exception.what() << endl;
	}
	cout << "-----------TEST-1-----------" << endl;
	try {
		Intern	someRandomIntern;
		Form*	rrf;
		rrf = someRandomIntern.makeForm("Bla bla", "Bender");
		cout << *rrf;
	}
	catch (std::exception& exception) {
		cout << exception.what() << endl;
	}
	return 0;
}
