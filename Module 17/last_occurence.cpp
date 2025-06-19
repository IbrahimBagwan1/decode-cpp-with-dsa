#include <bits/stdc++.h>
using namespace std;

int lastOccurrence(vector<int> &a, int tgt){
  
  int low = 0, high = a.size() - 1;
  int answer = -1;
  while (low <= high)
  {
    int mid = low + (high - low) / 2;
    if (a[mid] <= tgt)
    {
      answer = mid;
      low = mid + 1;
    }
    else
      high = mid - 1;
  }
  return answer;
}


int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  cout << "Enter the Target: " << endl;
  int tgt;
  cin >> tgt;
  cout << lastOccurrence(a, tgt) << endl;
}