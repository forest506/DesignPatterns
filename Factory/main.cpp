
#include "Factory.h"

int main()
{
    Factory f;

    Product *pa = f.CreateProduct("A");
    pa->Show();

    Product *pb = f.CreateProduct("B");
    pb->Show();

    return 0;

}