// 3 pointers algorithm: dutch flag algorithm...

#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> v){
  for(int i=0; i<v.size(); i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
}

void swap(int &a,int &b){
  int temp=a;
  a=b;
  b=temp;
}

void sort_vector(vector<int> &nums){
  int low=0,mid=0,high=nums.size()-1;
  while(mid<= high){
    if(nums[mid]==2){
      swap(nums[mid],nums[high]);
      high--;
    }
    else if(nums[mid]==0){
      swap(nums[mid],nums[low]);
      mid++;
      low++;
    }
    else mid++;
    // if(nums[mid]==1){
    //   mid++;
    // }
  }
}


int main(){
  vector<int> v={0,2,1,1,2,0};
  cout<<endl<<"The Original Vector is: "<<endl;
  display(v);

  sort_vector(v);

  cout<<endl<<"The Sorted Vector is: "<<endl;
  display(v);
  return 0;
}