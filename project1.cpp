#include <iostream>
using namespace std;

struct Studenti{

  string emri;
  string mbiemri;
  string ID;
  int notat[6];


  void lexoStudentin();
  void shtypStudentin();
  double notaMesatare();
  bool fitonBurse();


};

int main(){
    cout<<"Hello world"<<endl;
    return 0;
}
