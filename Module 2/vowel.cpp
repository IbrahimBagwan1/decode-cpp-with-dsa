#include<iostream>
using namespace std;

int main(){
  cout<< "Enter the Character: ";
  char ch;
  cin>> ch;

  if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'){
    cout<<"The Alphabet Entered is a Vowel !!!";
  }else{
    cout<<"The Alphabet Entered is a Consonant !!!";
  }
  
  return 0;
}