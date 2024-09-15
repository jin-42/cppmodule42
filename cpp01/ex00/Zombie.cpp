#include "Zombie.hpp"

// Constructeur qui initialise le nom du zombie
Zombie::Zombie(std::string zombieName) : name(zombieName) {}

// Destructeur qui affiche un message quand un zombie est détruit
Zombie::~Zombie() {
    std::cout << name << " is destroyed." << std::endl;
}

// Fonction d'annonce du zombie
void Zombie::announce() {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
