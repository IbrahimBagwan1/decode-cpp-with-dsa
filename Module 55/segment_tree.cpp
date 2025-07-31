#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> ans;

void buildTree(int arr[], int i, int lo, int hi){
  if(lo==hi){
    ans[i] = arr[lo];
    return ;
  }
  int mid = lo + (hi-lo)/2;
  buildTree(arr, 2*i+1, lo, mid);
  buildTree(arr, 2*i+2, mid+1, hi);
  ans[i] = max(ans[2*i+1], ans[2*i+2]);
}

int get(int i, int lo, int hi, int &l, int &r){
  if(l > hi || r <lo) return INT_MIN;
  if(lo>=l && hi<=r) return ans[i] ;
  int mid = lo + (hi-lo)/2;
  int leftmax= get(2*i+1, lo, mid, l,r);
  int rightmax= get(2*i+2, mid+1, hi, l,r);
  return max(leftmax, rightmax);
}

int main(){
  int arr[]={2,5,7,3,1,8,9,6};
  int n = sizeof(arr)/4;
  ans.resize(4*n);
  buildTree(arr, 0, 0, n-1);
  int l,r;
  cout<<"Enter The Range: ";
  cin>>l>>r;
  cout<< get(0,0,n-1, l,r);
  return 0;
}