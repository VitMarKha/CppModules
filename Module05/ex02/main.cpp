#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
    srand(time(NULL));
	Bureaucrat b1("NIK", 145);
    ShrubberyCreationForm h("House");
    RobotomyRequestForm  c("Children's playground");

    h.action();
    c.action();
	return 0;
}
