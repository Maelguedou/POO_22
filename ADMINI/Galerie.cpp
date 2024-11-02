#include "Galerie.h"
#include <iostream>
//Constructeur
Galerie::Galerie()
{

}
//Destructeur
Galerie::~Galerie()
{

}
//Autres methodes
void Galerie::Stocker(const image& img) {
   galerie.push_back(img);
}
 void Galerie::Afficher_Images()const {
    for (const auto& img : galerie) {
        std::cout << "Nom: " << img.getNom()
                  << ", Titre: " << img.getTitre()
                  << ", Format: " << img.getFormat()
                  << ", Description: " << img.getDescription() << std::endl;
    }
}
//Acesseur

//Mutateur
