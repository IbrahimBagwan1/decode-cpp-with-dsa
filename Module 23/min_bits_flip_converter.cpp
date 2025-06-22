#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int flip_checker(string &a, string &b){
  int count=0;
  int n= a.size();
  for(int i=0; i<n; i++){
    if(a[i]!=b[i]) count++;
  }
  return count;
}

int main(){
  string b1 = "01110";
  string b2 = "10100";

  int flip = flip_checker(b1,b2);
  cout<<"THE Min number of Elements to flip are: "<< flip;

  return 0;
}