#include<iostream>
using namespace std;

int main(){
  int row,col;
  cout<<"Enter the Number of Rows: ";
  cin>> row;
  cout<<"Enter the Number of Columns: ";
  cin>> col;

  for(int i=1; i<=row; i++){
    for (int j = 0; j < col; j++)
    {
      cout<<" * ";
    }
    cout<<endl;
    
  }

  return 0;
}