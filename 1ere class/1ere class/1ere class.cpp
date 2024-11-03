// 1ere class.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
using namespace std;
#include "Vehicule.h"
int main()
{
    Vehicule V(1, "BMW",0);
    Vehicule* V2 = new Vehicule(2, "", 3);//constructeur avec param mais avec pointeur
    Vehicule* V3 = new Vehicule(*V2);// constructeur de recopie
    V.afficher();
    cout << "\n On avance la vehicule:\n";
    V.avancer();
    V.afficher();
    cout << "\n On freine la vehicule:\n";
    V.freiner();
    V.afficher();

  //  cout << "Hello World!\n";
    return 0;
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
