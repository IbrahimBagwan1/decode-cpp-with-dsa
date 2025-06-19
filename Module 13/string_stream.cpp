#include<iostream>
#include<algorithm>
#include<sstream>
#include<string>
using namespace std;

int main(){
  string str="Raghav is a Maths Teacher";
  stringstream ss(str);
  string temp;

  while(ss>>temp){
    cout<<temp<<endl;
  }
  return 0;
}