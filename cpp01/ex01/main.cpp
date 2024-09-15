#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde(int N, std::string name);

int main() {
    // Demande combien de zombies l'utilisateur veut créer
    std::cout << "How many zombies do you want? ;)" << std::endl;
    int n;
    std::cin >> n;  // Utilisation correcte de std::cin

    // Crée la horde de zombies avec le nombre spécifié
    Zombie* horde = zombieHorde(n, "HordeZombie");

    // Chaque zombie de la horde s'annonce
    for (int i = 0; i < n; i++) {
        horde[i].announce();
    }

    // Libération de la mémoire allouée dynamiquement
    delete[] horde;

    return 0;
}
