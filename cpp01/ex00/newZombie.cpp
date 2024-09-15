#include "Zombie.hpp"

// Fonction qui crée un zombie sur le tas (heap) et le retourne
Zombie* newZombie(std::string name) {
    Zombie* zombie = new Zombie(name);  // Allocation dynamique
    return zombie;
}
