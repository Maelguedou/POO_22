#ifndef CATEGORIE_H
#define CATEGORIE_H

#include <iostream>
#include <list>
#include "image.h"

using namespace std;

class Categorie
{
    public:
    // Constructeur
    Categorie();
    Categorie(string nom);

    // Destructeur
    ~Categorie();
    // Autres méthodes
    void Ajouter_Image(const image& img)
    {
        images.push_back(img);
        cout << "Image ajoutée à la catégorie: " << Nom << endl;
    }
    
    void Supprimer_Image(const string& nom)
    {
        for (auto it = images.begin(); it != images.end(); ++it) {
            if (it->getNom() == nom) {
                images.erase(it);
                cout << "Image supprimée: " << nom << endl;
                return;
            }
        }
    }
};

    // Accesseur
    string getNom() const;
    protected:

    // Affichage
    void Afficher_Images() const;

    private:
    string Nom;
    list<image> images;

#endif // CATEGORIE_H
