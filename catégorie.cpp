#include "catégorie.h"

// Constructeurs
Categorie::Categorie()
{

}

Categorie::Categorie(string nom)
{
    Nom=nom;
}
// Destructeur
Categorie::~Categorie()
{

}

// Autres méthodes
void Categorie::Ajouter_Image(const image& img) {
    images.push_back(img);
    cout << "Image ajoutée à la catégorie: " << Nom << endl;
}

void Categorie::Supprimer_Image(const string& nom) {
    for (auto it = images.begin(); it != images.end(); ++it) {
        if (it->getNom() == nom) {
            images.erase(it);
            cout << "Image supprimée: " << nom << endl;
            return;
        }
}

// Accesseur
string Categorie::getNom() const {
    return Nom;
}
