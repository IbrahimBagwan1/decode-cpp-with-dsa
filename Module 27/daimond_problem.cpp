#include<iostream>
using namespace std;

class A{
public:
  int a_ka_instance1;
  int a_ka_instance2;
};

class B : virtual public A{

};

class C : virtual public A{

};

class D : public B, public C{
public:
  
};

int main(){
  D d;
  d.a_ka_instance1;
  C c;
  c.a_ka_instance2;
  return 0;
}