#pragma once
#include <iostream>

class Point {
private:
    double x, y;

    // Constructeurs priv�s
    Point(double x, double y) : x(x), y(y) {}

public:
    // M�thode statique pour cr�er une instance de Point
    static Point creerPoint(double x, double y) {
        return Point(x, y);
    }

    // M�thodes d'acc�s
    double getX() const { return x; }
    double getY() const { return y; }

    // M�thode pour translater le point
    void translater(double dx, double dy) {
        x += dx;
        y += dy;
    }

    // Affichage du point
    void afficher() const {
        std::cout << "Point(" << x << ", " << y << ")" << std::endl;
    }
};
