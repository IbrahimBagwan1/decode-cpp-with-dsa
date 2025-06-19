// in this question we are given to find the subset of the given string and there the subset should be unique no duplicate elements should be present, this i will code myself inshallah when i become used to it.
// remove_duplicate_substr;

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

void R_duplicate_substr(string ans, string original, vector<string>& v, bool flag){
  if(original==""){
    v.push_back(ans);
    return ;
  }
  char ch=original[0];
  if(original.length()==1){
    if(flag==true) R_duplicate_substr(ans+ch,original.substr(1),v,true);
    R_duplicate_substr(ans,original.substr(1),v,true);
    return;
  }
  char dh=original[1];
  if(ch==dh){
    if(flag==true) R_duplicate_substr(ans+ch,original.substr(1),v,true);
    R_duplicate_substr(ans,original.substr(1),v,false);
  }
  else{
    if(flag==true) R_duplicate_substr(ans+ch,original.substr(1),v,true);
    R_duplicate_substr(ans,original.substr(1),v,true);
  }
}

int main(){
  vector<string> a;
  string original="aab";
  R_duplicate_substr("",original,a,true);
  for(int i=0; i<a.size(); i++){
    cout<<a[i]<<endl;
  }
  
  return 0;
}