#include<iostream>
#include<stack>
using namespace std;

void print(stack<int> st){
  stack<int> temp;
  while(st.size() > 0){
    temp.push(st.top());
    st.pop();
  }
  while(temp.size() > 0){
    cout<< temp.top()<< " ";
    st.push(temp.top());
    temp.pop();
  }
}

int main(){
  stack<int> st;
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);
  print(st);

  stack<int> gt;
  stack<int> rt;
  while(st.size() > 0){
    gt.push(st.top());
    st.pop();
  }
  cout<<endl;
  print(gt);
  
  while(gt.size() > 0){
      rt.push(gt.top());
      gt.pop();
  }
    
  cout<<endl;
  print(rt);
  return 0;
}