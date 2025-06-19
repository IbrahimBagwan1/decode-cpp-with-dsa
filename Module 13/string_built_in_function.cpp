#include<iostream>
using namespace std;
#include<algorithm>

int main(){
  string s="Ibrahim Rasulahmed Bagwan";
  cout<<s.length()<<endl;
  cout<<s.size()<<endl;
  s.push_back('\'');
  s.push_back('s');
  cout<<s<<endl;
  s.pop_back();
  cout<<s<<endl;

  string a="abc";
  string b="def";
  string c=a+b;
  cout<<endl<<c;

  reverse(c.begin()+2,c.end()-1);
  cout<<endl<<c;
  reverse(c.begin()+2,c.begin()+4);
  cout<<endl<<c;
  

  string word="Hello";
  // word.substr(idx,len);
  cout<<endl<<word.substr(1,3);
  
  return 0;
}