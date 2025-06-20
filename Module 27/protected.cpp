#include<iostream>
using namespace std;

class A{
private:
  int a_ka_private;

protected:
  int a_ka_protected;

public:
  int a_ka_public;
};

class B{
public:
  int b_ka_public;
  
};

class C: public A, public B{
public:

  int c_ka_public;
};

int main(){
  C star;
  star.b_ka_public=12;
  A star3;
  star3.a_ka_public=21;
  cout<<star3.a_ka_public;
 
  return 0;
}