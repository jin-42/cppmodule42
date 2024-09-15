#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
private:
    std::string name;  // Nom du zombie

public:
    Zombie();  // Constructeur par défaut
    ~Zombie();  // Destructeur

    void setName(std::string zombieName);  // Méthode pour initialiser le nom
    void announce();  // Méthode pour que le zombie s'annonce
};

#endif
