#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int arr[5]={5,4,3,2,1};
  int n= sizeof(arr)/sizeof(arr[0]);
  int j;
  for(int i=0; i<n; i++){
    j=i;
    while(j>=1 && arr[j]<arr[j-1]){
      swap(arr[j], arr[j-1]);
      j--;
    }
  }

  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }

  return 0;
}