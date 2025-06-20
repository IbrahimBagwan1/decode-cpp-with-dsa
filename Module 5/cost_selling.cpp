#include<iostream>
using namespace std;

int main(){
  int cp,sp,profit,loss;
  cout<<"Enter the Cost Price: ";
  cin >> cp;
  cout<<"Enter the Selling Price: ";
  cin >> sp;
  profit=sp-cp;
  loss=cp-sp;
  if(profit > loss){
    cout<<"The Profit is: "<<profit<< " Rs";
  }else{
    cout<<"The Loss is: "<<loss<< " Rs";
  }
  return 0;
}