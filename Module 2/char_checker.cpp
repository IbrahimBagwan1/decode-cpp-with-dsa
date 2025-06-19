#include<iostream>
using namespace std;

int main(){
  char ch;
  cout<< "Enter the character: ";
  cin>> ch;
  if((ch >=65 && ch<=80) ||(ch >=97 && ch<=122)){
    cout<< "The Character Entered is an Alphabet!!!";
  }else{
    cout<< "The Character Entered is Not an Alphabet!!!";
  }
  return 0;
}