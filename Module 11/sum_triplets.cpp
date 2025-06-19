// Q1. Count the number of triplets whose sum is equal to the given value x.
#include<iostream>
using namespace std;

int main(){
  int arr[]={1,2,3,4,5,6};
  int x=10;
  int n=6;
  int count=0;
  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
      for(int k=j+1; k<n; k++){
        if(arr[i]+arr[j]+arr[k]==x && k<6){
          count++;
          cout<<endl<<"The indexes are: "<<i<<" " <<j<<" "<<k;
          cout<<endl<<"The Numbers are: "<<arr[i]<<" " <<arr[j]<<" "<<arr[k]<<endl;
        }
      }
    }
  }
  cout<<endl<<"The Total Number of combinations is: "<<count;
  return 0;
}