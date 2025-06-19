#include<iostream>
#include<vector>
using namespace std;

int main(){
  int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
  cout<<"Printing the Original Array: "<<endl;
  int size=4;
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size; j++)
    {
      cout<<arr[i][j]<<"\t";
    }
    cout<<endl;
  }
  



  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j <=i; j++)
    {
      if(i==j){
        arr[i][j]=arr[i][j];
      }
      else {
        int temp=arr[i][j];
        arr[i][j]=arr[j][i];
        arr[j][i]=temp;
      }
    }
  }

  
  for (int i = 0; i < size; i++)
  {
    int n=size-1;
    for (int j = 0; j < size/2; j++)
    {
      int temp=arr[i][j];
      arr[i][j]=arr[i][n];
      arr[i][n]=temp;
      n--;
    }
  }

  cout<<endl<<"Printing the Rotated Array by 90 Degrees: "<<endl;
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size; j++)
    {
      cout<<arr[i][j]<<"\t";
    }
    cout<<endl;
  }

  
  return 0;
}