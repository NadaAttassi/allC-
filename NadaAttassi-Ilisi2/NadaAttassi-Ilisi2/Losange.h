#pragma once
#include "Forme.h"
#include "Point3D.h"
class Losange :
    public Forme
{
private:
    Point3D** sommets;
    float d1;
    float d2;
   static int counter;
   
public:
    Losange();
    void ajouterPt(Point3D* pt);
    void surface() override;
    void afficher() const;
    ~Losange();



};

