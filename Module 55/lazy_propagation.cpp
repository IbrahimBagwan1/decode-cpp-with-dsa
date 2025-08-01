#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> ans;
vector<int> lazyTree;

void buildTree(int arr[], int i, int lo, int hi){
  if(lazyTree[i]!=0){
    int rangeSize= hi-lo+1;
    ans[i] += lazyTree[i] * rangeSize;
    if(lo!=hi){
      lazyTree[2*i+1] += lazyTree[i];
      lazyTree[2*i+2] += lazyTree[i];
    }
    lazyTree[i]=0;
  }
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
  if(lazyTree[i]!=0){
    int rangeSize = hi - lo + 1;
    ans[i] += lazyTree[i] * rangeSize;
    if(lo != hi){
      lazyTree[2*i+1] += lazyTree[i];
      lazyTree[2*i+2] += lazyTree[i];
    }
    lazyTree[i] = 0;
  }
  if(l > hi || r <lo) return INT_MIN;
  if(lo>=l && hi<=r) return ans[i];
  int mid = lo + (hi-lo)/2;
  int leftmax= get(2*i+1, lo, mid, l, r);
  int rightmax= get(2*i+2, mid+1, hi, l, r);
  return max(leftmax, rightmax);
}

void updateRange(int i, int lo, int hi, int left, int right, int val){
  if(lazyTree[i]!=0){
    int rangeSize= hi-lo+1;
    ans[i] += lazyTree[i] * rangeSize;
    if(lo!=hi){
      lazyTree[2*i+1] += lazyTree[i];
      lazyTree[2*i+2] += lazyTree[i];
    }
    lazyTree[i]=0;
  } 

  if(right < lo || left > hi) return;

  if(lo >= left && hi <= right){
    int rangeSize = hi - lo + 1;
    ans[i] += val * rangeSize;
    if(lo != hi){
      lazyTree[2*i+1] += val;
      lazyTree[2*i+2] += val;
    }
    return;
  }

  int mid = lo + (hi - lo)/2;
  updateRange(2*i+1, lo, mid, left, right, val);
  updateRange(2*i+2, mid+1, hi, left, right, val);
  ans[i] = max(ans[2*i+1], ans[2*i+2]);
}

int main(){
  int arr[]={2,5,7,3,1,8,9,6};
  int n = sizeof(arr)/4;
  ans.resize(4*n);
  lazyTree.resize(4*n, 0);
  buildTree(arr, 0, 0, n-1);
  
  int l,r;
  cout<<"Enter The Range: ";
  cin>>l>>r;
  cout << "Max in range before update: " << get(0,0,n-1, l,r) << endl;

  updateRange(0,0,n-1, 1,5,6);

  cout << "Max in range after update: " << get(0,0,n-1, l,r) << endl;

  return 0;
}
