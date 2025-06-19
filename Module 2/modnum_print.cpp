#include<iostream>
using namespace std;

int main(){
  cout<< "Enter any Number : ";
  int a;
  cin>> a;
  if(a<0){
    cout<< (a)*-1;
  }else{
    cout<< a;
  }
  return 0;
}