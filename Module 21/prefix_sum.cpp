#include<iostream>
using namespace std;

int main(){
  int arr[]={1,4,5,6,12};
  int prefix[5];
  int n= sizeof(arr)/sizeof(arr[0]);
  prefix[0]=arr[0];
  cout<<prefix[0]<<" ";
  for(int i=1; i<n; i++){
    prefix[i] = arr[i]+prefix[i-1];
    cout<<prefix[i]<<" ";
  }
  return 0;
}