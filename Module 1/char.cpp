#include<iostream>
using namespace std;

int main(){
  cout<< "This is Char Studying !!"<<endl;
  cout<< "Printing The ASCII Values: ";
  char ch='a'; 
  cout<<endl<<ch;
  cout<<": "<<int(ch);
  for (int i=0; i<=26; i++){
    cout<<endl<<char('a'+i)<< ":"<<int('a')+i;
  }
  return 0;
}