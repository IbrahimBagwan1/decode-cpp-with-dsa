// very very bad method : Brute Force Method
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

void permutation(vector<string>& s ,string ans, string original){
  if(original==""){
    s.push_back(ans);
    // cout<<ans<<endl;
    return ;
  }
  for(int i=0; i < original.size(); i++){
    char ch=original[i];
    string left = original.substr(0,i);
    string right =original.substr(i+1);
    permutation(s,ans+ch,left+right);
  }
}

int main(){
  int n=3;
  string original="";
  for(int i=1; i<=n; i++){
    original=original+to_string(i);
  }
  // string original="123";
  int k=2;
  vector<string> s;
  permutation(s,"",original);
  cout<<"The Permutation at "<<k<<" is: ";
  cout<<s.at(k-1);
  return 0;
}