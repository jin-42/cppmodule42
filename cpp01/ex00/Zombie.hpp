#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
private:
    std::string name;  // Nom du zombie

public:
    Zombie(std::string zombieName);  // Constructeur
    ~Zombie();  // Destructeur

    void announce();  // Méthode pour annoncer le zombie
};

#endif
