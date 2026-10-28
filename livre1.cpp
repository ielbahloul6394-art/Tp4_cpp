
#include <iostream>
#include <string>

using namespace std;

class Livre {
private:
    string titre;
    string auteur;
    int annee;

    static int nbLivres;

public:
    // Constructeur
    Livre(string t, string a, int an)
        : titre(t), auteur(a), annee(an) {
        nbLivres++;
    }

    // Afficher les informations du livre
    void afficher() const {
        cout << "Titre : " << titre << endl;
        cout << "Auteur : " << auteur << endl;
        cout << "Annee : " << annee << endl;
        cout << "--------------------" << endl;
    }

    // Methode statique
    static void afficherTotal() {
        cout << "Nombre total de livres : "
             << nbLivres << endl;
    }
};

// Initialisation de l'attribut statique
int Livre::nbLivres = 0;

int main() {
    Livre l1("1984", "George Orwell", 1949);
    Livre l2("Le Petit Prince", "Antoine de Saint-Exupery", 1943);
    Livre l3("L'Etranger", "Albert Camus", 1942);

    l1.afficher();
    l2.afficher();
    l3.afficher();

    // Appel sans creer d'objet
    Livre::afficherTotal();

    return 0;
}
