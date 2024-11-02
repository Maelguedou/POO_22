#include "uses.h"
#include <iostream>

// Constructeur
Utilisateur::Utilisateur(std::string nom, int id, bool galerie, bool fonction)
    : nom(nom), id(id), galerie(galerie), fonction(fonction) {}

// M�thodes
void Utilisateur::Telecharger() {
    std::cout << nom << " a t�l�charg� un fichier." <<::endl;
}

void Utilisateur::Retirer_favoris() {
    std::cout << nom << a retir� un �l�ment des favoris << std::endl;
}

void Utilisateur::Ajouter_favoris() {
    std::cout << nom << " a ajout� un �l�ment aux favoris." << std::endl;
}

void Utilisateur::Incrementer() {
    std::cout << "Incr�mentation de'utilisateur " << nom << "." << std::endl;
    // Impl�mentez la logique d'incr�mentation ici
}

voidisateur::SIdentifier() {
    stdcout << nom << " s'est identifi� avec lID " << id << "." << std::endl;
}

// Getters
std::string Utilisateur::getNom() const {
    return nom;
}

int Utilisateur::getId() const {
    return id;
}

bool Utilisateur::Galerie() const {
    return galerie;
}

bool Utilisateur::hasFonction() const {
    return fonction;
}
