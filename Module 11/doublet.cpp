#include<iostream>
#include<vector>
using namespace std;

int main(){
  int x=7;
  int idx1=-1,idx2=-1;
  vector<int> v={1,3,2,4,3,4,1,6};
  for(int i=0; i<v.size(); i++){
    for (int j = (i+1); j < v.size(); j++)
    {
      if(v.at(i)+v.at(j)==x){
        idx1=i;
        idx2=j;
        cout<<"The Indexes That sum upto X are: "<<idx1<<" , "<<idx2<<endl;
      }
    }
  }
  
  if(idx1==-1 && idx2==-1){
    cout<<"No Elements Present That sum up to value of: X ";
  }
  return 0;
}