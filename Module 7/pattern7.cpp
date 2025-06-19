// A B C D 
// A B C D 
// A B C D 
// A B C D 

#include<iostream>
using namespace std;

int main(){
  cout<<"Enter The Number: ";
  int n;
  cin>>n;
  n=n+65;

  for(int i=65; i<n; i++){
    for(int j=65; j<n; j++){
      cout<<char(j)<<" ";
    }
    cout<<endl;
  }

  return 0;
}