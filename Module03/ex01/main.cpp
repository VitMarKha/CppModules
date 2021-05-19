#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	srand(time(NULL));

	FragTrap karl("Karl");
	cout << "---------------------" << endl;
	karl.beRepaired(30);
	cout << "---------------------" << endl;
	karl.takeDamage(30);
	karl.takeDamage(10);
	cout << "---------------------" << endl;
	karl.beRepaired(10);
	cout << "---------------------" << endl;
	karl.vaulthunter_dot_exe("Jonny");
	karl.vaulthunter_dot_exe("Jek");
	karl.vaulthunter_dot_exe("Maks");
	cout << "---------------------" << endl;
	karl.beRepaired(10);
	cout << "---------------------" << endl;
	karl.beRepaired(40);
	karl.vaulthunter_dot_exe("Jonny");
	cout << "---------------------" << endl;

	ScavTrap sofia("Sofia");
	cout << "---------------------" << endl;
	sofia.beRepaired(30);
	cout << "---------------------" << endl;
	sofia.takeDamage(30);
	sofia.takeDamage(10);
	cout << "---------------------" << endl;
	sofia.beRepaired(10);
	cout << "---------------------" << endl;
	sofia.challengeNewcomer();
	sofia.challengeNewcomer();
	sofia.challengeNewcomer();
	cout << "---------------------" << endl;
	sofia.beRepaired(10);
	cout << "---------------------" << endl;
	sofia.beRepaired(40);
	sofia.challengeNewcomer();
	cout << "---------------------" << endl;
	return 0;
}
