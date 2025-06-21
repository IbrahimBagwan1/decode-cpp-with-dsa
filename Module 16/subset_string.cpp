#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

void printsubset(string ans, string original,int idx, vector<string> &v){
  if(idx==original.length()){
    v.push_back(ans);
    return ;
  }
  char ch = original[idx];
  printsubset(ans+ch, original, idx+1,v);
  printsubset(ans, original, idx+1,v);
}

int main(){
  string str = "abc";
  vector<string> v;
  printsubset("",str,0,v);
  for(int i=0; i<v.size(); i++){
    cout<<v.at(i)<<endl;
  }
  return 0;
}