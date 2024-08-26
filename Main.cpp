#include <iostream>
#include<string>
using namespace std;
class car{
  
  public:
  string brand;
  string model;
  string year;
};

int main(){

    car carobj1;
    carobj1.brand="Bmw";
    carobj1.model="X5";
    carobj1.year=1999;
    
    car carobj2;
    carobj2.brand="Thar";
    carobj2.model="AX";
    carobj2.year=2020;
    
    cout<<carobj1.brand<<""<<carobj1.model<<""<<carobj1.year<<"\n";
    cout<<carobj2.brand<<""<<carobj2.model<<""<<carobj2.year<<"\n";
    
    
    return 0;
}