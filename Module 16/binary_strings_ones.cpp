// generate binary string of length n without consequtive ones.
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int n=5;
void binary(string s){
  if(s.length()==n){
    cout<<s<<endl;
    return ;
  }
  binary(s+'0');
  if (s=="" ||  s[(s.length()-1)] =='0')  binary(s+'1');
}

int main(){
  string str="";
  binary(str);
  return 0;
}