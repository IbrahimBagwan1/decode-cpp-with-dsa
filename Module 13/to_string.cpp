#include<iostream>
using namespace std;

int main(){
  long long arr=1234567890;
  string str="Hello this is String";
  str=to_string(arr);
  cout<<str.length();
  return 0;
}