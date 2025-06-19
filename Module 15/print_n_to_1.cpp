#include<iostream>
#include<algorithm>
using namespace std;

void print_n_to1(int n){
  if(n==0) return ;
  cout<<n<<endl;
  print_n_to1(n-1);
}

void print_1_to_n(int i,int n){
  if(i>n)return ;
  cout<<i<<endl;
  print_1_to_n((i+1),n);
}

void print_1_to_n1(int n){
  if(n==0) return ;
  print_1_to_n1(n-1);
  cout<<n<<endl;
  return;
}

int main(){
  print_n_to1(5);
  cout<<endl<<"Now reverse: "<<endl;

  print_1_to_n(1,5);

  cout<<endl<<"Now using recursion with one variable !!"<<endl;

  print_1_to_n1(5);
  return 0;
}