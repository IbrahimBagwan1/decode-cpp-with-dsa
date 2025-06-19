#include<iostream>
using namespace std;

int main(){
  int arr[3][3]={1,2,3,4,5,6,7,8,9};
  int brr[3][3];
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      brr[i][j]=arr[j][i];
    }
  }

  cout<<endl<<"The Old Matrix is: "<<endl;
  for (int i = 0; i < 3; i++)
  {
    for (int j= 0; j < 3; j++)
    {
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;    
  }

  cout<<endl<<"The Transpose Matrix is: "<<endl;
  for (int i = 0; i < 3; i++)
  {
    for (int j= 0; j < 3; j++)
    {
      cout<<brr[i][j]<<" ";
    }
    cout<<endl;    
  }
  
  return 0;
}