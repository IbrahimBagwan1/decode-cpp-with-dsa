#include<iostream>
using namespace std;

int count(int* arr,int great){
  int count=0;
  for (int i = 0; i < 5; i++)
  {
    if(arr[i]>great){
      count++;
    }
  }
  return count;
}

int main(){
  int arr[5]={1,2,3,4,5};
  int great=3;
  int num = count(arr,great);
  cout<<num;
  return 0;
}