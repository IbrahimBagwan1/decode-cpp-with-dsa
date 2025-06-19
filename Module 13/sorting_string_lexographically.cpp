#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
  string s="ibrahim";
  cout<<"Enter the String: ";
  getline(cin,s);
  cout<<s<<endl;
  sort(s.begin(),s.end());
// using ascii values it sorts the string : the inbuilt-function...  ascii value of space is 32.
  cout<<s;
  return 0;
}