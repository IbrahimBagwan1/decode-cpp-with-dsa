#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
  unordered_set<int> s;
  s.insert(4);
  s.insert(2);
  s.insert(5);
  s.insert(6);
  s.insert(1);
  s.insert(0);

  for(int ele: s){
    cout<<ele<<" ";
  }
  return 0;
}
