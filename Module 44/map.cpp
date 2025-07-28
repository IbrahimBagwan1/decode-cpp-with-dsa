#include<iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;

int main(){
  unordered_map<string,int> m;
  pair<string,int> s1;
  s1.first = "Ibrahim";
  s1.second = 16;
  
  pair<string,int> s2;
  s2.first = "Manju";
  s2.second = 23;

  m["kamran"] = 18;

  m.insert(s1);
  m.insert(s2);

  for(auto ele: m){
    cout<< ele.first << " " << ele.second<< endl;
  }

  return 0;
}