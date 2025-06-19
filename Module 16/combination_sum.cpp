#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

void combination(int arr[], int n , vector<int> v, int target, int idx){
  if(target==0){
    for(int i=0; i<v.size(); i++){
      cout<<v[i]<<" ";
    }
    cout<<endl;
  }
  if(target<0){
    return ;
  }
  for (int i = idx; i < n; i++){
    v.push_back(arr[i]);
    combination(arr,n,v,target-arr[i],i);
    v.pop_back();
  }
  
}


int main(){
  int arr[]={2,3,5};
  int n=sizeof(arr)/sizeof(arr[0]);
  vector<int> v;
  
  combination(arr,n,v,8,0);;
  return 0;
}