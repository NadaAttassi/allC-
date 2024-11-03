#pragma once
class Point
{
private:
	int x;
	int y;
public:

	Point(int a,int  b);
	bool operator == (const Point& pt) const;
	void modifier(int a, int b);
	Point* operator - (const Point& pt) const ;
	Point* operator + (const Point& pt) const;
	Point* operator ^ (const int a) const;
	float norme();
	void afficher();

};

