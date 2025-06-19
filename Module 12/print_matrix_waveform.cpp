#include<iostream>
using namespace std;

int main(){
  cout<<"Enter the Number of Rows: ";
  int z=3;
  cin>>z;

  cout<<"Enter the Number of Columns: ";
  int col_y=3;
  cin>>col_y;

  int arr[z][col_y]={{1,2,3},
                     {4,5,6},
                     {7,8,9}};

  cout<<"Enter The Matrix: "<<endl;
  for(int i=0; i<z; i++){
    for(int j=0; j<col_y; j++){
      cin>>arr[i][j];
    }
    cout<<endl;
  }
  int minr=0;
  int minc=0;
  int maxr=z-1;
  int maxc=col_y-1;

  while(minr<=maxr && minc<=maxc){
    for(int j=minc; j<=maxc; j++){
      cout<<arr[minr][j]<<" ";
    }
    minr++;
    if(minr>maxr || minc>maxc) break;
    for(int k=minr; k<=maxr; k++){
      cout<<arr[k][maxc]<<" ";
    }
    maxc--;

    for(int l=maxc; l>=minc; l--){
      cout<<arr[maxr][l]<<" ";
    }
    maxr--;

    for(int m=maxr; m>=minr; m--){
      cout<<arr[m][minc]<<" ";
    }
    minc++;
  }

  return 0;
}