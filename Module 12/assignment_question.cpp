// Q1. Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
// You must do it in place.

// Input :
// 1 1 1
// 1 0 1
// 1 1 1

// Output :
// 1 0 1
// 0 0 0
// 1 0 1


#include<iostream>
#include<vector>
using namespace std;

int main(){
  int arr[3][3]={
  {1, 1, 1},
  {1, 1, 1},
  {1, 1, 0}};
  
  int count=0;
  for(int i=0; i<3; i++){
    int m=-1,n=-1;
    for(int j=0; j<3; j++){
      if(arr[i][j]==0){
        count++;
        m=i;
        n=j;
      }
    }
    if(m!=-1 && n!=-1){
      for(int j=0; j<3; j++){
        arr[m][j]=0;
        arr[j][n]=0;
      }
    }
  }

  cout<<endl<<"The New edited Matrix is: "<<endl;
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }


   return 0;
}