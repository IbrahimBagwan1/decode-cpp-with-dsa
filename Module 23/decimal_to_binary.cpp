#include<iostream>
#include<algorithm>
using namespace std;

string decimal_to_binary(int num){
  string result = "";
  while(num>0){
    if(num%2==0){
      result= '0' +result; 
    }
    else{
      result = '1' +result;
    }
    num/=2;
  }
  return result;
}

int main(){
  int num=8;
  cout<<"The Decimal to Binart of :"<<num<<" Is: "<< decimal_to_binary(num);


  return 0;
}