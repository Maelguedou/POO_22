#include <iostream>
#include "uses.h"

int main() {
    //Exemple d'utilisation
    Utilisateur utilisateur("Alice", 1, true, false);

    utilisateur.SIdentifier();
    utilisateurcharger();
    utilisateur.Ajouter_favoris();
    utilisateur.Retirer_favoris();
    utilisateur.Incrementer();

 return 0;
}
