#include<iostream>
using namespace std;

int main(){
  int s1,s2,s3;
  cout<< "Enter the Side 1 of the Traingle: ";
  cin>> s1;
  cout<< "Enter the Side 2 of the Traingle: ";
  cin>> s2;
  cout<< "Enter the Side 3 of the Traingle: ";
  cin>> s3;

  if(s1+s2 > s3 && s2+s3 > s1 && s1+s3 > s2){
    cout<< "These can form the Sides of a Traingle !!!";
  }else{
    cout<< "These cannot form the Sides of a Traingle !!!";
  }
  return 0;
}