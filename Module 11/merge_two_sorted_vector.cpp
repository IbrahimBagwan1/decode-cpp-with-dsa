#include<iostream>
#include<vector>
using namespace std;

void sort(vector<int> &v1,vector<int> &v2,vector<int> &v3){
  int point_v1=0;
  int point_v2=0;
  int point_v3=0;
  int size_v1=v1.size()-1;
  int size_v2=v2.size()-1;
  while(point_v1 <= size_v1 || point_v2 <= size_v2){
    if(v1[point_v1]< v2[point_v2] && point_v1 <= size_v1){
      v3.push_back(v1[point_v1]);
      point_v1++;
    }
    else {
      v3.push_back(v2[point_v2]);
      point_v2++;
    }
    // else if(v2[point_v2]<= v1[point_v1] && point_v2 <= size_v2){
    //   v3.push_back(v2[point_v2]);
    //   point_v2++;
    // }
  }
}

void display(vector<int> v){
  for(int i=0; i<v.size(); i++){
    cout<<v[i]<<" ";
  }
}

int main(){
  vector<int> v2={1,3,5,7};
  vector<int> v1={2,4,6,8,10};
  vector<int> v3;
  cout<<endl<<"The Vector one is: "<<endl;
  display(v1);
  cout<<endl<<"The Vector Two is: "<<endl;
  display(v2);
  

  cout<<endl<<"The Final Sorted Vector is: "<<endl;
  sort(v1,v2,v3);
  display(v3);
  return 0;
}