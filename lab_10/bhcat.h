#pragma once
#include <iostream>
#include <math.h>
#include "blackhole.h"
#include <map>
#include <initializer_list>
#include <algorithm>
#include <functional>

using namespace std;

//zrobione zadanie dodatkowe

//kontener na czarne dziury ograniczonej wielkości
class BHCatalogue
{
    private:
    //mapa czarnych dziur z kluczem postaci string
    map<string, BlackHole> _map;
    const int _max{5};
    
    public:
    //funkcja dodawania elemntu czyli pojedynczych czarnych dziur z pomocniczym iteratorem dla cyfr rzymskich
    void add(const BlackHole& blackhole){
        const map<int, string> iterator = {{1, "I."}, {2, "II."}, {3, "III."}, {4, "IV."}, {5, "V."}};
        int n = _map.size();
        if(n < _max) _map.insert(pair<string, BlackHole>(iterator.at(n+1), blackhole));
        else cout<<">> Catalogue full. "<<'"'<<blackhole.name()<<'"'<<" not added.\n";
    }
    //przekazujemy pojedyncze elementy
    void add(initializer_list<BlackHole> list){
        for(auto v : list)
            add(v);
    }
    //zwracamy leement mapy wg klucza
    BlackHole get(string key){
        return _map.at(key);
    }
    //zwracamy cala mape
    map<string, BlackHole>& get_map(){
        return _map;
    }
    //sortujemy elementy wg mas
    vector<BlackHole> get_ordered_by_mass(){
        vector<BlackHole> vec;
        for(auto v : _map)
            vec.push_back(v.second);
        sort(vec.begin(), vec.end(), [](BlackHole a, BlackHole b){return a.get_mass() < b.get_mass();});
        return vec;
    }
    
    //metoda do zad dodatkowego
    vector<BlackHole> get_custom(function<bool(const BlackHole&)> fun){
        vector<BlackHole> vec;
         for(auto v : _map)
            if(fun(v.second)) vec.push_back(v.second);
        return vec;
    }
};

//opertor konwersji do zad dodatkowego
double operator""_pc(long double n){
    return n * 3.1e13;
}