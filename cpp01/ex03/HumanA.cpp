#include "HumanA.hpp"
#include <iostream>

// Constructeur initialisant le nom et la référence à l'arme
HumanA::HumanA(const std::string& name, Weapon& weapon) : name(name), weapon(weapon) {}

// Méthode pour afficher l'attaque
void HumanA::attack() const {
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

