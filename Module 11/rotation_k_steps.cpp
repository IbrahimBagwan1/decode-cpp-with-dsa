#include<iostream>
#include<vector>
using namespace std;

void rotate_once(vector<int>&v){
  int last=v.at(v.size()-1);
  for(int i=v.size()-1; i>=0; i--){
    v[i]=v[i-1];
  }
  v[0]=last;
}

void display(vector<int> v){
  cout<<endl<<"The Elements in the Vector are: ";
  for(int i=0; i<v.size(); i++){
    cout<<v.at(i)<<" ";
  }
}

int main(){
  int n;
  cout<<"Enter the Number of Elements in The Vector: ";
  cin>> n;
  vector<int> v;
  for(int i=0; i<n; i++){
    int x;
    cout<<"Enter the Element "<<i+1<<": ";
    cin>>x;
    v.push_back(x);
  }
  cout<<endl<<"Enter the Number of Rotations: ";
  int k;
  cin>>k;
  k=k%n;
  display(v);
  for(int i=1; i<=k; i++){
    rotate_once(v);
  }
  cout<<endl<<"After Rotation by K steps: ";
  display(v);
  return 0;
}