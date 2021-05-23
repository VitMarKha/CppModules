#include "Bureaucrat.hpp"

int main() {
	Bureaucrat* bureaucrat = new Bureaucrat("NIK", 2);

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
	delete bureaucrat;
	return 0;
}
