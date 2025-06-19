#include<iostream>
#include<vector>
using namespace std;

int main(){
  int arr[4][3]={1,2,3,4,5,6,7,8,9};
  int m=3;
  for(int i=0; i<m; i++){
      int k=0;
    if(i%2==0){
      for(int j=0; j<m; j++){
        cout<<arr[j][i]<<" ";
      }
      k++;  
      // cout<<endl;
    }else{
      for(int j=m-1; j>=0; j--){
        cout<<arr[j][i]<<" ";
      }
      k++;
      // cout<<endl;
    }
    
  }
  return 0;
}