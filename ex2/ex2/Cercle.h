#pragma once
#include <iostream>
#include <cmath>
#include "Point.h"

class Cercle {
private:
    double rayon;
    Point centre;

public:
    // Constructeur avec un Point (utilisant la m�thode creerPoint)
    Cercle(double r, const Point& p) : rayon(r), centre(p) {}

    // M�thode pour afficher les attributs du cercle
    void afficher() const {
        std::cout << "Cercle de rayon " << rayon << " et centre ";
        centre.afficher();
    }

    // M�thode pour modifier le rayon
    void setRayon(double r) {
        rayon = r;
    }

    // M�thode pour translater le centre
    void translaterCentre(double dx, double dy) {
        centre.translater(dx, dy);
    }

    // M�thode pour calculer la surface du cercle
    double surface() const {
        return M_PI * rayon * rayon;
    }

    // M�thode pour calculer le p�rim�tre du cercle
    double perimetre() const {
        return 2 * M_PI * rayon;
    }

    // Tester l'�galit� entre deux cercles
    bool operator==(const Cercle& autre) const {
        return (rayon == autre.rayon) &&
            (centre.getX() == autre.centre.getX()) &&
            (centre.getY() == autre.centre.getY());
    }

    // V�rifier si un point appartient au cercle
    bool contientPoint(const Point& p) const {
        double dist = sqrt(pow(p.getX() - centre.getX(), 2) + pow(p.getY() - centre.getY(), 2));
        return dist <= rayon;
    }
};
