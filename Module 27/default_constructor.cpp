#include<iostream>
using namespace std;
 

class Bike{
public:
  int sizeof_tyre;
  int model_no;
  static int speed;

  // Bike(int sizeof_tyre){ // constructure
  //   this->sizeof_tyre=sizeof_tyre;
  //   cout<<"Constructor Use Huva !!!\n";
  // }
  Bike(int st) : sizeof_tyre(st){} // this is intialization shortcut method...

  ~Bike(){  // destructure
    cout<<"\nDestructure Use Huva !!!\n";
  }

  static void increase_speed(){
    speed++;
  }

};

int Bike::speed=125;

int main(){
  cout<<endl;
  Bike Honda(23);
  Bike RE(82);

  Honda.increase_speed();
  RE.increase_speed();

  cout<<endl<<Honda.speed;
  cout<<endl<<RE.speed;
  return 0;
}