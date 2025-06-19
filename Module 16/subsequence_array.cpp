#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

void subsequence_arr(int n,int arr[], int idx, vector<int> v,int k){
  if(idx==n){
    if(v.size()==k){
      for (int i = 0; i < v.size(); i++){
          cout<<v[i]<<" ";
      }
      cout<<endl;  
    }
    return ;
  }
  subsequence_arr(n,arr,idx+1,v,k);
  v.push_back(arr[idx]);
  subsequence_arr(n,arr,idx+1,v,k);
}

int main(){
  vector<int> v;
  int arr[]={1,2,3};
  int k=2;
  int n=sizeof(arr)/sizeof(arr[0]);
  subsequence_arr(n,arr,0,v,k);
  return 0;
}