#include<iostream>
using namespace std;

int main(){
  cout<<"The Size of Double: "<<sizeof(double);
  int x;

  cout<< endl <<&x<<endl;
  int *p=&x;

  cin>> *p;
  cout << "The Number entered using pointer deferencing is: "<<x<<endl;
  cout<<"The address of x is: "  <<p;
  return 0;
}