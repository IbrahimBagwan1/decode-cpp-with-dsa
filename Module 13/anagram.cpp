#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
  string a;
  cout<<"Enter the First String: ";
  cin>>a;
  string b;
  cout<<"Enter the Second String: ";
  cin>>b;

  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
  if(a==b){
    cout<<"The Two String's are Anagram !!!";
  }else{
    cout<<"The Strings are not Anagram";
  }
  return 0;
}