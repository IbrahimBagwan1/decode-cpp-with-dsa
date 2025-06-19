#include<iostream>
using namespace std;

int main(){
  int n,m;
  cout<<"Enter the Number of students: ";
  cin>>n;
  int arr[n][2]; // 5
  for(int i=0; i<n; i++){
    for(int j=0; j<2; j++){
      cin>>arr[i][j];
    }
  }
  cout<<"Rollno\t"<<"Marks\t"<<endl;
  for(int i=0; i<n; i++){
    for(int j=0; j<2; j++){
      cout<<arr[i][j]<<"\t";
    }
    cout<<endl;
  }
  return 0;
}