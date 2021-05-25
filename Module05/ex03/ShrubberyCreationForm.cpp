#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(string name) : Form(name, 145, 137) { }

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &shrubberyCreationForm) : Form(shrubberyCreationForm) { }

ShrubberyCreationForm::~ShrubberyCreationForm() { }

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &shrubberyCreationForm) {
    (void)shrubberyCreationForm;
    return *this;
}

void ShrubberyCreationForm::action() const {
	std::ofstream out;

	out.open(this->getName() + "_shrubbery");
	if (out.is_open()) {
		out << "____________ $$$_______$$$\n"
			   "__________$$$__$$$\n"
			   "_________ $$$____$$$__$$$__$$$\n"
			   "_________$$$___$$$____$$$\n"
			   "________$$$__$$$_____$$$________$$$_$$$____$$$\n"
			   "________$$$_________________$$$___$$$__$$$\n"
			   "________$$$__________________$$$___$$$___$$$\n"
			   "______$$$__ $$$_________________$$$___________$$$\n"
			   "_____$$$_$$$_______________________________$$$\n"
			   "_$$$_________$$$____________________$$$__$$$\n"
			   "$$$___$$$______$$$______$$$_$$$_________$$$\n"
			   "$$$_______________$$$_______$$$______________$$$\n"
			   "$$$________________________$$$_________________$$$\n"
			   "_$$$ _________________$$$__________________$$$____$$$\n"
			   "__$$$ _____$$$________$$$_______________$$$___$$$\n"
			   "__$$$ __$$$_________$$$________________$$$____$$$\n"
			   "_$$$___$$$______________________________$$$_____$$$\n"
			   "$$$_____$$$_____$$$_$$$_$$$_$$$___$$$________$$$\n"
			   "$$$ ______________$$$_$$$___$$$__$$$_$$$_$$$_______$$$\n"
			   "$$$_____$$$___$$$___$$$_$$$_$$$_$$$______$$$\n"
			   "_$$$__$$$__$$$_$$$____$$$\n"
			   "___$$$________$$$_$$$___$$$______$$$\n"
			   "_________________$$$__$$$_$$$\n"
			   "__________________$$$______$$$\n"
			   "__________________$$$__$$$__$$$\n"
			   "______________ $$$_$$$_$$$_$$$\n"
			   "__________$$$__$$$___$$$________$$$\n"
			   "__$$$ ___$$$__$$$___$$$____________$$$\n"
			   "$$$_______$$$______$$$______________________\n"
			   "________________ $$$_______$$$_____________________\n"
			   "________________$$$________$$$____________________\n"
			   "______________$$$__$$$__$$$_$$$J$$$__________________\n"
			   "______________$$$__$$$__$$$__$$$__$$$K$$$________________\n"
			   "____________ $$$__$$$____$$$_$$$___$$$_________________" << endl;
		out.close();
	} else
		throw ExceptionForm("ShrubberyCreationFormFileNotCreate");
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	if (this->getSigned() != true)
		throw ExceptionForm("FormNotSigned");
	else if (executor.getGrade() > this->getGradeExecute())
		throw ExceptionForm("GradeTooLowException");
	this->action();
}
