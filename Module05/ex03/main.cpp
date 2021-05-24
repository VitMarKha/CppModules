#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main() {
	Intern	someRandomIntern;
	Form*	rrf;
	rrf = someRandomIntern.makeForm("Robotomy Request", "Bender");
	if (rrf != nullptr)
			cout << *rrf;

	Form*	s;
	s = someRandomIntern.makeForm("Shrubbery Creation", "Home");
	if (s != nullptr)
		cout << *s;
	return 0;
}
