#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int maze(int sr,int sc, int er, int ec){
  if(sr>er || sc > ec) return 0;
  if(sr==er && sc==ec) return 1;
  int rightways= maze(sr,sc+1,er,ec);
  int downways= maze(sr+1,sc,er,ec);
  return rightways + downways;
}

int maze_using_2_variable(int sr,int sc){
  if(sr< 1 || sc < 0) return 0;
  if(sr==1 && sc==1) return 1;
  int rightways= maze_using_2_variable(sr,sc-1);
  int downways= maze_using_2_variable(sr-1,sc);
  return rightways + downways;
}

void print_path(int sr,int sc, int er, int ec, string s){
  if(sr>er || sc > ec) return;
  if(sr==er && sc==ec){
    cout<<s<<endl;
    return;
  } 
  print_path(sr,sc+1,er,ec,s+'R');
  print_path(sr+1,sc,er,ec,s+'D');
}


void print_path_using_2_variable(int sr,int sc, string s){
  if(sr < 1 || sc < 1) return;
  if(sr==1 && sc==1){
    cout<<s<<endl;
    return;
  } 
  print_path_using_2_variable(sr,sc-1,s+'R');
  print_path_using_2_variable(sr-1,sc,s+'D');
}

int main(){
  // cout<<"The Total No of Ways are: "<<maze(1,1,4,4)<<endl;
  cout<<"The Total No of Ways are: "<<maze_using_2_variable(4,4)<<endl;
  // print_path(1,1,4,4,"");
  print_path_using_2_variable(4,4,"");
  return 0;
}