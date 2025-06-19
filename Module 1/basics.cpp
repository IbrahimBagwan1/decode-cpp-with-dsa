#include<iostream>
using namespace std;

int main(){
  cout<<"hello world"<<endl;
  cout<<"Enter the Radius of the circle: ";

  float r;
  cin>>r;
  float res = 3.14*r*r;
  cout<< "The Area of the circle is: "<<res; 
  return 0;
}