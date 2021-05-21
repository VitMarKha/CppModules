#include "Enemy.hpp"

Enemy::Enemy(int hp, const string& type) : _hp(hp), _type(type) { }

Enemy::Enemy(Enemy &enemy) { *this = enemy; }

Enemy::~Enemy() { }

Enemy &Enemy::operator=(const Enemy &enemy) {
	this->_hp = enemy._hp;
	this->_type = enemy._type;
	return *this;
}

string Enemy::getType() const { return this->_type; }

int Enemy::getHP() const { return this->_hp; }

void Enemy::takeDamage(int damage) {
	if (damage <= 0)
		return;
	else
		this->_hp -= damage;
}
