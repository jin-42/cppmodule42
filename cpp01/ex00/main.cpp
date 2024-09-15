#include "Zombie.hpp"

// Déclaration des fonctions externes
Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main() {
    // Utilisation de la fonction newZombie (tas/heap)
    Zombie* heapZombie = newZombie("HeapZombie");
    heapZombie->announce();  // Le zombie s'annonce
    delete heapZombie;  // On libère la mémoire allouée dynamiquement

    // Utilisation de la fonction randomChump (pile/stack)
    randomChump("StackZombie");

    return 0;
}
