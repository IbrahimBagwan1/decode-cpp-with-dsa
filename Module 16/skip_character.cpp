#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

void skip_char(string s,string str, int idx){
  if(idx==str.length()){
    cout<<s;
    return ;
  }
  char ch=str[idx];
  if(ch=='a') skip_char(s,str,idx+1);
  else skip_char(s+ch,str,idx+1);
}

int main(){
  string str="ibrahim rasul bagwan";
  skip_char("",str,0);

  return 0;
}