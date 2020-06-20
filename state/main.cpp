

#include "state.h"


int main() {  

Context *context = new Context(new ConcreteStateA);
  context->Request1();
  context->Request2();
  delete context;


  return 0;
}