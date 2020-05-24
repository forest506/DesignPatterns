
#include "decorator.h"

int main()
{
  // 8. Client has the responsibility to compose desired configurations
  Widget *aWidget = new BorderDecorator(new BorderDecorator(new ScrollDecorator
    (new TextField(80, 24))));
  aWidget->draw();
}