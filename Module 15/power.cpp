#include<iostream>
#include<algorithm>
using namespace std;

// int power(int a, int b){
//   for(int i=1; i<b; i++){
//     a = a*b;
//   }
//   return a;
// }

int power(int a, int b){
  if(b==0) return 1;
  return a * power(a,b-1);
}

int main(){
  cout<<power(3,3);
  return 0;
}