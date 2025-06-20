// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 2 
// 2 3 
// 2 3 4 
// 3 
// 3 4 
// 4

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
  int arr[]={1,2,3,4};
  int n=sizeof(arr)/ sizeof(arr[0]);
  for (int i = 0; i < n; i++){
    for (int j = i; j < n; j++){
      for (int k = i; k <= j; k++){
        cout<<arr[k]<<" ";
      }
      cout<<endl;
    }
  }

  return 0;
}