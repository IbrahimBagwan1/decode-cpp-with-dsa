#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> v){
  for(int i=0; i<v.size(); i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
}

void sort_pos_neg(vector<int> &v){
  int first=0;
  int last=v.size()-1;
  while(first<last){
    if(v[first]<0) first++;
    if(v[last]>=0) last--;
    if(v[first]>0 && v[last]<0){
      int temp=v[first];
      v[first]=v[last];
      v[last]=temp;
      first++;
      last--;
    }
  }
}


int main(){
  vector<int> v={2,-3,4,-1,-4,-33,12,16,0,13,-21};
  cout<<endl<<"The Original Vector is: "<<endl;
  display(v);
  sort_pos_neg(v);
  cout<<endl<<"The Sorted Vector is: "<<endl;
  display(v);
  return 0;
}