/*#ifndef ADMIN_H
#define ADMIN_H
#include <iosteam>
#include <string>
using namespace std;

class ADMIN
{
    public:
        //constructeur
        ADMIN();
        //destructeur
        ~ADMIN();
        //Autres methodes
      bool Approuver_image(char image,bool value);
      void Supprimer_Cat_Image(char categorie);
      bool Rejeter_Image(char image);
      bool Cree_Cat_Image(char name);
      void Editer_Cat_Image(bool Cree_Cat_Image(char name),char edit);
      void Add_user(char username,int user_Id,bool user_galerie,bool user_fonction);
        //Accesseur


        //Mutateur


        //Attributs

    protected:

    private:
        bool user_fonction;
        bool user_galerie;
        int user_Id;
        char username;
        char image;
        char categorie;
        char name;
        bool value;
};

#endif // ADMIN_H
*/
