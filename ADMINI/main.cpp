#include <iostream>
#include "image.h"
#include "Galerie.h"

using namespace std;

int main()
{
    Galerie galerie;
    image img1("Chaussure.jpg","Chaussure","Image de chaussure","jpg");
    image img2("Arbre.jpg","Arbre","Image de arbre","png");
    image img3("Collier.jpg","Collier","Image de collier","jpg");
    image img4("Femme.jpg","Femme","Image d'une femme","jpg");
    image img5("Pizza.jpg","Pizza","Image de pizza","jpg");
    /*image1.Afficher();cout <<endl;
    image2.Afficher();cout <<endl;
    image3.Afficher();cout <<endl;
    image4.Afficher();cout <<endl;
    image5.Afficher();cout <<endl;*/
    galerie.Stocker(img1);
    galerie.Stocker(img2);
    galerie.Stocker(img3);
    galerie.Stocker(img4);
    galerie.Stocker(img5);
    cout << "vos Images:" << endl;

     galerie.Afficher_Images();

    return 0;
}


/*main.cpp
#include <iostream>
#include "Galerie.h"


using namespace std;

int main()
{
    Galerie galerie;

     galerie.Stocker("Image1.jpg");
     galerie.Stocker("Image2.png");

    cout << "Vos Images" << endl;

    galerie.Afficher_Images();

    return 0;
}*/
