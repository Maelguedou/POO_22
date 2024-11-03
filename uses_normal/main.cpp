#include "uses.h"
#include <iostream>

int main() {
    // Exemple d'utilisation
    Utilisateur uses("Alice", 1, true, false);

    uses.SIdentifier();
    uses.Telecharger();
    uses.Ajouter_favoris();
    uses.Retirer_favoris();
    uses.Incrementer();

    return 0;
}
