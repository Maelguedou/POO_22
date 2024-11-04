#include <iostream>
#include "catégorie.h"
#include "image.h"

using namespace std;

int main() {
    Categorie nature("Nature");
    image img1("Chaussure.jpg","Chaussure","Image de chaussure","jpg");
    image img2("Arbre.jpg","Arbre","Image de arbre","png");
    image img3("Collier.jpg","Collier","Image de collier","jpg");
    image img4("Femme.jpg","Femme","Image d'une femme","jpg");
    image img5("Pizza.jpg","Pizza","Image de pizza","jpg");

    // Ajouter des images à la catégorie
    nature.Ajouter_Image(img1);
    

    // Supprimer une image
    nature.Supprimer_Image("Arbre.jpg");
    
}
