#include "uses.h"
#include <iostream>

// Constructeur
Utilisateur::Utilisateur(std::string nom, int id, bool galerie, bool fonction)
    : nom(nom), id(id), galerie(galerie), fonction(fonction) {}

// Méthodes
void Utilisateur::Telecharger() {
    std::cout << nom << " a téléchargé un fichier." << std::endl;
}

void Utilisateur::Retirer_favoris() {
    std::cout << nom << " a retiré un élément des favoris." << std::endl;
}

void Utilisateur::Ajouter_favoris() {
    std::cout << nom << " a ajouté un élément aux favoris." << std::endl;
}

void Utilisateur::Incrementer() {
    std::cout << "Incrémentation de l'utilisateur " << nom << "." << std::endl;
    // Implémentez la logique d'incrémentation ici
}

void Utilisateur::SIdentifier() {
    std::cout << nom << " s'est identifié avec l'ID " << id << "." << std::endl;
}

// Getters
std::string Utilisateur::getNom() const {
    return nom;
}

int Utilisateur::getId() const {
    return id;
}

bool Utilisateur::hasGalerie() const {
    return galerie;
}

bool Utilisateur::hasFonction() const {
    return fonction;
}
