/*
Q9. Write a program to print out all Armstrong numbers between 1 and 500. If the sum of cubes of
each digit of the number is equal to the number itself, then the number is called an Armstrong
number. For example,
*/

// 153 = 1cube + 5cube + 3cube

#include<iostream>
using namespace std;

bool isAmstrong(int n){
  int lastdig,sum=0;
  int j=n;
  while(j!=0){ // 153
    lastdig=j%10;
    sum+=lastdig*lastdig*lastdig;
    j/=10;
  }
  if(sum==n){
    return true;
  }else{
    return false;
  }
}

int main(){
  cout<<"Amstrong Number: "<<endl;
  int n;
  // cout<<"Enter the number to check if it is Amstrong: ";
  // cin>> n;
  bool flag;
  for(int i=1; i<=500; i++){
    flag=isAmstrong(i);
    if(flag){
      cout<<"The Number "<<i<<" is An Amstrong Number !!!"<<endl;
    }
  }
  return 0;
}