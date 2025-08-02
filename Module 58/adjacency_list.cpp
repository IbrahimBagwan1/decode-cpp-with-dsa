#include<iostream>
#include<vector>
#include<list>
using namespace std;

vector<list<int>> graph;

void addEdge(int src, int dest, bool bi_dir=false){
  graph[src].push_back(dest);
  if(bi_dir==true){
    graph[dest].push_back(src);
  }
}

void display(){
  for (int i = 0; i < graph.size(); i++)
  {
    cout<<i<<" -> ";
    for(auto ele: graph[i]){
      cout<<ele<<"  ";
    }
    cout<<endl;
  }
}

int main(){
  int v;
  cout<<"Enter the Number of Vertices: "<<endl;
  cin>> v;
  
  graph.resize(v, list<int>());
  int e ;
  cout<<"Enter the Number of Edges: "<<endl;
  cin>> e;
  cout<<"Enter the Source and Destination in Pairs: "<<endl;
  while(e--){
    int s,d;
    cin>>s>>d;
    addEdge(s,d,true);
  }
  cout<<"The Adjacency List Implementation is : "<<endl;
  display();
  return 0;
}