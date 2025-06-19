#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  string s;
  cout<<"Enter the String: ";
  getline(cin,s);
  int n=s.size();
  cout<<s.substr(n/2);
  return 0;
}