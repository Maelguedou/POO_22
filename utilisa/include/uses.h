#ifndef UTILISATEUR_H
#define UTILISATEUR_H

#include <string>

class Utilisateur {
private:
    std::string nom;
    int id;
 bool galerie;
    bool fonction;

public:
    // Constructeur
    Utilisateur(std::string nom, int id, bool galerie, bool fonction);

    // Méthodes
    void Telecharger();
    void Retirer_favoris();
    void Ajouter_favoris();
    void Incrementer();
    void SIdentifier();

    // Getters
   ::string getNom() const;
    int getId() const;
    bool hasGalerie() const;
    bool hasFonction() const;
};

#endif // UTILISATEUR_H
