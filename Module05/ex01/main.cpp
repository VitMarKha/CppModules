#include "Bureaucrat.hpp"

int main() {
	Bureaucrat bureaucrat("NIK", 145);

	cout << bureaucrat;
	bureaucrat.reduceRating();
	cout << bureaucrat;
	bureaucrat.reduceRating();
	cout << bureaucrat;
	bureaucrat.increaseRating();
	cout << bureaucrat;
	bureaucrat.increaseRating();
	cout << bureaucrat;
	bureaucrat.increaseRating();
	cout << bureaucrat;
	bureaucrat.increaseRating();
	return 0;
}
