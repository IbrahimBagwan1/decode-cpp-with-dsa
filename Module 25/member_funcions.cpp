#include<iostream>
#include<algorithm>
using namespace std;

class cric{
  private:
  int health=9;
  public:
  void heal(){
    cout<<health;
  }
  int num_of_matches;
  string name;
  float average_run;

  void showMatches(){
    cout<<endl<<"The No of Matches the Player Played is: "<<num_of_matches;
  }
};

int main(){
  cric virat;
  // virat.name="Virat kohli";
  // virat.num_of_matches= 3000;
  // virat.average_run = 55.2;

  // cout<<endl<<virat.name;
  // cout<<endl<<virat.num_of_matches;
  // cout<<endl<<virat.average_run;

  // virat.showMatches();

  virat.heal();
  return 0;
}