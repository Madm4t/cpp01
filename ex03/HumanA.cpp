#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon) : name(name), weapon(weapon) {}

void HumanA::attack() const {
	std::cout << name << " attacks with his " << weapon.getType() << "\n";
}