#pragma once
#include <iostream>
#include <math.h>

using namespace std;

//stale potrzebne do obliczen
const double G = 6.67 * pow(10, -11);
const double M = 2*pow(10, 30);
const double c = 3 * pow(10, 8);

//klasa czarnej dziury
class BlackHole
{
    private:
    //skladowe charakteryzujace zcarna dziure
    string _name;
    double _mass;
    double _Rh;
    double _dist;
    
    public:
    //konstrukor obliczajacy od razu promien Schwarzschielda
    BlackHole(string name, double mass, double dist): _name{name}, _mass{mass}, _Rh{2*G*mass*M/pow(c, 2)/pow(10, 3)}, _dist{dist} {};
    string name()const{
        return _name;
    }
    //getter masy
    double get_mass()const{
        return _mass;
    }
    //getter promienia Schwarzschielda
    double get_Rh()const{
        return _Rh;
    }
    //zaprzyjazniony operator wypisywania
    friend ostream& operator<<(ostream& o, const BlackHole& K){
        return o<<K._name<<" : M="<<K._mass<<" solar mass, Rh="<<K._Rh <<"km, dist="<<K._dist<<" pc\n";
    }
};