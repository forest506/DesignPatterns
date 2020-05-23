
#include "Factory.h"

#include <iostream>

Product* Factory::CreateProduct(const std::string &type)
{
    if ("A" == type)
    {
        return new ProductA();
    }
    else if ("B" == type)
    {
        return new ProductB();
    }

    return nullptr;
}

void ProductA::Show()
{
    std::cout << "this is A" << std::endl;
}

void ProductB::Show()
{
    std::cout << "this is B" << std::endl;
}