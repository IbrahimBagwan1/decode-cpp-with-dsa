#include<iostream>
#include<set>
#include<map>
using namespace std;

int main(){
  set<int> s;
  map<int,int> m;
  s.insert(23);
  s.insert(3);
  s.insert(3);
  s.insert(12);
  s.insert(5);
  s.insert(14);

  // for(auto ele: s){
  //   cout<<ele<< " ";
  // }
  
  m[3] = 10;
  m[1] = 20;
  m[2] = 30; // in ordered map the printing comes with the basis of key, not with the basis of value.
  for(auto ele: m){
    cout<<ele.second<< " ";
  }

  return 0;
}