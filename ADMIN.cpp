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
        cout << "Approuv�e";
        return true;
    } else {
        cout << "Rejet�e";
        return false;
    }
}

void ADMIN::Supprimer_Cat_Image(string& categorie) {
    if (categorie.empty()) {
        cout << "Elle n'existe pas";
    } else {
        categorie.clear();
        cout << "Cat�gorie supprim�e";
    }
}

bool ADMIN::Rejeter_image(const string& image) {
    if (!image.empty()) {
        cout << "Image rejet�e";
        return true;
    } else {
        cout << "Image non reconnue";
        return false;
    }
}

void ADMIN::Add_user(const string& username, int user_Id, bool user_fonction) {
    string x = user_fonction ? "Admin" : "NonAdmin";
    cout << "Vous avez ajout� " << username << " avec ID " << user_Id << " (" << x << ")";
}

bool ADMIN::Cree_Cat_Image(const string& name) {

}

void ADMIN::Editer_Cat_Image(const string& name, const string& edit) {

}
