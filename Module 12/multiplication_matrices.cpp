#include<iostream>
#include<vector>
using namespace std;

int main(){
  int m;
  cout<<"Enter the Number of Rows of First Matrix: ";
  cin>>m;
  int n;
  cout<<"Enter the Number of Columns of First Matrix: ";
  cin>>n;

  int p;
  cout<<"Enter the Number of Rows of Second Matrix: ";
  cin>>p;
  int q;
  cout<<"Enter the Number of Columns of Second Matrix: ";
  cin>>q;

  if(n==p){
    int arr[m][n];
    cout<<endl<<"Enter the Elements of First Matrix: "<<endl;
    for(int i=0; i<m; i++){
      for(int j=0; j<n; j++){
        cout<<"Enter the Element Data for ("<<i<<","<<j<<"): ";
        cin>>arr[i][j];
      }
    }
    int brr[p][q];
    cout<<endl<<"Enter the Elements of Second Matrix: "<<endl;
    for(int i=0; i<p; i++){
      for(int j=0; j<q; j++){
        cout<<"Enter the Element Data for ("<<i<<","<<j<<"): ";
        cin>>brr[i][j];
      }
    }
    // 1 2 3 
    // 1 2 3 
    // 1 2 3 
    
    // 1 2 3 
    // 1 2 3 
    // 1 2 3 


    int res[m][q];
    for(int i=0; i<m; i++){
      for(int j=0; j<q; j++){
        res[i][j]=0;
        for(int k=0; k<p; k++){
          res[i][j]+=arr[i][k] * brr[k][j];
        }
      }
    }

    // printing:
    cout<<endl<<"The Matrix Multiplication is: "<<endl;
    for(int i=0; i<m; i++){
      for(int j=0; j<q; j++){
        cout<<res[i][j]<<"\t";
      }
      cout<<endl;
    }
  }

  else{
    cout<<"The Two Matrices cannot be Multiplied: ";
  }
  
  return 0;
}