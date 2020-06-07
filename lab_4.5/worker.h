#pragma once
#include <iostream>

using namespace std;

class Worker
{
    //zaprzyjazniony operator do wypisywania klasy
  friend ostream& operator<<(ostream&, const class Worker&);
  public:
  
  //konstruktor
  Worker(string name): _name{name} {}
  
  private:
  string _name;
  
};

ostream& operator<<(ostream& o, const class Worker& K){
    o<<K._name;
    return o;
}