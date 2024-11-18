#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : name(name), weapon(nullptr) {}

void HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
}

void HumanB::attack() const {
	if (weapon)
		std::cout << name << " attacks with his " << weapon->getType() << "\n";
	else
		std::cout << name << " attacks with his fist." << "\n";
}