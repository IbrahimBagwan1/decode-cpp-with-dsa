#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

void array_to_sub(int n, int arr[], int idx,  vector<int> v){
  if(idx==n){
    for(int i=0; i<v.size(); i++){
      cout<<v[i]<<" ";
    }
    cout<<endl;
    return ;
  }
  int num=arr[idx];
  array_to_sub(n,arr,idx+1,v);
  v.push_back(num);
  array_to_sub(n,arr,idx+1,v);
}

int main(){
  int arr[]={1,2,3};
  int n= sizeof(arr)/sizeof(arr[0]);
  vector<int> v;
  array_to_sub(n,arr,0,v);
}