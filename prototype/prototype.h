
#include <string>

//使用场景
//对象的创建比较复杂

class Prototype;

class Client
{
public:
    Client();
    Prototype* Operation();

private:
    Prototype *src_ = nullptr;
};

class Prototype
{
public:
    virtual Prototype* Clone() = 0;
};

class ConcretePrototype : public Prototype
{

public:
    virtual Prototype* Clone();

private:
    std::string name_;
};
