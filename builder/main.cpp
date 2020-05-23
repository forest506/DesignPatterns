
#include "builder.h"

int main()
{
    Builder *builder = new ConcreteBuilder();
    Director dir(builder);
    Product *pd = dir.CreateProduct();

    return 0;
}