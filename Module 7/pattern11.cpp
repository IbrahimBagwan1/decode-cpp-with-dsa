// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// 1 0 1 0 1 

#include<iostream>
using namespace std;

int main(){
  cout<<"Enter the Number: ";
  int n;
  cin>> n;
  // // Method 1:
  // int count=5;
  // for(int i=1; i<=n; i++){
  //   if(i % 2 !=0){
  //     count=1;
  //   }else{
  //     count=0;
  //   }
  //   for(int j=1; j<=i; j=j+1){
  //     cout<<count << " ";
  //     if(count==0) count=1;
  //     else if (count==1) count=0;
  //   }
  //   cout<<endl;
  // }

  // Method 2:
  for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
      if((i+j)%2==0)cout<<1<<" ";
      else cout<<0<<" ";
    }
    cout<<endl;
  }
  return 0;
}