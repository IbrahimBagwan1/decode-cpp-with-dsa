#include<iostream>
using namespace std;

int main(){
  // cout<<"Enter the Alphabet to know the Number: Starts from 1 to 26: ";
  // char a;
  // cin>> a;
  // cout<< "The Number of :" << a << " is: " << int(a)-64;

  // cout<<endl;

  // int x;
  // cin>> x;
  // cout<<float(x)/2;

  cout<<endl;
  float x;
  cin>>x;
  int y=int(x);
  if(y<0){
    cout<<  x - y +1;
  }else{
    cout<<  x - y;
  }

  return 0;
}