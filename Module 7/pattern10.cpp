// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10

#include<iostream>
using namespace std;

int main(){
  cout<<"Enter the Number: ";
  int n;
  cin>> n;
  int count=0;
  for(int i=1; i<=n; i++){
    for(int j=1; j<=2*i-1; j=j+2){
      count++;
      cout<< count <<" ";
    }
    cout<<endl;
  }
  return 0;
}