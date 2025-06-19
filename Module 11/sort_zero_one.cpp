// self try working.
// #include<iostream>
// #include<vector>
// using namespace std;

// void display(vector<int> v){
//   for(int i=0; i<v.size(); i++){
//     cout<<v[i]<<" ";
//   }
//   cout<<endl;
// }

// void sort_self(vector<int> &v){
//   for(int j=0; j<v.size(); j++){
//     for(int i=1; i<v.size()-1; i++){
//       if(v[i]>v[i+1]){
//         int temp=v[i];
//         v[i]=v[i+1];
//         v[i+1]=temp;
//       }
//     }
//   }
// }

// int main(){
//   vector<int> v;
//   v.push_back(0);   
//   v.push_back(1);   
//   v.push_back(0);   
//   v.push_back(1);   
//   v.push_back(0);   
//   v.push_back(1);   

//   display(v);
//   sort_self(v);
//   cout<<endl<<"After Sorting the Vector: "<<endl;
//   display(v); 

//   return 0;
// }


// // Raghav Method 1: Two Pass Method.
// #include<iostream>
// #include<vector>
// using namespace std;

// void display(vector<int> v){
//   for(int i=0; i<v.size(); i++){
//     cout<<v[i]<<" ";
//   }
//   cout<<endl;
// }
// int main(){
//   vector<int> v={0,1,0,1,1,0,0,1,0,0,1};
//   int count_zero=-1;
//   int count_one=-1;
//   display(v);

//   for(int i=0; i<v.size(); i++){
//     if(v.at(i)==0) count_zero++;
//     else count_one++;
//   }
//   for(int i=0; i<v.size(); i++){
//     if(i<=count_zero){
//       v.at(i)=0;
//     }
//     else{
//       v.at(i)=1;
//     }
//   }
//   cout<<endl<<"The Vector After Sorting: "<<endl;
//   display(v);
//   return 0;
// }



// Raghav Method 2: Two Pointers.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void display(vector<int> v){
  for(int i=0; i<v.size(); i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
}

void sort_two_pointers(vector<int> &v){
  int last= v.size()-1;
  int first= 0;
  while(first<last){
    if(v[first]==0) first++;
    if(v[last]==1) last--;
    if(first > last) break;
    if(v[first]==1 && v[last]==0) {
      int temp=v[first];
      v[first]=v[last];
      v[last]=temp;
      first++;
      last--;
    }
  }
}

int main(){
  vector<int> v={1,1,0,1,0,1,1,0};
  display(v);
  sort_two_pointers(v);
  cout<<endl<<"After Sorting the Vector: "<<endl;
  display(v);
  return 0;
}