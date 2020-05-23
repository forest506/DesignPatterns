
#include "Factory.h"

int main()
{

    AbstractFactory *f1 = new Factory1();
    f1->CreateProductA();
    f1->CreateProductB();

    AbstractFactory *f2 = new Factory2();
    f2->CreateProductA();
    f2->CreateProductB();
}