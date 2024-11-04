#include "image.h"

#include <iostream>
#include <string>
using namespace std;

//constructeur
image::image()
{

}
image::image(string nom,string titre,string description,string format)
{
    Nom=nom;
    Titre=titre;
    Description=description;
    Format=format;
}
//destructeur
image::~image()
{
    //dtor
}
//Autres methodes

void image::Afficher()const{
cout << "Nom:" <<Nom <<endl <<endl ;
cout<<"Titre:" <<Titre <<endl<<endl;
cout<<"Description:"<<Description <<endl<<endl;
cout<<"Format:"<<Format<<endl<<endl;
}
//Acesseur
 string image::getNom() const{
 return Nom;
 }
 string image:: getTitre() const{
 return Titre;
 }
 string image:: getDescription() const{
 return Description;
 }
 string image:: getFormat() const{
 return Format;
 }
//Mutateur

/*using namespace std;

class Images {
    private:
    string Categorie;
    std::string Nom;
    int Nbre_T�l�chargements;
    std::string Titre;
    std::string Description;
    std::string Format;
    bool statut;


    public:
    Images(std::string categorie, std::string nom, int nbreTelechargements, std::string titre, std::string description, std::string format, bool statut): Categorie(categorie), Nom(nom), Nbre_T�l�chargements(nbreTelechargements), Titre(titre), Description(description), Format(format), statut(statut) {}


    void afficherCaracteristiques() const {
    std::cout << "Cat�gorie: " << Categorie << std::endl;
    std::cout << "Nom: " << Nom << std::endl;
    std::cout << "Nbre_T�l�chargements: " << Nbre_T�l�chargements << std::endl;
    std::cout << "Description: " << Description << std::endl;
    std::cout << "Format: " << Format << std::endl;


    if (statut) {
        std::cout << "Statut: Approuv�e" << std::endl;
    } else {
        std::cout << "Statut: Rejet�e" << std::endl;
    }
};*/