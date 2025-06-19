// write a program to reverse an array without using an extra array.
#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> a){
  cout<<endl<<"The Elements in The Vector are: ";
  for(int i=0; i<a.size(); i++){
    cout<<a.at(i)<<" ";
  }
}

int main(){
  vector<int> v={1,2,3,4,5,6,7,8,9};
  display(v);
  check:
  int r1,r2;
  cout<<endl<<"Enter the Starting Index to Reverse: ";
  cin>>r1;
  cout<<"Enter the Ending Index to Reverse: ";
  cin>>r2;
  if(r1<0 || r2>v.size()){
    cout<<"The Index are out of bound !!!"<<endl<<"It should be Between: 0 and "<<v.size()-1 <<endl<<" Try Adding new Indexes: "<<endl;
    goto check;
  }

  for(int i=r1, j=r2; i<=j; i++,j--){
    int temp=v[i];
    v[i]=v[j];
    v[j]=temp;
  }

  display(v);
  return 0;
}