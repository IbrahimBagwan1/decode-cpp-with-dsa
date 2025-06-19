#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int main(){
  int n=4;
  string arr[n]={"1234","0021","2345","2901"};
  int max=stoi(arr[0]);
  int index=0;
  for(int i=1; i<n; i++){
    if(stoi(arr[i])>max) max= stoi(arr[i]);
    index=i;
  }
  cout<<"The Index is: "<<index<<endl;
  cout<<max;
  return 0;
}