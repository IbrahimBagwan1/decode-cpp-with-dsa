#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){
  int arr[]={1,2,3,5,7,8};
  int target= 4;
  int n= sizeof(arr)/ sizeof(arr[0]);

  int lo=0;
  int hi= n-1;
  bool flag= false;
  while(lo<=hi){
    int mid = lo + (hi-lo)/2;
    if(target== arr[mid]){
      cout<< arr[mid-1] ; // this is for the lower bound, if you want to calculate for upper bound do arr[mid+1];   
      flag=true;
      return 0;
    }  
    // else if(arr[mid] > target && arr[mid-1]< target) cout<< arr[mid-1];
    else if(arr[mid] < target) lo = mid+1 ;
    else hi= mid-1;
  }

  if(!flag) cout<<arr[hi]; // to print the Lower bound
  if(!flag) cout<<arr[lo]; // to print the upper bound

  return 0;
}