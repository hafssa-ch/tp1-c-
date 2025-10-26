#include <iostream>
#include <string>

class Livre {
private:
    std::string titre;
    std::string auteur;
    int anneePublication;

public:
    // Déclaration des méthodes
    void definirLivre(std::string t, std::string a, int annee);
    void afficher() const;
    int getAnneePublication() const;
};

// Définition des méthodes en dehors de la classe

void Livre::definirLivre(std::string t, std::string a, int annee) {
    titre = t;
    auteur = a;
    anneePublication = annee;
}

void Livre::afficher() const {
    std::cout << "Titre : " << titre 
              << ", Auteur : " << auteur 
              << ", Année : " << anneePublication << std::endl;
}

int Livre::getAnneePublication() const {
    return anneePublication;
}

// Fonction principale
int main() {
    Livre livre1, livre2;

    livre1.definirLivre("Le C++ Moderne", "Bjarne Stroustrup", 2013);
    livre2.definirLivre("Programmation Orientée Objet", "Jean Dupont", 2020);

    livre1.afficher();
    livre2.afficher();

    return 0;
}
