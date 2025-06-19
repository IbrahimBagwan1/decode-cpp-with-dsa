#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int> v;
  v.push_back(25);
  v.push_back(3);
  v.push_back(52);
  v.push_back(34);
  v.push_back(3);
  v.push_back(12);
  int idx=-1;
  int n;
  cout<<"Enter The Number you want to find: ";
  cin>> n;

  for(int i=v.size()-1; i>=0; i--){
    if(v.at(i)==n){
      idx=i;
      cout<<"The Last occurence is at Index: "<<i <<endl;
      break;
    }
  }

  if(idx==-1){
    cout<<"The Element Not Present in The vector !!!"<<endl;
  }
  return 0;
}