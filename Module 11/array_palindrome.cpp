// Q7: If an array arr contains n elements, then check if the given array is a palindrome or not .
#include<iostream>
using namespace std;

bool check_palindrome(int arr[],int n){
  int j=n-1;
  bool flag=false;
  for(int i=0; i<n/2; i++){
    if(arr[i]==arr[j]){
      flag=true;
    }
    else{
      flag=false;
      break;
    }
    j--;
  }
  return flag;
}

int main(){
  int arr[]={1,2,1,1,2,1};
  int n=6;
  bool flag=false;
  flag=check_palindrome(arr,n);
  if(flag){
    cout<<"The Array is a Palindrome !!!";
  }else{
    cout<<"The Array is Not a Palindrome !!!";
  }
  return 0;
}