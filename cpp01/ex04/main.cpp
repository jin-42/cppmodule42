#include <iostream>
#include <fstream>
#include <string>

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

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    // Vérification que s1 n'est pas vide
    if (s1.empty()) {
        std::cerr << "Error: s1 cannot be empty" << std::endl;
        return 1;
    }

    // Ouvrir directement le fichier avec open dans le constructeur
    std::ifstream inFile(filename.c_str());  // Utilisation directe du constructeur avec open
    if (!inFile.is_open()) {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return 1;
    }

    // Lire tout le fichier dans une string
    std::string content;
    std::string line;
    while (std::getline(inFile, line)) {
        content += line + '\n';  // Ajouter chaque ligne avec un saut de ligne
    }
    inFile.close();  // Fermer le fichier après la lecture

    // Remplacer toutes les occurrences de s1 par s2
    replaceStrings(content, s1, s2);

    // Ouvrir directement le fichier de sortie avec open dans le constructeur
    std::ofstream outFile((filename + ".replace").c_str());  // Utilisation directe du constructeur avec open
    if (!outFile.is_open()) {
        std::cerr << "Error: Could not create output file" << std::endl;
        return 1;
    }

    // Écrire le contenu modifié dans le fichier de sortie
    outFile << content;
    outFile.close();  // Fermer le fichier après l'écriture

    return 0;
}
