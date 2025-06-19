#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

void sub_array(int arr[], int n, int idx, vector<int> v){
  if(idx==n){
    for (int i = 0; i < v.size(); i++){
      cout<<v[i];
    }
    cout<<endl;
    return ;
  }
  sub_array(arr,n,idx+1,v); //these are left calls that sir made the daigram like tree he had made, basically think about the recurrsion, if you will think then you will understand this
  
  if(v.size()==0  || (arr[idx-1] == v[v.size()-1]) ){
    v.push_back(arr[idx]);
    sub_array(arr,n,idx+1,v);
  }
}

int main(){
  int arr[]={1,2,3,4};
  int n=sizeof(arr)/sizeof(arr[0]);
  vector<int> v;
  sub_array(arr,n,0,v);
  return 0;
}