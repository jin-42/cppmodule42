#include "Zombie.hpp"

// Fonction qui crée une horde de N zombies
Zombie* zombieHorde(int N, std::string name) {
    // Allocation dynamique d'un tableau de N zombies
    Zombie* horde = new Zombie[N];

    // Initialisation de chaque zombie dans la horde
    for (int i = 0; i < N; i++) {
        horde[i].setName(name);
    }

    // Retourne un pointeur vers le premier zombie
    return horde;
}
