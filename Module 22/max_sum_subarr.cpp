#include<iostream>
using namespace std;

int main(){
  int arr[9]={3,7,2,8,5,1,4,6,9};
  int n= sizeof(arr)/sizeof(arr[0]);
  int k=3;
  cout<<"Enter the Value of K(size of Sliding Window): ";
  cin>>k;
  int sum=0,idx;
  int temp_sum=0;
  for(int i=0; i<=n-k; i++){
    for(int j=i; j<i+k; j++){
      temp_sum+=arr[j];
    }
    if(sum<temp_sum) {
      sum=temp_sum;
      idx=i;
    }
    temp_sum=0;
  }

  cout<<endl<<"The Maximum Sum of Sliding window is: "<<sum<<"  Starting at Index: "<<idx;
  return 0;
}