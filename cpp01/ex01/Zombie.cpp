#include "Zombie.hpp"

// Constructeur par défaut
Zombie::Zombie() {}

// Destructeur qui affiche un message lorsque le zombie est détruit
Zombie::~Zombie() {
    std::cout << name << " is destroyed." << std::endl;
}

// Méthode pour définir le nom du zombie
void Zombie::setName(std::string zombieName) {
    this->name = zombieName;
}

// Méthode pour que le zombie s'annonce
void Zombie::announce() {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
