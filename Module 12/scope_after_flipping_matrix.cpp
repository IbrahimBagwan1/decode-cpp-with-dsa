#include<iostream>
#include<vector>
using namespace std;

int matrixScore(vector<vector<int>>& grid) {
  int row=grid.size();
  int col=grid[0].size();
  for(int i=0; i<row; i++){
      if(grid[i][0]==0){
          for(int j=0; j<col; j++){
              if(grid[i][j]==0) grid[i][j]=1;
              else grid[i][j]=0;
          }
      }
  }

  // checking col
  int count_zero=0;
  int count_one=0;
  for(int j=0; j<col; j++){
      for(int i=0; i<row; i++){
          if(grid[i][j]==0)count_zero++;
          else count_one++;
      }
      if(count_zero > count_one){
          for(int i=0; i<row; i++){
              if(grid[i][j]==0) grid[i][j]=1;
              else grid[i][j]=0;
          }
      }
  }

  // convert to 
  int sum=0;
  for(int i=0; i<row; i++){
      int x=1;
      for(int j=col-1; j>=0; j--){
          sum+= grid[i][j] * x;
          x*=2;
      }
  }
  return sum;
}

int main(){

  vector<vector<int>> v={{0,0,1,1},{1,0,1,0},{1,1,0,0}};
  int sum=matrixScore(v);
  cout<<sum;
  return 0;
}