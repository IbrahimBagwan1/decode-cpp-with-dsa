#include<iostream>
using namespace std;

int main(){
  int arr[9]={3,7,2,8,5,1,4,6,9};
  int n= sizeof(arr)/sizeof(arr[0]);
  int k=3;

  int idx;
  int maxsum=0;
  int i=1,j=k;
  int cursum=0;
  for(int i=0; i<k; i++){
    cursum += arr[i];
  }
  maxsum=cursum;

  while(j<n){
    cursum=cursum - arr[i-1] + arr[j];
    if(maxsum<cursum){
      maxsum=cursum;
      idx=i;
    }
 
    i++;
    j++;
  }

  cout<<endl<<"The Maximum Sum of Sliding window is: "<<maxsum<<"  Starting at Index: "<<idx;
  return 0;
}