
#include <string>


class Product
{
public:
    void SetPartA(const std::string &a);
    void SetPartB(const std::string &b);
    void SetPartC(const std::string &c);

private:
    std::string partA;
    std::string partB;
    std::string partC;
};

class Builder
{
public:
    Builder();

public:
    virtual void BuildPartA() = 0;
    virtual void BuildPartB() = 0;
    virtual void BuildPartC() = 0;

    Product *GetResult();

protected:
    Product *product = nullptr;
};

class ConcreteBuilder : public Builder
{

public:
    virtual void BuildPartA();
    virtual void BuildPartB();
    virtual void BuildPartC();
};

class Director
{

public:
    Director(Builder* builder);
    Product* CreateProduct();

private:
    Builder *builder_ = nullptr;

};