#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  string s="123545";
  int x = stoi(s);
  cout<<x;

  string temp = to_string(x);

  cout<<endl<<temp;
  string lon="1233454645645621321";
  long long num=stoll(lon); // stoll : string to long long
  cout<<endl<<num;
  return 0;
}