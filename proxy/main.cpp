
#include "proxy.h"


int main()
{
  ProxySubject obj(string("the quick brown fox jumped over the dog"));
  obj->execute();
  obj.execute();
}
