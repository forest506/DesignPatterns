
#include "command.h"

int main()
{
  // Fred will "execute" Barney which will result in a call to passOn()
  // Barney will "execute" Betty which will result in a call to gossip()
  // Betty will "execute" Wilma which will result in a call to listen()
  Person wilma("Wilma", Command());
  // 2. Instantiate an object for each "callback"
  // 3. Pass each object to its future "sender"
  Person betty("Betty", Command(&wilma, &Person::listen));
  Person barney("Barney", Command(&betty, &Person::gossip));
  Person fred("Fred", Command(&barney, &Person::passOn));
  fred.talk();
}
