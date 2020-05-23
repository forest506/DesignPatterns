
#include "prototype.h"

#include <iostream>


Prototype* ConcretePrototype::Clone()
{
    return new ConcretePrototype();  
} 

Client::Client()
{
    src_ = new ConcretePrototype();
}

Prototype* Client::Operation()
{
    return src_->Clone();    
}