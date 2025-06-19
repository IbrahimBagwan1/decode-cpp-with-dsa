//  Find the word that appears the most number of times in a sentence (string).
// Also, print that word and how many times it appears.

#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;

int main(){
  string str="raghav is a math teacher , he a  DSA teacher as well";
  string temp;
  stringstream s(str);
  vector<string> v;
  while(s>>temp){
    // cout<<temp<<endl;
    v.push_back(temp);
  }
  sort(v.begin(),v.end());
  int n=v.size();
  int count=1;
  int maxc=1;
  int i,idx;
  for( i=1; i<n; i++){
      if(v[i]==v[i-1]) count++;
      else count=1;
      maxc=max(count,maxc);
      idx=i;
  }

  for(int i=1; i<n; i++){
    count=1;
  
      if(v[i]==v[i-1]) count++;
      else count=1;
    
    if(count==maxc){
      cout<<"THe Max Word Present is: "<<v[i]<<" "<<count<<endl;
    }
  }
  return 0;
}