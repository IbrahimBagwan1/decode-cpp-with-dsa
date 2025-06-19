// area of a circle

#include<iostream>
using namespace std;

int main(){
  cout << "hello world" << endl;
  cout << "Area of a circle" << endl;
  float r;
  cout<< "Enter the Radius: ";
  cin >> r ;
  float pi=3.14;
  float area=float(pi)*r*r;
  cout<<"The area of the Circle is: "<< area;
  return 0;
}
