#include<iostream>
using namespace std;

int main(){
  cout<< "Enter your Name: ";
  string naem;
  int num;
  cin >> naem;
  cout << "You Entered your Name: ";
  cout << naem<< endl;
  cout<<"so, "<< naem <<" Enter a Number To Calculate The Square: ";
  cin >> num;
  cout<< endl << "The square of the Number is: "<<num*num;
  return 0;
}