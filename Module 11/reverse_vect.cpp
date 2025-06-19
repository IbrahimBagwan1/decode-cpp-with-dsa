// write a program to reverse an array without using an extra array.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void display(vector<int> a){
  cout<<endl<<"The Elements in The Vector are: ";
  for(int i=0; i<a.size(); i++){
    cout<<a.at(i)<<" ";
  }
}

void my_reverse(vector<int>&v){
  // my function
  for(int i=0, j=v.size()-1; i<=j; i++,j--){
    int temp=v[i];
    v[i]=v[j];
    v[j]=temp;
  }
}

int main(){
  vector<int> v={1,2,3,4,5,6,7,8,9};
  display(v);

  // built-in function: reverse
  // reverse(v.begin(),v.end());

  // using my funcion:
  my_reverse(v);

  display(v);
  return 0;
}