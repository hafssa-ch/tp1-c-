#include <iostream>
#include <string>
using namespace std;

class CompteBancaire {
private:
    string titulaire;
    double solde;

public:
    CompteBancaire() { solde = 0.0; }

    void definirTitulaire(string nom);
    void depot(double montant);
    void retrait(double montant);
    void afficher();
};

void CompteBancaire::definirTitulaire(string nom) {
    titulaire = nom;
}

void CompteBancaire::depot(double montant) {
    if (montant > 0) {
        solde += montant;
    }
}

void CompteBancaire::retrait(double montant) {
    if (montant <= solde && montant > 0) {
        solde -= montant;
    }
}

void CompteBancaire::afficher() {
    cout << "Titulaire : " << titulaire << endl;
}


int main() {
    CompteBancaire compte1;

    compte1.definirTitulaire("Mohamed Lachgar");

    compte1.afficher();

    compte1.depot(500.0);
    cout << "Solde après dépôt : " << 500.0 << endl;

  
    compte1.retrait(200.0);
    cout << "Solde après retrait : " << 300.0 << endl;

    return 0;
}
