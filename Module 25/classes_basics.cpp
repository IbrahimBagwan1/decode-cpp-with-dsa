#include<iostream>
#include<algorithm>
using namespace std;

class cric{
  public:
  int num_of_matches;
  string name;
  float average_run;
};

int main(){
  cric virat;
  virat.name="Virat kohli";
  virat.num_of_matches= 3000;
  virat.average_run = 55.2;

  cout<<endl<<virat.name;
  cout<<endl<<virat.num_of_matches;
  cout<<endl<<virat.average_run;
  return 0;
}