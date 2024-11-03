#pragma once
class Point3D 
{
private:
	int x;
	int y;
	int z;
public:
	Point3D();
	Point3D(int a, int  b,int c);
	void modifier(int a, int b,int c);
	Point3D* operator - (const Point3D& pt) const;
	float distance() const;
	void afficher() const;

};


