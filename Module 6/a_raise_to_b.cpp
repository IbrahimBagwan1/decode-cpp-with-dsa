#include<iostream>
using namespace std;

int main(){
  cout<<"This is A raise to B Calculator: "<<endl;
  int a,b;
  cout<<"Enter the Number A : ";
  cin>> a;
  cout<<"Enter the Number B : ";
  cin>> b;
  float power=1;
  bool flag=true;
  if(b<0){
    b=-b;
    flag=false;
  }
  for (int i = 1; i <= b; i++){
    power=power*a;
  }
  if(flag==false){
    power=1/power;
  }
  if(a==0 && b==0){
    cout<<"Not Defined !!!";
  }else{
    cout<<power;
  }
  return 0;
}