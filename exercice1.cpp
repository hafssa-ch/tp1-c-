#include <iostream>
#include <string>
using namespace std;

// Déclaration de la classe CompteBancaire
class CompteBancaire {
private:
    string titulaire;  // Nom du titulaire du compte
    double solde;      // Montant disponible sur le compte

public:
    // Constructeur par défaut
    CompteBancaire() {
        solde = 0.0;
    }

    // Méthode pour définir le titulaire
    void definirTitulaire(string nom);

    // Méthode pour déposer une somme
    void depot(double montant);

    // Méthode pour retirer une somme (si solde suffisant)
    void retrait(double montant);

    // Méthode pour afficher les informations du compte
    void afficher();
};

// Définition des méthodes à l’extérieur de la classe

void CompteBancaire::definirTitulaire(string nom) {
    titulaire = nom;
}

void CompteBancaire::depot(double montant) {
    if (montant > 0) {
        solde += montant;
        cout << "Dépôt de " << montant << " effectué avec succès." << endl;
    } else {
        cout << "Montant de dépôt invalide !" << endl;
    }
}

void CompteBancaire::retrait(double montant) {
    if (montant <= solde && montant > 0) {
        solde -= montant;
        cout << "Retrait de " << montant << " effectué avec succès." << endl;
    } else {
        cout << "Retrait impossible : solde insuffisant ou montant invalide !" << endl;
    }
}

void CompteBancaire::afficher() {
    cout << "Titulaire : " << titulaire << endl;
    cout << "Solde actuel : " << solde << " DH" << endl;
}

// --- Fonction principale ---
int main() {
    CompteBancaire compte1;

    // Définir le titulaire
    compte1.definirTitulaire("Mohamed Lachgar");

    // Effectuer un dépôt
    compte1.depot(500.0);
    cout << "Solde après dépôt : " << endl;
    compte1.afficher();

    // Effectuer un retrait
    compte1.retrait(200.0);
    cout << "Solde après retrait : " << endl;
    compte1.afficher();

    return 0;
}
