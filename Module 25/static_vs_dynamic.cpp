#include<iostream>
#include<algorithm>
using namespace std;

class Player{
  public:
  int health;
  bool alive;
  int matches;
};

int main(){
  string s="Ibrahim";
  string *a;
  a= &s;
  cout<<a;
  float num =234.53;
  
  float *point;
  point =&num;
  cout<<endl<<point;

  Player raghav;
  Player umesh;

  Player *ibbb = new Player;
  ibbb->matches=987;
  cout<<endl<<ibbb->matches;
  return 0;
}