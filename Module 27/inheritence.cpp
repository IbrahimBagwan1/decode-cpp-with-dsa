#include<iostream>
using namespace std;

class vehicle{
public:
  int lights;
  string companyName;
  int engineSize;
  int tyreSize;
};

class car : public vehicle{
public:
  int steeringSize;
};

class bike : public vehicle{
public:
  int handleSize;
};

int main(){
  bike RE;
  RE.engineSize=100;
  
  return 0;
}