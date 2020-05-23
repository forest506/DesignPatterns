
#include "builder.h"

#include <iostream>


void Product::SetPartA(const std::string &a)
{
    partA = a;
}

void Product::SetPartB(const std::string &b)
{
    partB = b;
}

void Product::SetPartC(const std::string &c)
{
    partC = c;
}

Builder::Builder()
{
    product = new Product();
}

Product *Builder::GetResult()
{
    return product;
}

void ConcreteBuilder::BuildPartA()
{
    product->SetPartA("pa");
}

void ConcreteBuilder::BuildPartB()
{
    product->SetPartB("pb");
}

void ConcreteBuilder::BuildPartC()
{
    product->SetPartC("pc");
}

Director::Director(Builder *builder){
    builder_ = builder;
}

Product* Director::CreateProduct()
{
    builder_->BuildPartA();
    builder_->BuildPartB();
    builder_->BuildPartC();

    return builder_->GetResult();
}