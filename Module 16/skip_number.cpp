#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void skip_num(vector<int> arr,vector< int> brr, int idx){
  if(idx==brr.size()){
    for (int i = 0; i < arr.size(); i++)
    {
      cout<<arr[i]<<" ";
    }
    return ;
  }
  int first=brr[idx];
  if(first==1){
    skip_num(arr,brr,idx+1);
    return ;
  } 
  arr.push_back(first);
  skip_num(arr,brr,idx+1);
}

int main(){
  vector<int> arr;
  vector<int> brr={1,1,3,4,1,3,1,6,1,7};
  skip_num(arr, brr, 0);
  return 0;
}