#include<iostream>
using namespace std;

int main(){
  cout<<"Enter the Number: ";
  int n;
  cin>>n;
  n=n+1;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <=n-i ; j++)
    {
      cout<<j<<" ";
    }
    cout<<endl;
  }
  
  return 0;
}