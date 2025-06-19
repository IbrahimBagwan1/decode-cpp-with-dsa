// So, if sample input is [5, 4, 3, 2, 1], sample output will be:
// [5, 4, 3, 2, 1]
// [9, 7, 5, 3]
// [16, 12, 8]
// [28, 20]
// [48]

#include<iostream>
#include<algorithm>
using namespace std;

void new_arr(int arr[], int n){
  int a=n;
  for(int i=0; i<a; i++){
      cout<<arr[i]<<"\t";
  }
  cout<<endl;

  for (int i = 0; i < n; i++)
  {
    for(int j=0; j<5; j++){
      arr[j]=arr[j]+arr[j+1];
    }
    a--;
    for(int i=0; i<a; i++){
      cout<<arr[i]<<"\t";
    }
    cout<<endl;
  }
}

int main(){
  int arr[5]={5, 4, 3, 2, 1};
  int n=5;
  new_arr(arr,n);
  return 0;
}