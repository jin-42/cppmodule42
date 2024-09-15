#include "Zombie.hpp"

// Fonction qui crée un zombie sur la pile (stack), l'annonce, puis le détruit
void randomChump(std::string name) {
    Zombie zombie(name);  // Zombie sur la pile
    zombie.announce();     // Le zombie s'annonce
    // Le zombie sera automatiquement détruit à la fin de cette fonction
}
