#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main() {
	srand(time(NULL));

	ScavTrap sofia("Sofia");
	FragTrap maks("Maks");

	SuperTrap superTrap("Jon");
	cout << "---------------------" << endl;
	superTrap.vaulthunter_dot_exe("BOX");
	cout << "---------------------" << endl;
	superTrap.vaulthunter_dot_exe("CHAIR");
	superTrap.vaulthunter_dot_exe("MINUS");
	cout << "---------------------" << endl;
	superTrap.beRepaired(10);
	cout << "---------------------" << endl;
	superTrap.ninjaShoebox(sofia);
	superTrap.ninjaShoebox(maks);
	superTrap.ninjaShoebox(sofia);
	cout << "---------------------" << endl;
	superTrap.beRepaired(10);
	cout << "---------------------" << endl;
	superTrap.beRepaired(40);
	superTrap.ninjaShoebox(maks);
	cout << "---------------------" << endl;
	return 0;
}
