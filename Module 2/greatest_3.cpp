#include<iostream>
using namespace std;

int main(){
  int arr[3];
  for(int i=1; i<=3; i++){
    cout<<"Enter the Number: ";
    cin>> arr[i];
  }
  if(arr[1] > arr[2] && arr[1] > arr[3]){
    cout<< "The First Element is Greater: "<< arr[1];
  }
  else if(arr[2] > arr[1] && arr[2] > arr[3]){
    cout<< "The Second Element is Greater: "<< arr[2];
  }
  else{
    cout<< "The Third Element is Greater: "<< arr[3];
  }
  return 0;
}