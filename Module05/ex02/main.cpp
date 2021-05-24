#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
    srand(time(NULL));
	Bureaucrat b1("MAX", 1);
    Bureaucrat b2("NIK", 100);
    Bureaucrat b3("NIK", 3);
    ShrubberyCreationForm h("House");
    RobotomyRequestForm  c("Children's playground");
    PresidentialPardonForm p("Karl");

    h.beSigned(b1);
    c.beSigned(b1);
    p.beSigned(b1);

    h.execute(b2);
    c.execute(b2);
    p.execute(b2);

    c.execute(b3);
    p.execute(b3);

    b2.executeForm(p);
	return 0;
}
