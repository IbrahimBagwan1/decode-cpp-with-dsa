#include<iostream>
#include<algorithm>
using namespace std;

class book{
public:

  int pages;
  string name;
  int price;

  int check_price(int n){
    if(price < n) return 1;
    else return 0;
  }

  bool is_book_present(string title){
    if(name== title) return true;
    else return false;
  }
};

int main(){
  book classmate;

  classmate.name="First";
  classmate.price=45;

  cout<<classmate.check_price(50)<<endl;
  cout<<classmate.is_book_present("First");
  return 0;
}