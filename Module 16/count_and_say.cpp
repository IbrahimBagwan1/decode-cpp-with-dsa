#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

string countNsay(int n){
  if(n==0) return "1";
  string str = countNsay(n-1);
  string ztr="";
  int frequency=1;
  char ch= str[0];
  for (int i = 1; i < str.length(); i++){
    char dh= str[i];
    
    if(ch==dh){
      frequency++;
    }
    else{
      ztr+= to_string(frequency) + ch;
      frequency=1;
      ch=dh;
    }
  }
  ztr+= to_string(frequency) + ch;
  return ztr;
}

int main(){
  string s;
  int n=5;

  s= countNsay(n);
  cout<<s;
  return 0;
}