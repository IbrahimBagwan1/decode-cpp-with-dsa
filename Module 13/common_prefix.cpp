// Write a function to find the longest common prefix string amongst an array of strings.
// If there is no common prefix, return an empty string "".

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
  vector<string> s=strs;
  sort(s.begin(), s.end());
  int n=s.size();

  string temp="";
  // if(s[0].substr(0,0)==s[n-1].substr(0,0)){
    for (int i = 0; i < s[0].size(); i++){
      if(s[0][i]==s[n-1][i]) temp+=s[0][i];
      else break;
    }

  // }
  return temp;
}

int main(){
  vector<string> s={"ab","ab","abc"};
  string ans= longestCommonPrefix(s);
  cout<<ans;
  

  return 0;
}