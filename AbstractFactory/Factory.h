

class AbstractFactory
{

public:
    virtual void CreateProductA() = 0;
    virtual void CreateProductB() = 0;
};

class Factory1 : public AbstractFactory
{

public:
    virtual void CreateProductA() override;
    virtual void CreateProductB() override;
};

class Factory2 : public AbstractFactory
{

public:
    virtual void CreateProductA();
    virtual void CreateProductB();
};

class AbstractProductA
{

public:
    virtual void Show() = 0;
};

class ProductA1 : AbstractProductA
{
public:
    virtual void Show();
};

class ProductA2 : AbstractProductA
{
public:
    virtual void Show();
};

class AbstractProductB
{

public:
    virtual void Show() = 0;
};

class ProductB1 : AbstractProductB
{
public:
    virtual void Show();
};

class ProductB2 : AbstractProductB
{
public:
    virtual void Show();
};
