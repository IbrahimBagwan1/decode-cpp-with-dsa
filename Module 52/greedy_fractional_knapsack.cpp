#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool cmp(pair<int,int> &p1, pair<int,int>&p2){
  double r1 = (p1.first * 1.0)/ (p1.second *1.0);
  double r2 = (p2.first * 1.0)/ (p2.second *1.0);
  return r1>r2;
}

double fractional_knapsack(vector<int> &profits, vector<int> & weights, int n, int W){
  vector<pair<int,int>> vt;
  for(int i=0; i< n; i++){
    vt.push_back({profits[i], weights[i]});
  }
  sort(vt.begin(), vt.end(), cmp);
  double result =0;
  for(int i=0; i<n; i++){
    if(vt[i].second <= W){
      result += vt[i].first *1.0;
      W -= vt[i].second;
    }
    else{
      result += (vt[i].first *1.0) / (vt[i].second *1.0) * W; 
      break;
    }
  }
  return result;
}
 
int main(){
  vector<int> profits = {60,100,120};
  vector<int> weights = {10,20,30};
  int n=3;
  int W=50;
  cout << fractional_knapsack(profits, weights, n, W);

  return 0;
}