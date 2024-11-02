#ifndef GALERIE_H
#define GALERIE_H
#include<vector>
#include<string>
#include "image.h"

class Galerie
{
    public:
        Galerie();
        ~Galerie();

       void Stocker(const image& img);
       void Afficher_Images()const;

    protected:

    private:
    std::vector<image>galerie;
};

#endif // GALERIE_H*/
