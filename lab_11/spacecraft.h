#pragma once
#include "human.h"
#include <functional>

//klasa naszego statku kosmicznego do transportu klonow 
class Spacecraft
{
    private:
    //kontener an nasze klony
    vector<Human*> _vec;
    
    public:
    //tworzymy statek z kontenerem pelnym klonow
    Spacecraft(const vector<Human*>& v): _vec{v} {}
    //nasze klony odczuwaja w tej funkjci uplywa czasu zaleznie od predkosci i bliskosci czarnej dziury,
    //co jest charakteryzowane rzez obiekt funkcjyjny
    void update_time(function<time_(const time_&)> fun, time_ t){
        for(auto v : _vec)
            v->update_time(fun(t));
    }
    //znajdujemy klona o danym imieniu
    Human operator[](string name){
        Human* ptr;
        for_each(_vec.begin(), _vec.end(), [name, &ptr](Human* v){
            if(v->get_name()==name) ptr = v;});
        return *ptr;
    }
};