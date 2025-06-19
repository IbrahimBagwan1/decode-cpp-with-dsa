#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  cout<<arr[3][2]<<endl;
  // indexing should be maintained properly...
  int brr[][3]={1,2,3,4,5,6}; // if you are declaring and initializing at the same time then row can be left empty, but not the column space, it cannot be empty. 
  cout<<brr[1][1]<<endl;
  // int crr[3][]={1,2,3,4,5,6}; // this in invalid..

  // printing 2d array:
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}