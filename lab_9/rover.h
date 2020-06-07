#pragma once
#include <iostream>
#include "utils.h"
#include <functional>


using namespace std;

class Rover
{
    friend class RoverIface;
    private:
    //skladniki
    string name;
    Coordinates coordinates;
    bool online{false};
    
    public:
    Rover(){}
    Rover(string name): name{name} {} //konstuktor
    
    //pobranie nazwy
    string get_name()const{
        return name;
    }
    
    //pobranie koordynat
    Coordinates get_coordinates()const{
        return coordinates;
    }
    
    //wykonywanie pojedynczej funkcji
    void execute(const std::function< void() > action){
        if(online) action();
        else cout<<"ERROR: Rover not linked to an interface\n";
    }
    //funkcja do jezdzenia przyjmujaca wektor funkcji ktore powinny zwracac wektor double
    void drive(const Program& progr_) {
        if(online){
            for(auto v : progr_){
                coordinates += v();
                cout<<"Arriving at: "<<coordinates;}
        }
        else cout<<"ERROR: Rover not linked to an interface\n";
    }
    
};