#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	cout << "-----------TEST-0-----------" << endl;
	try {
		Form* form = new Form("House", 6, 151);
		cout << form;
	}
	catch (std::exception& exception) {
		cout << exception.what() << endl;
	}
	cout << "-----------TEST-1-----------" << endl;
	try {
		Form* form = new Form("Air balloon", -6, 15);
		cout << form;
	}
	catch (std::exception& exception) {
		cout << exception.what() << endl;
	}
	cout << "-----------TEST-2-----------" << endl;
	try {
		Bureaucrat* bureaucrat = new Bureaucrat("Max", 74);
		cout << *bureaucrat;
		Form* form = new Form("Around the World", 25, 100);
		cout << *form;
		form->beSigned(*bureaucrat);
	}
	catch (std::exception& exception) {
		cout << exception.what() << endl;
	}
	cout << "-----------TEST-3-----------" << endl;
	Bureaucrat bureaucrat("NIK", 145);
	Form form("Moon for MKS", 40, 66);
	bureaucrat.signForm(form);
	return 0;
}
