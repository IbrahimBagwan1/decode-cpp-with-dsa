#include<iostream>
#include<algorithm>
using namespace std;

void print_array(int arr[], int n, int i){
  if(i==n) return ;
  cout<<arr[i]<<" ";
  print_array(arr,n,i+1);
}

int main(){
  int arr[]={1,2,3,4,5,6,7};
  int n= sizeof(arr)/sizeof(arr[0]);
  print_array(arr,n,0);
  return 0;
}