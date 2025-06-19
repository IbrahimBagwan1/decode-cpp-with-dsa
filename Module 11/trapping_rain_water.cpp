// very famous question...
#include<iostream>
#include<vector>
using namespace std;

// void prev_greatest(vector<int> &v,vector<int> &v1){
//   for(int i=0; i<v.size(); i++){
//   int k=-1;
//     for(int j=0; j<i; j++){  // {0,1,0,2,1,0,1,3,2,1,2,1}
//       if(v[j]> k){
//         k=v[j];
//       }
//     }
//     v1.push_back(k);
//   }
// }

// void next_greatest(vector<int> &v,vector<int> &v1){
//   for(int i=0; i<v.size(); i++){
//   int k=-1;
//     for(int j=i+1; j<v.size(); j++){  // {0,1,0,2,1,0,1,3,2,1,2,1}
//       if(v[j]> k){
//         k=v[j];
//       }
//     }
//     v1.push_back(k);
//   }
// }

void display(vector<int> v){
  cout<<endl<<"The Elements in the Vector are: "<<endl;
  for(int i=0; i<v.size(); i++){
    cout<<v[i]<<" ";
  }
}

int trap_self(vector<int>& height) {
  vector<int> v1;
  vector<int> v2;
  for(int i=0; i<height.size(); i++){
  int k=-1;
    for(int j=0; j<i; j++){  // {0,1,0,2,1,0,1,3,2,1,2,1}
      if(height[j]> k){
        k=height[j];
      }
    }
    v1.push_back(k);
  }
  // display(v1);

  for(int i=0; i<height.size(); i++){
  int k=-1;
    for(int j=i+1; j<height.size(); j++){  // {0,1,0,2,1,0,1,3,2,1,2,1}
      if(height[j]> k){
        k=height[j];
      }
    }
    v2.push_back(k);
  }
  // display(v2);

  vector<int> v3;
  int n=height.size()-1;
  for(int i=1; i<n; i++){
    v3.push_back(min(v1[i],v2[i]));
  }
  // display(v3);

  // 0 1 0 2 1 0 1 3 2 1 2 1 
  //   0 1 1 2 2 2 2 2 2 1 
  //   0 1 0 1 2 1 0 0 1 0 
  int count=0;
  for(int i=1; i<n; i++){
    if(v3[i]>height[i]){
      count+=(v3[i]-height[i]);
    }

  }

  return count;
}


int trap(vector<int> &height){
  int n=height.size();
  int prev[n];
  prev[0]=-1;
  int max=height[0];
  for(int i=1; i<n; i++){
    prev[i]=max;
    if(max< height[i]) max=height[i]; // {0,1,0,2,1,0,1,3,2,1,2,1}
  }

  prev[n-1]=-1;
  max=height[n-1];
  for(int i=n-2; i>=0; i--){
    if(prev[i]> max) prev[i]=max;
    if(max< height[i]) max=height[i];
  }

  int water=0;
  for(int i=1; i<n-1; i++){
    if(height[i] < prev[i]){
      water+= (prev[i] - height[i]);
    }
  }
  return water;
}



int main(){
  vector<int> v={0,1,0,2,1,0,1,3,2,1,2,1};
  int count=trap_self(v);
  cout<<endl<<"The Water can stored is: "<<count;
  cout<<endl<<endl<<endl;
  
  int count1=trap(v);
  cout<<endl<<"The Water can stored is: "<<count1;
  return 0;
}