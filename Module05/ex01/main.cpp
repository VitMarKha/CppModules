#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	Bureaucrat bureaucrat1("NIK", 145);
    Form form2("default", 4, 66);
    form2.beSigned(bureaucrat1);
    Bureaucrat bureaucrat2("MAX", 3);
    form2.beSigned(bureaucrat2);
	return 0;
}
