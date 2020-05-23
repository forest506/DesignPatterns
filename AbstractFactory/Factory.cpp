
#include "Factory.h"

#include <iostream>


void Factory1::CreateProductA()
{
    auto a1 = new ProductA1();    
    a1->Show();    
}

void Factory1::CreateProductB()
{
    auto b1 = new ProductB1();    
    b1->Show();    
}

void Factory2::CreateProductA()
{
    auto a2 = new ProductA2();    
    a2->Show();    
}

void Factory2::CreateProductB()
{
    auto b2 = new ProductB2();    
    b2->Show();    
}


void ProductA1::Show()
{
    std::cout << "product a1" <<std::endl;    
}

void ProductB1::Show()
{
    std::cout << "product b1" <<std::endl;    
}

void ProductA2::Show()
{
    std::cout << "product a2" <<std::endl;    
}

void ProductB2::Show()
{
    std::cout << "product b2" <<std::endl;    
}
