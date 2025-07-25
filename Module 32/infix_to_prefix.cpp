#include<iostream>
#include<stack>
#include<string>
using namespace std;

int precedence(char ch){
  switch (ch){
    // case '(':    return 5;
    // case ')':    return 5;
    case '*':    return 5;
    case '/':    return 5;
    case '+':    return 3;
    case '-':    return 3;
    
    default: return 0;
  }
}

string infix_to_prefix(string s){
  stack<string> var;
  stack<char> operate;
  char ch;
  for (int i = 0; i < s.length(); i++){
    ch = s[i];
    if(isalnum(ch)){
      string op(1,ch);
      var.push(op);
    }
    else{
      if(operate.empty()) operate.push(ch);
      else{
        while(!operate.empty() && precedence(operate.top()) >= precedence(ch)){
          char op = operate.top(); operate.pop();
       
          string right = var.top();
          var.pop();
          string left = var.top();
          var.pop();
          string ans = op + left+ right;
          var.push(ans);
        }
        operate.push(ch);
      }
    }
  }
  while(!operate.empty()){
        char op = operate.top(); operate.pop();
        string right = var.top(); var.pop();
        string left = var.top(); var.pop();
        string ans = op + left + right;
        var.push(ans);
    }
  return var.top();
}

int main(){

  string infix = "a+b-c/d";
  cout<<endl<<"Infix: "<<infix;
  string prefix = infix_to_prefix(infix);
  cout<<endl<<"Prefix: "<<prefix;
  return 0;
}