#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int> v={1,2,3,4,5,6,7,8,9};
  vector<int> copy;

  cout<<"The Original Vector is: ";
  for(int i=0; i<v.size(); i++){
    cout<<v.at(i)<<" ";
  }

  for(int i=v.size()-1; i>=0; i--){
    copy.push_back(v.at(i));
  }


  cout<<endl<<"The Copied Vector is: ";
  for(int i=0; i<copy.size(); i++){
    cout<<copy.at(i)<<" ";
  }

  return 0;

  // v.at(1);
  // v.push_back(1);
  // int z=v.size();
}