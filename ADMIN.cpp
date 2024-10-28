#include "ADMIN.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

ADMIN::ADMIN() {
    // Constructeur
}

ADMIN::~ADMIN() {
    // Destructeur
}

bool ADMIN::Approuver_image(const string& image, bool value) {
    if (value) {
        cout << "Approuvée";
        return true;
    } else {
        cout << "Rejetée";
        return false;
    }
}

void ADMIN::Supprimer_Cat_Image(string& categorie) {
    if (categorie.empty()) {
        cout << "Elle n'existe pas";
    } else {
        categorie.clear();
        cout << "Catégorie supprimée";
    }
}

bool ADMIN::Rejeter_image(const string& image) {
    if (!image.empty()) {
        cout << "Image rejetée";
        return true;
    } else {
        cout << "Image non reconnue";
        return false;
    }
}

void ADMIN::Add_user(const string& username, int user_Id, bool user_fonction) {
    string x = user_fonction ? "Admin" : "NonAdmin";
    cout << "Vous avez ajouté " << username << " avec ID " << user_Id << " (" << x << ")";
}

bool ADMIN::Cree_Cat_Image(const string& name) {

}

void ADMIN::Editer_Cat_Image(const string& name, const string& edit) {

}
