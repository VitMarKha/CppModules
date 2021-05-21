#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine() {
	cout << "Tactical Marine ready for battle!" << endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine &tacticalMarine) {
	(void)tacticalMarine;
	cout << "Tactical Marine ready for battle!" << endl;
}

TacticalMarine::~TacticalMarine() {
	cout << "Aaargh..." << endl;
}

TacticalMarine &TacticalMarine::operator=(const TacticalMarine &tacticalMarine) {
	(void)tacticalMarine;
	return *this;
}

ISpaceMarine* TacticalMarine::clone() const {
	TacticalMarine *clone = new TacticalMarine(*this);
	return clone;
}

void TacticalMarine::battleCry() const {
	cout << "For the holy PLOT!" << endl;
}

void TacticalMarine::rangedAttack() const {
	cout << "* attacks with a bolter *" << endl;
}

void TacticalMarine::meleeAttack() const {
	cout << "* attacks with a chainsword *" << endl;
}
