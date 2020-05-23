
#include <string>

class Product;

class Factory
{

public:
    Product *CreateProduct(const std::string &type);
};

class Product
{
public:
    virtual void Show()= 0;
};

class ProductA : public Product
{
public:
    virtual void Show();
};

class ProductB : public Product
{
public:
    virtual void Show();
};
