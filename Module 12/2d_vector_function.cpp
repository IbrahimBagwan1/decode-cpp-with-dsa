#include<iostream>
#include<vector>
using namespace std;

int main(){
  int m=3;
  vector< vector<int> > v;

  vector< vector<int> > v1(m,vector<int> (2)); // this is 2D Vector...

  vector< vector<int> > v2(m, vector<int> (4,3)); // this is a vector of a vector .

  for(int i=0; i<m; i++){
    for(int j=0; j<4; j++){
      cout<<v2[i][j]<<" ";
    }
    cout<<endl;
  }
  // we can perform push_back; and pop_back(); functions , here the entire vector gets added or deleted...
  
  cout<<v1[0][0]<<endl;
  return 0;
}