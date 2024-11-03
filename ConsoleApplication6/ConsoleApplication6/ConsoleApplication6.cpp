#include <iostream>

class Animal {
public:
    virtual void parler() = 0; // Méthode virtuelle pure
    virtual void manger() = 0; // Méthode virtuelle pure

    virtual ~Animal() {}
};

class Chat : public Animal {
public:
    void parler() override {
        std::cout << "Le chat fait : Miaou !" << std::endl;
    }
    void manger() override {
        std::cout << "Le chat mange de la viande." << std::endl;
    }
};

int main() {
    // Animal a; // Erreur : Impossible d'instancier une classe abstraite
    Animal* animal = new Chat(); // OK : on utilise un pointeur vers la classe de base
    animal->parler();            // Affiche "Le chat fait : Miaou !"
    animal->manger();             // Affiche "Le chat mange de la viande."
    
    delete animal;
    return 0;
}
