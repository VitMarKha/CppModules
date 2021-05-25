#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
    srand(time(NULL));
    cout << "-----------TEST-0-----------" << endl;
	try {
		Bureaucrat* bureaucrat = new Bureaucrat("Shamil", 76);
		Form* form = new RobotomyRequestForm("Home");
		cout << *form;
		form->execute(*bureaucrat);
	}
	catch (std::exception& exception) {
		cout << exception.what() << endl;
	}
	cout << "-----------TEST-1-----------" << endl;
	try {
		Bureaucrat* bureaucrat = new Bureaucrat("Egor", 17);
		Form* form = new PresidentialPardonForm("Airplane");
		cout << *form;
		bureaucrat->signForm(*form);
		form->execute(*bureaucrat);
	}
	catch (std::exception& exception) {
		cout << exception.what() << endl;
	}
	cout << "-----------TEST-2-----------" << endl;
	Bureaucrat* bureaucrat1 = new Bureaucrat("Karl", 12);
	Bureaucrat* bureaucrat2 = new Bureaucrat("Vitas", 146);
	Form* form = new ShrubberyCreationForm("Children's playground");
	cout << *form;
	bureaucrat1->signForm(*form);
	bureaucrat2->executeForm(*form);
	return 0;
}
