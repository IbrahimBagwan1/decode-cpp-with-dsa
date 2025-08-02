#include<iostream>
#include<vector>
#include<list>
using namespace std;

vector<list<pair<int,int> >> graph;

void addEdge(int src, int dest, int wt, bool bi_dir=false){
  graph[src].push_back({dest,wt});
  if(bi_dir==true){
    graph[dest].push_back({src, wt});
  }
}

void display(){
  for (int i = 0; i < graph.size(); i++)
  {
    cout<<i<<" -> ";
    for(auto ele: graph[i]){
      cout<<"( "<<ele.first<<" , "<< ele.second<<" ) ";
    }
    cout<<endl;
  }
}

int main(){
  int v;
  cout<<"Enter the Number of Vertices: "<<endl;
  cin>> v;
  
  graph.resize(v, list<pair<int,int>>());
  int e ;
  cout<<"Enter the Number of Edges: "<<endl;
  cin>> e;
  cout<<"Enter the Source and Destination in Pairs: "<<endl;
  while(e--){
    int s,d,wt;
    cin>>s>>d>>wt;
    addEdge(s,d,wt,true);
  }
  cout<<"The Weighted Adjacency List Implementation is : "<<endl;
  display();
  return 0;
}