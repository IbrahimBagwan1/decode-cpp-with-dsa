#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool isbalanced(string s){
  if(s.length() % 2 !=0) return false;
  stack<char> temp;
  int i=0;
  for(i=0; i<s.length(); i++){
    if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
      temp.push(s[i]);
    }
    else{
      if(temp.size()==0) return false;
      char ch = temp.top();
      temp.pop();
      if((ch == '(' && s[i]!=')')) return false;
      if((ch == '[' && s[i]!=']')) return false;
      if((ch == '{' && s[i]!='}')) return false;
    }
  }
  return temp.empty();
}

int main(){
  string s = "{[()()()]}";
  isbalanced(s) ? cout<< "True" : cout<<"False";

  return 0;
}