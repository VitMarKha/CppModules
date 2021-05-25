#include "Bureaucrat.hpp"

int main() {
	cout << "-----------TEST-0-----------" << endl;
	try {
		Bureaucrat* bureaucrat = new Bureaucrat("NIK", -2);
		cout << *bureaucrat;
	}
	catch (std::exception& exception) {
		cout << exception.what() << endl;
	}
	cout << "-----------TEST-1-----------" << endl;
	try {
		Bureaucrat* bureaucrat = new Bureaucrat("MAX", 200);
		cout << *bureaucrat;
	}
	catch (std::exception& exception) {
		cout << exception.what() << endl;
	}
	cout << "-----------TEST-2-----------" << endl;
	try {
		Bureaucrat* bureaucrat = new Bureaucrat("JON", 150);
		cout << *bureaucrat;
		bureaucrat->reduceRating();
		cout << *bureaucrat;
	}
	catch (std::exception& exception) {
		cout << exception.what() << endl;
	}
	cout << "-----------TEST-3-----------" << endl;
	try {
		Bureaucrat* bureaucrat = new Bureaucrat("JEK", 1);
		cout << *bureaucrat;
		bureaucrat->increaseRating();
		cout << *bureaucrat;
	}
	catch (std::exception& exception) {
		cout << exception.what() << endl;
	}
	cout << "-----------TEST-4-----------" << endl;
	try {
		Bureaucrat* bureaucrat = new Bureaucrat("KARL", 17);
		cout << *bureaucrat;
		bureaucrat->reduceRating();
		cout << *bureaucrat;
		bureaucrat->reduceRating();
		cout << *bureaucrat;
		bureaucrat->increaseRating();
		cout << *bureaucrat;
		bureaucrat->increaseRating();
		cout << *bureaucrat;
		bureaucrat->increaseRating();
		cout << *bureaucrat;
		bureaucrat->increaseRating();
		cout << *bureaucrat;
		delete bureaucrat;
	}
	catch (std::exception& exception) {
		cout << exception.what() << endl;
	}
	return 0;
}
