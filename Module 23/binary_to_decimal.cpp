#include<iostream>
#include <cmath>

#include<algorithm>
using namespace std;

int binary_to_decimal(string &binary){
  int n = binary.size();
  int result= 0;
  char ch;
  int num;
  for(int i=n-1; i>=0; i++){
    ch = binary[i];
    num = ch - '0';
    result += num * pow(2,n-1-i); 
  }
  return result;
}

int main(){
  string binary = "101010";
  int res= binary_to_decimal(binary);
  cout << "Program reached the end." << endl;
  cout << "The Binary to Decimal is: " << res << endl;
  return 0;
}