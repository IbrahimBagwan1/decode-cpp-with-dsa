// generates all permutations of a given string using recursion.

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

void permutation(string ans, string original){
  if(original==""){
    cout<<ans<<endl;
    return ;
  }
  for(int i=0; i < original.size(); i++){
    char ch=original[i];
    string left = original.substr(0,i);
    string right =original.substr(i+1);
    permutation(ans+ch,left+right);
  }
}

int main(){
  string original="abcd";
  permutation("",original);
  return 0;
}