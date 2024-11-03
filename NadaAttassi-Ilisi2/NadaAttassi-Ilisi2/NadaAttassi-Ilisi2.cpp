// NadaAttassi-Ilisi2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Losange.h"
#include "Point3D.h"
int main()
{
	Point3D* p1 = new Point3D(1, 1, 1);
	Point3D* p2 = new Point3D(4, 4, 4);
	Point3D* p3 = new Point3D(2, 8, 10);
	Point3D* p4 = new Point3D(7, 1, 23);
	//p1->afficher();
	Losange* l1 = new Losange();
	l1->ajouterPt(p1);
	l1->ajouterPt(p2);
	l1->ajouterPt(p3);
	l1->ajouterPt(p4);
	l1->surface();
	l1->afficher();


}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
