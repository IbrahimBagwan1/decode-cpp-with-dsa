#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  // Learning about Vectors:
  vector<int> v;
  v.push_back(23);
  v.push_back(3);
  v.push_back(7);
  v.push_back(6);
  cout<<v[0]<<" ";
    cout<<endl<<"The capacity of the vector is: "<<v.capacity()<<" ";
  cout<<v[1]<<" ";
    cout<<endl<<"The capacity of the vector is: "<<v.capacity()<<" ";
  cout<<v[2]<<" ";
    cout<<endl<<"The capacity of the vector is: "<<v.capacity()<<" ";
  cout<<v[3]<<" ";
    cout<<endl<<"The capacity of the vector is: "<<v.capacity()<<" ";

  sort(v.begin(), v.end());

  for(int i=0; i<v.size(); i++){
    cout<<v.at(i)<<" ";
  }
  

  vector<int> vec;

  return 0;
}