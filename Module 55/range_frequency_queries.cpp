#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class RangeFreqQuery {
public:
    int n ;
    vector<unordered_map<int,int>> st;
    RangeFreqQuery(vector<int>& arr) {
        n = arr.size();
        st.resize(4*n);
        buildTree(arr, 0, 0 , n-1);
    }

    unordered_map<int,int> addMaps(unordered_map<int,int> &mp1, unordered_map<int,int> & mp2){
        unordered_map<int,int> mp;
        for(auto ele: mp1){
            mp.insert(ele);
        }

        for(auto ele : mp2){
            int key =ele.first; int freq = ele.second;
            if(mp.find(key)==mp.end()){
                mp.insert(ele);
            }
            else{
                mp[key] += freq;
            }
        }
        return mp;
    }

    void buildTree(vector<int> & nums,int i, int lo, int hi){
        if(hi==lo){
            st[i][nums[lo]]= 1;
            return ;
        }
        int mid = lo + (hi-lo)/2;
        buildTree(nums, 2*i+1, lo, mid);
        buildTree(nums, 2*i+2, mid+1, hi);
        st[i]= addMaps(st[2*i+1] , st[2*i+2]);
    }
    
    int freq(int i, int &left, int &right, int lo, int hi, int& value){
        if(lo>right ||  hi < left) return 0;
        if(lo >= left && hi<= right){
            if(st[i].find(value) ==st[i].end()) return 0;
            else{
                return st[i][value];
            }
        }
        int mid = lo + (hi-lo)/2;
        int leftfreq = freq(2*i+1, left, right, lo, mid, value);
        int rightfreq = freq(2*i+2, left, right, mid+1, hi, value);
        return leftfreq + rightfreq;
    }

    int query(int left, int right, int value) {
        return freq(0, left, right, 0, n-1, value);
    }
};

/**
 * Your RangeFreqQuery object will be instantiated and called as such:
 * RangeFreqQuery* obj = new RangeFreqQuery(arr);
 * int param_1 = obj->query(left,right,value);
 */