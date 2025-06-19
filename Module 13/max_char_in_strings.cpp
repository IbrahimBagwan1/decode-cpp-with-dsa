#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

  // // sabse bekar tarika...
  // string s={"ibrahim"};
  // sort(s.begin(),s.end());
  // cout<<s<<endl;
  // int temp_count=0;
  // vector<int>v;
  // int max=0;
  // int count;
  // for(int i=0; s[i]!='\0'; i++){
  //   count=1;
  //   for(int j=i+1; j<s.size(); j++){
  //     if(s[i]==s[j]) count++;
  //   }
  //   if(max< count) max=count;
  // }
  // cout<<endl<<max<<endl;

  // for(int i=0; s[i]!='\0'; i++){
  //   count=1;
  //   char ch=s[i];
  //   for(int j=i+1; j<s.size(); j++){
  //     if(s[i]==s[j]) count++;
  //   }
  //   if(count==max){
  //     cout<<s[i]<<" Comes: "<<count<<" Times"<<endl;
  //   }
  // }
  
  string s="leetcode";
  vector<int> arr(26,0);
  for(int i=0; i<arr.size(); i++){
    int idx= (int)s[i]-97;
    arr[idx]++;
  }
  
  int max=0;
  for(int i=0; i<26; i++){
    if(arr[i]>max) max=arr[i];
  }
  
  for(int i=0; i<26; i++){
    if(arr[i]==max){
      cout<<"THe Max Element is:  "<< char(i+97)<<" Comes "<<max<<" Times!"<<endl;
    }
  }
  

  return 0;
}