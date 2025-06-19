#include<iostream>
using namespace std;

int main(){
  int x;
  cout<< "Enter the Number: ";
  cin>> x;
  int count=0;
  int sum=0;
  int z;
  int reverse=0;
  cout<<"The Reverse of the Number Entered is: ";
  while(x!=0){
    z=x%10;
    x=x/10;
    count++;
    sum+=z;
    reverse=z;
    cout<< reverse;
  }

  cout<<endl<< "The Total Number present are: "<<count<< endl;
  cout<< "The sum of the Digits is: "<< sum<< endl;
  
  return 0;
}