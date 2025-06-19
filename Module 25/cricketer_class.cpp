#include<iostream>
using namespace std;

class cricketer{
public:
  int age;
  string name;
  int average_runs;
  int num_test_matches;
};

int main(){
  cricketer hero; hero.age=23; hero.average_runs=98; hero.name="Virat"; hero.num_test_matches=53;
  
  cricketer zero; zero.age=16; zero.average_runs=55; zero.name="Raghav"; zero.num_test_matches=42;

  cricketer delhi_Capitals[2]={hero, zero};

  // int n;
  // for(int i=0; i<2; i++){
  //   cout<<"Enter the Age: ";
  //   cin>>n;
  //   delhi_Capitals[i].age=n;

  //   cout<<endl<<"Enter the name: ";
  //   string s;
  //   cin>>s;
  //   delhi_Capitals[i].name=s;
  // }

  for(int i=0; i<2; i++){
    cout<<"The Player Details are: ";
    cout<<endl<<delhi_Capitals[i].name;
    cout<<endl<<delhi_Capitals[i].age<<"\n\n";
  }

  return 0;
}