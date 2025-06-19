#include<iostream>
using namespace std;

void last_first_num(int n){
  int last,first;
  int temp=n;
  int* p = &n;
  cout<<"The Number checking through Pointer is: "<< p<<endl;
  last=n%10;
  while(temp!=0){
    first=temp%10;
    temp/=10;
  }
  cout<<"The first Number is: " << first << endl;
  cout<<"The last Number is: "<< last << endl;
}

int main(){
  int n;
  cout<<"Enter the Number: ";
  cin>> n;
  // last_first_num(n);
  int a = 10, b = 20;
int *ptr = &a;
b = *ptr + 1; // 11 11 
ptr = &b;
cout << *ptr << " " << a << " " << b; // 11 10 11
  return 0;
}