
#include "composite.h"

int main()
{
  Composite containers[4];

  for (int i = 0; i < 4; i++)
    for (int j = 0; j < 3; j++)
      containers[i].Add(new Leaf(i *3+j));

  for (int i = 1; i < 4; i++)
    containers[0].Add(&(containers[i]));

  for (int i = 0; i < 4; i++)
  {
    containers[i].traverse();
    cout << endl;
  }
}