#include<iostream>
using namespace std;

// // linear search !!!
// int main(){
//   int arr[]={1,2,3,4};
//   int find=4;
//   for(int i=0; i<4; i++){
//     if(arr[i]==find){
//       cout<<i;
//       break;
//     }
//   }
//   return 0;
// }



int binary_search(int arr[]){
  int target=2;
  int n= sizeof(arr)/ sizeof(arr[0]);
  int lo=0;
  int hi=n-1; 
  int mid=(hi+lo)/2;
  if(arr[mid] == target) return true;
  else if(arr[mid] > target) binary_search(arr);
}
// Binary Search !!!
int main(){
  int arr[]={1,2,3,4,5,6,7,8,9,10};
  cout<<binary_search(arr);

  return 0;
}