#include <iostream>
#include <fstream>
#include <string>

// Fonction pour remplacer toutes les occurrences de s1 par s2 dans content
void replaceStrings(std::string &content, const std::string &s1, const std::string &s2) {
    size_t pos = 0;
    while ((pos = content.find(s1, pos)) != std::string::npos) {
        content.erase(pos, s1.length());
        content.insert(pos, s2);
        pos += s2.length();  // Avancer le curseur après l'insertion
    }
}

int main(int argc, char *argv[]) {
    // Vérification du nombre d'arguments
    if (argc != 4) {
        std::cerr << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    // Vérification que s1 n'est pas vide
    if (std::string(argv[2]).empty()) {
        std::cerr << "Error: s1 cannot be empty" << std::endl;
        return 1;
    }

    // Ouvrir le fichier d'entrée
    std::ifstream inFile(argv[1]);
    if (!inFile) {
        std::cerr << "Error: Could not open file " << argv[1] << std::endl;
        return 1;
    }

    // Lire tout le fichier dans une string
    std::string content;
    std::string line;
    bool firstLine = true;  // Pour éviter d'ajouter une nouvelle ligne inutile à la fin
    while (std::getline(inFile, line)) {
        if (!firstLine) {
            content += '\n';  // Ajouter un saut de ligne entre chaque ligne
        }
        content += line;
        firstLine = false;
    }
    inFile.close();  // Fermer le fichier après la lecture

    // Remplacer toutes les occurrences de s1 par s2
    replaceStrings(content, argv[2], argv[3]);

    // Ouvrir le fichier de sortie
    std::ofstream outFile((std::string(argv[1]) + ".replace").c_str());
    if (!outFile) {
        std::cerr << "Error: Could not create output file" << std::endl;
        return 1;
    }

    // Écrire le contenu modifié dans le fichier de sortie
    outFile << content;
    outFile.close();  // Fermer le fichier après l'écriture

    return 0;
}

