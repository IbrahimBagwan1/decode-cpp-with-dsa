// find the first occurence of x.
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int arr[]={1,2,4,4,4,4,4,6,8,12,12,12,43,67,67,72};
  int target= 4;
  int n= sizeof(arr)/ sizeof(arr[0]);

  int lo=0;
  int hi= n-1;
  bool flag= false;
  while(lo<=hi){
    int mid = lo + (hi-lo)/2;
    if(target== arr[mid]){
      if(arr[mid-1] != target){
        flag=true;
        cout<<mid;
        break;
      }
      else{
        hi=mid-1;
      }
      
    }
    else if(arr[mid] < target) lo = mid+1 ;
    else hi= mid-1;
  }
  
  if(flag==false) cout<<"-1";
  
  return 0;
}