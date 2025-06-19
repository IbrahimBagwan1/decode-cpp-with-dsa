#include<iostream>
#include<vector>
using namespace std;

int main(){
  int arr[4][3]={1,2,3,4,5,6,7,8,9};
  int m=3;
  for(int i=m-1; i>=0; i--){
    if(i%2==0){
      for(int j=0; j<m; j++){
        cout<<arr[i][j]<<" ";
      }  
      cout<<endl;
    }else{
      for(int j=m-1; j>=0; j--){
        cout<<arr[i][j]<<" ";
      }
      cout<<endl;
    }
    
  }
  return 0;
}