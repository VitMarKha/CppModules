#include "FragTrap.hpp"

int main() {
	srand(time(NULL));

	FragTrap fragTrap("Karl");
	cout << "---------------------" << endl;
	fragTrap.beRepaired(30);
	cout << "---------------------" << endl;
	fragTrap.takeDamage(30);
	fragTrap.takeDamage(10);
	cout << "---------------------" << endl;
	fragTrap.beRepaired(10);
	cout << "---------------------" << endl;
	fragTrap.vaulthunter_dot_exe("Jonny");
	fragTrap.vaulthunter_dot_exe("Jek");
	fragTrap.vaulthunter_dot_exe("Maks");
	cout << "---------------------" << endl;
	fragTrap.beRepaired(10);
	cout << "---------------------" << endl;
	fragTrap.beRepaired(40);
	fragTrap.vaulthunter_dot_exe("Jonny");
	cout << "---------------------" << endl;
	return 0;
}
