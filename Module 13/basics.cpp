#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
  cout<<"Enter The first name: ";
  string one;
  string two;
  cin>>one;
  cout<<endl<<"Enter the Second name: ";
  cin>>two;
  sort(one.begin(), one.end());
  sort(two.begin(), two.end());
  if(one==two) cout<<"These are Anagram";
  else cout<<"Not Anagram !!!";
}
