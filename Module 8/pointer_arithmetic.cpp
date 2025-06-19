#include<iostream>
using namespace std;

int main(){
  int a ;
  int* x=&a;
  int* c = ++x;
  cout<<"The Address is: "<<x<<endl;
  cout<<"The Address After Incrementing is: "<<++x<<endl;
  return 0;
}