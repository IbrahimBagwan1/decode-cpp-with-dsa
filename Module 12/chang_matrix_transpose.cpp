#include<iostream>
#include<vector>
using namespace std;

int main(){
  int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
  cout<<"Printing the Original Array: "<<endl;
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cout<<arr[i][j]<<"\t";
    }
    cout<<endl;
  }
  



  for (int i = 0; i < 4; i++)
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


  cout<<endl<<"Printing the Transpose Array: "<<endl;
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cout<<arr[i][j]<<"\t";
    }
    cout<<endl;
  }

  
  return 0;
}