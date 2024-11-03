#include <iostream>
#include "Complexe.h" // Assurez-vous que le fichier d'en-tête Complexe.h est correctement inclus

int main() {
    // Création d'un objet complexe c1
    Complexe* c1 = new Complexe(1, 1);

    // Affichage de c1
    std::cout << "c1: ";
    c1->afficher();

    // Calcul et affichage du module de c1
    double a = c1->module();
    std::cout << "Module de c1: " << a << std::endl;

    // Création d'un autre objet complexe c2
    Complexe* c2 = new Complexe(2, 3);
    std::cout << "c2: ";
    c2->afficher();

    // Calcul et affichage du conjugé de c1
    Complexe* conj_c1 = c1->conjugue();
    std::cout << "Conjugé de c1: ";
    conj_c1->afficher();

    // Addition de c1 et c2
    Complexe* sum = *c1 + *c2;
    std::cout << "c1 + c2: ";
    sum->afficher();

    // Addition d'un nombre réel à c1
    Complexe* sum_with_real = *c1 + 2.0;
    std::cout << "c1 + 2: ";
    sum_with_real->afficher();

    // Multiplication de c1 et c2
    Complexe* product = *c1 * *c2;
    std::cout << "c1 * c2: ";
    product->afficher();

    // Multiplication d'un complexe par un réel
    Complexe* product_with_real = *c1 * 2.0;
    std::cout << "c1 * 2: ";
    product_with_real->afficher();

    // Soustraction de c1 et c2
    Complexe* difference = *c1 - *c2;
    std::cout << "c1 - c2: ";
    difference->afficher();

    // Soustraction d'un réel à c1
    Complexe* difference_with_real = *c1 - 1.0;
    std::cout << "c1 - 1: ";
    difference_with_real->afficher();

    // Division de c1 par c2
    Complexe* quotient = *c1 / *c2;
    std::cout << "c1 / c2: ";
    quotient->afficher();

    // Division d'un complexe par un réel
    Complexe* quotient_with_real = *c1 / 2.0;
    std::cout << "c1 / 2: ";
    quotient_with_real->afficher();

    // Vérification de l'égalité entre c1 et c2
    bool isEqual = *c1 == *c2;
    std::cout << "c1 est égal à c2: " << (isEqual ? "Oui" : "Non") << std::endl;

    // Libération de la mémoire
    delete c1;
    delete c2;
    delete conj_c1;
    delete sum;
    delete sum_with_real;
    delete product;
    delete product_with_real;
    delete difference;
    delete difference_with_real;
    delete quotient;
    delete quotient_with_real;

    return 0;
}
