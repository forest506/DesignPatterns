
#include "flyweight.h"

int main()
{
  for (int i = 0; i < Factory::X; ++i)
  {
    for (int j = 0; j < Factory::Y; ++j)
      Factory::get_fly(i)->report(j);
    cout << '\n';
  }
  Factory::clean_up();
}