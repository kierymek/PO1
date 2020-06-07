#pragma once
#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;
//alias do obslugi wektora funckji
 //dla wektor double wyskakiwal blad
typedef vector<double> vec;
typedef vector< function<vec(void) >> Program;

class Coordinates
{
  protected:
  double _x, _y;
  
  public:
  //czesc konstruktorowa
  Coordinates(double x=0, double y=0): _x{x}, _y{y} {}
  Coordinates(vector<double>& vec): _x{vec[0]}, _y{vec[1]} {}
  Coordinates(const Coordinates& K): _x{K._x}, _y{K._y} {}
  Coordinates& operator+=(const vector<double>& v){
      _x += v[0];
      _y += v[1];
      return *this;
  }
  //dodawanie koordynatow
  Coordinates& operator-=(const vector<double>& v){
      _x -= v[0];
      _y -= v[1];
      return *this;
  }
  //operator odejmowania koordynatow
  vec operator-(const Coordinates K)const{
      return {_x - K._x, _y - K._y};
  }
  
  friend ostream& operator<<(ostream& o, const Coordinates& K){
      o<<"("<<K._x<<", "<<K._y<<")\n";
      return o;
  }
//   koordynaty
  double get_x()const{
      return _x;
  }
  
  //pobranie koordynaty
  double get_y()const{
      return _y;
  }
  
};


//przestrzen nazw z funkcjami dla rowera
namespace MarsRoutes
{
     Program route1(){
        return{			
			[](){ return vec{1,-1}; }, 
			[](){ return vec{1,0}; },
            [](){ return vec{1,-1};}};
    }
    
    Program go_to(const Coordinates& A, const Coordinates& B){
        return {[A, B](){ return B - A;}}; 
    }
}