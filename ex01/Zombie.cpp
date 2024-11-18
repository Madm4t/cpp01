#include "Zombie.hpp"

Zombie::Zombie() : name("") {}

Zombie::~Zombie() {
	std::cout << name << ": Ahrrrggghh...\n";
}

void	Zombie::setName(std::string name) {
	this->name = name;
}

void	Zombie::announce() {
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}
