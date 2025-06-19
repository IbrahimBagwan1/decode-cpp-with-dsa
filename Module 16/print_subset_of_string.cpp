#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

void string_subset(string s, string original,vector<string>& v){
  if(original==""){
    // cout<<s<<endl;
    v.push_back(s);
    return;
  }
  char ch=original[0];
  string_subset(s+ch,original.substr(1),v);
  string_subset(s,original.substr(1),v);
}
int main(){
  string str="aba";
  vector<string> v;
  string_subset("",str,v);
  for(string ele: v){
    cout<<ele<<endl;
  }
  return 0;
}