#include <iostream>
#include <string>
using namespace std;

// D�claration de la classe CompteBancaire
class CompteBancaire {
private:
    string titulaire;  // Nom du titulaire du compte
    double solde;      // Montant disponible sur le compte

public:
    // Constructeur par d�faut
    CompteBancaire() {
        solde = 0.0;
    }

    // M�thode pour d�finir le titulaire
    void definirTitulaire(string nom);

    // M�thode pour d�poser une somme
    void depot(double montant);

    // M�thode pour retirer une somme (si solde suffisant)
    void retrait(double montant);

    // M�thode pour afficher les informations du compte
    void afficher();
};

// D�finition des m�thodes � l�ext�rieur de la classe

void CompteBancaire::definirTitulaire(string nom) {
    titulaire = nom;
}

void CompteBancaire::depot(double montant) {
    if (montant > 0) {
        solde += montant;
        cout << "D�p�t de " << montant << " effectu� avec succ�s." << endl;
    } else {
        cout << "Montant de d�p�t invalide !" << endl;
    }
}

void CompteBancaire::retrait(double montant) {
    if (montant <= solde && montant > 0) {
        solde -= montant;
        cout << "Retrait de " << montant << " effectu� avec succ�s." << endl;
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

    // D�finir le titulaire
    compte1.definirTitulaire("Mohamed Lachgar");

    // Effectuer un d�p�t
    compte1.depot(500.0);
    cout << "Solde apr�s d�p�t : " << endl;
    compte1.afficher();

    // Effectuer un retrait
    compte1.retrait(200.0);
    cout << "Solde apr�s retrait : " << endl;
    compte1.afficher();

    return 0;
}
