// Ques : Input a string of size n and Update all
// the even positions in the string to character
// ‘a’. Consider 0-based indexing.

#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter The size of String: ";
  cin>> n;

  string s[n];
  cout<<"Enter the string: ";
  for(int i=0; i<n; i++){
    cin>>s[i];
  }
  cout<<endl<<"The Original String is: "<<endl;
  for(int i=0; i<n; i++){
    cout<<s[i];
  }

  for(int i=0; i<n; i++){
    if(i % 2==0){
      s[i]='a';
    }
  }

  cout<<endl<<"The Changed String is: "<<endl;
  for(int i=0; i<n; i++){
    cout<<s[i];
  }
  return 0;
}