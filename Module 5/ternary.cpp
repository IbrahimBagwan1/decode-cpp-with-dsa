#include<iostream>
using namespace std;

int main(){
  int marks;
  cout<<"Enter the Marks: ";
  cin>> marks;

  (marks >33)? cout<< "Pass": cout<< "Fail";
  return 0;
}

int max(int a , int b){
  return a>b? a: b;
}

int min(int a , int b){
  return (a<b)?  a: b;
}
// this is complete like c language only 