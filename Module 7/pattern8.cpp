#include<iostream>
using namespace std;

//     *     
//     *     
// * * * * * 
//     *     
//     *   

// you must print the above pattern !!!
int main(){
  cout<<"Enter the Number: ";
  int n;
  cin>> n;
  int mid=n/2+1;
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
      if(i==mid || j==mid){
        cout<<"* ";
      }else{
        cout<<"  ";
      }
    }
    cout<<endl;

  }
  return 0;
}