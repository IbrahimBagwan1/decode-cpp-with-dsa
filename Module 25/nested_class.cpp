#include<iostream>
using namespace std;

class Player{
public:
  int health;
  int killed;
  bool alive;
  string name;

  class helmet{
  public:
    int hp;
    int level;
    string color;

    void setHp(){
      cout<<this->hp;
    }
  };
};

int main(){
  Player ibbb;
  
  return 0;
}