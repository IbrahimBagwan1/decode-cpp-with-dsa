#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

void isPalindrome(string s){
  int n= s.length();
  int a=n-1;
  bool flag=true;
  for(int i=0; i<n/2; i++){
    if(s[i]!=s[a]){
      flag=false;
      break;
    }
    a--;
  }
  if(flag){
    cout<<"THE String is Palindrome !!!";
  }else{
    cout<<"THE String is Not Palindrome !!!";
  }
}

bool isPalindrome_recurrsion(string s, int n, int idx){
  if(idx > n){
    return true;
  }
  if(s[idx] == s[n]){
    isPalindrome_recurrsion(s,n-1,idx+1);
    return true;
  }
  else{
    return false;
  }

}


int main(){
  // palindrome checker:
  // iterative solution:

  /**/  string s="ara"; /* Iterative */
  // /**/  isPalindrome(s);    /* Iterative */

  int n= s.length()-1;
  cout<<isPalindrome_recurrsion(s,n,0);
  return 0;
}