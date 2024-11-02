#ifndef IMAGE_H
#define IMAGE_H

#include <iostream>
using namespace std;

class image
{
    public:
        //Constructeur
        image();
        image(string nom,string titre,string description,string format);

        //image(string Nom,int Nbre_Téléchargements,string Titre,string Description,string Format,bool statut)
        //Destructeur
        ~image();
        //Autres méthodes
       void Afficher()const;
       void Approuver()const ;
       void Rejeter()const;
        //Accesseur
        string getNom() const;
        string getTitre() const;
        string getDescription() const;
        string getFormat() const;
        //Mutateur

    protected:

    private:
    string Categorie;
    string Nom;
    //int Nbre_Téléchargement;
    string Titre;
    string Description;
    string Format;
    bool statut;

};

#endif // IMAGE_H
