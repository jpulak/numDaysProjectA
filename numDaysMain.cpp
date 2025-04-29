// main for numdays coverting/manipulating w/ post/pre +/-

#include <iostream>
#include "numDays.h" //class
using namespace std;

//driver func 

int main(){
  
  //intilize vars

  double h1;
  double h2;

  // set inputs to vars

  cin >> h1 >> h2;
  numDays one(h1); // obj one to h1
  numDays two(h2); // obj two to h2

  // run class funcations accordingly 

  cout << "One: " << one.getDays() << endl;
  cout << "Two: " << two.getDays() << endl;
  numDays three = one + two; // obj three is both combined
  cout << "Three: " << three.getDays() << endl;
  numDays four = three++; // obj 4 postfix ++
  cout << "Four = Three++ : " << four.getDays() << endl;
  four = ++three; //obj 4 ++ prefix
  cout << "Four = ++Three: " << four.getDays() << endl;
  four = three--; // obj 4 postfix--
  cout << "Four = Three-- : " << four.getDays() << endl;
  four = --three; // obj 4 --prefix
  cout << "Four = --Three : " << four.getDays() << endl;
}
