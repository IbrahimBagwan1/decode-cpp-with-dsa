#include<iostream>
using namespace std;

int main(){
  cout<<"Enter the Number: ";
  int n;
  cin>> n;
  
  for (int j = 1; j <= 2*n-1; j++)
  {
    cout<<"* ";
  }
  cout<<endl;
  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= n-i; j++)
    {
      cout<<"* ";
    }
    for (int j = 1; j <= 2*i-1; j++) 
    {
      cout<<"  ";
    }
    for (int k =n-i; k >=1; k--)
    {
      cout<<"* ";
    }
    
    cout<<endl;
  }
  
  return 0;
}