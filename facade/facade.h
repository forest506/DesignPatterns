
class Add
{
public:
  static int Exec(int a, int b)
  {
    return a + b;
  }

};

class Sub
{

public:
  static int Exec(int a, int b)
  {
    return a - b;
  }

};

class Multi
{

public:
  static int Exec(int a, int b)
  {
    return a * b;
  }

};

class Facade{

public:
  int Add(int a, int b)
  {
    return Add::Exec(a, b);
  }

  int Sub(int a, int b)
  {
    return Sub::Exec(a, b);
  }

  int Multi(int a, int b){
    return Multi::Exec(a, b);
  }

}