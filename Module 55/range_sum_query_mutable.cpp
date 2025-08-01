#include<iostream>
#include<vector>
using namespace std;

class NumArray {
public:
    int n ;
    vector<int> st;
    NumArray(vector<int>& nums) {
        n = nums.size();
        st.resize(4*n);
        buildTree(nums, 0, 0 , n-1);
    }
    
    void buildTree(vector<int> & nums,int i, int lo, int hi){
        if(hi==lo){
            st[i]= nums[hi];
            return ;
        }
        int mid = lo + (hi-lo)/2;
        buildTree(nums, 2*i+1, lo, mid);
        buildTree(nums, 2*i+2, mid+1, hi);
        st[i]= st[2*i+1] + st[2*i+2];
    }
    
    void updateVal(int index, int val, int lo, int hi, int i){
        if(hi==lo){
            st[i] =val;
            return ;
        }
        int mid = lo + (hi-lo)/2;
        if(mid >= index) updateVal(index, val, lo , mid, 2*i+1);
        else updateVal(index, val, mid+1, hi, 2*i+2);
        st[i] = st[2*i+1] + st[2*i+2];
    }


    int getSum(int i, int &left, int &right, int lo, int hi){
        if(lo>right ||  hi < left) return 0;
        if(lo >= left && hi<= right) return st[i];
        int mid = lo + (hi-lo)/2;
        int leftSum = getSum(2*i+1, left, right, lo, mid);
        int rightSum = getSum(2*i+2, left, right, mid+1, hi);
        return leftSum + rightSum;
    }

    void update(int index, int val) {
        updateVal(index, val , 0, n-1, 0);
    }
    
    int sumRange(int left, int right) {
        return getSum(0,  left ,  right,  0,  n-1);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */

int main(){
  cout<<"Implementation Using Segment Tree !!!";
  return 0;
}