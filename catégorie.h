#ifndef CATEGORIE_H
#define CATEGORIE_H

#include <iostream>
#include <vector>
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
    void Ajouter_Image(const image& img);
    void Supprimer_Image(const string& nom);

    // Accesseur
    string getNom() const;
    protected:

    // Affichage
    void Afficher_Images() const;

    private:
    string Nom;
    vector<image> images; // Liste des images dans cette catégorie
};

#endif // CATEGORIE_H
