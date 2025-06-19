#include<iostream>
using namespace std;

int main(){
  int num;
  cout<< "Enter the Number: ";
  cin>>num;
  if(num >=0 && num <=999){
    cout<<"The Input is a 3 Digit Number!!";
  }else{
    cout<<"The Input is Not a 3 Digit Number!!";
  }
  return 0;
}