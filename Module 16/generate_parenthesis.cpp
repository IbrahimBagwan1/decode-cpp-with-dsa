// Generates all valid balanced parentheses combinations of n pairs using recursion by tracking open and close counts
// example n=3.
// ((()))
// (()())
// (())()
// ()(())
// ()()()

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

void parenthesis(string v,int op, int cl, int n){
  if(cl == n){
    cout<<v<<endl;
    return ;
  }
  
  if(op < n)parenthesis(v+'(',op+1, cl, n);
  if(cl < op) parenthesis(v+')',op, cl+1, n);
  
}

int main(){
  string v;
  int n=3;
  parenthesis(v,0,0,n);
  return 0;
}