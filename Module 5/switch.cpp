#include<iostream>
using namespace std;

int main(){
  int x;
  cout<<"Enter the Number A Suprise for You: ";
  cin>> x;
  switch (x)
  {
  case 1:
    cout<<"Monday";
    break;
  case 2:
    cout<<"Wednesday";
    break;
  case 3:
    cout<<"Friday";
    break;
  case 4:
    cout<<"Sunday";
    break;
  
  default:
    cout<<"Invalid Input, Enter the choice between 1 to 4: ";
    break;
  }
  return 0;
}