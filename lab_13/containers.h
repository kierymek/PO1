#pragma once
#include <iostream>
#include <array>
#include <map>
#include <exception>
#include <initializer_list>
#include <vector>
#include <type_traits>

using namespace std;
enum Bill{Ten_PLN, Twenty_PLN, Fifty_PLN,  Hundred_PLN };

//klasa kontenera na wode
class WaterContainer
{
    public:
    WaterContainer(double max): max_volume{max} {}
    //do pustego kontenera dajemy wode
    void put(double v){
        if(v <= max_volume && !_volume) _volume = v;
        else{
            string error ="Error: Container too small.\n";
            throw error;
        } 
        
    }
    //dostajemy ilosc wody
    double get()const{
        return _volume;
    }
    //oprozniamy
    void clean(){
        _volume = 0;
    }
    //dodajemy wode
    void operator+=(double v){
        if(_volume + v <= max_volume) _volume += v;
        else cout<< "Error: Container too small.\n";
    }
    //dostajemy max pojemnosc
    double get_max_volume()const{
        return max_volume;
    }
    //rozmiar
    double size()const{
        return _volume;
    }
    private:
    double max_volume, _volume{0};
    
};

//portfel
class Wallet
{
  public:
  Wallet(int max): _limit{max} {}
  //dajemuy okreslone nominaly do pustego
  void put(const vector<Bill>& _vec){
        if((int)_vec.size() <= _limit)_wallet = _vec;
        else cout<< ">> Error: Wallet too small.\n";
    }
    vector<Bill> get()const{
        return _wallet;
    }//oprozniamy
    void clean(){
        _wallet.clear();
    }
    //dodajemy okreslone nominaly
    void operator+=(const vector<Bill>& _vec){
        if((int)(_vec.size() + _wallet.size()) <= _limit)
            for(const auto& v : _vec) 
                _wallet.push_back(v);
        else cout<< "Error: Wallet too small.\n";
    }
    //max rozmiar
    int get_max_volume()const{
        return _limit;
    }
    int size()const{
        return _wallet.size();
    }
  
  private:
  int _limit;
  vector<Bill> _wallet;
};

//sluzy do przenoszenia miedzy kontenerami
template <typename Container_T>void move_to_container(Container_T& A, Container_T& B){
    B += A.get();
    if(A.size() + B.size() <= B.get_max_volume()) A.clean();

}

//do wypisywania zawartosci portfela
ostream& operator<<(ostream& o, const vector<Bill>& _wallet){
    if((int)_wallet.size() > 0){
    map<Bill, string> _eval {{Ten_PLN, "ten"}, {Twenty_PLN, "twenty"}, {Fifty_PLN, "fifty"}, {Hundred_PLN, "Hundred"}};
    string _contain;
        for(const auto& v : _wallet)
            _contain += _eval.at(v) + " ";
        return o<<_contain;
    }
    else return o<<"No bills.\n";
}

//powielamy kontener o okreslona ilosc razy
template <int n, typename Container_T>vector<Container_T> replicate_container(Container_T& K){
    vector<Container_T> tmp;
    for(int i=0; i<n; i++)
        tmp.push_back(K);
    return tmp;
}

//sprawdzamy czy typy sa takie same
template <typename Container_T1, typename Container_T2>void compare_container_type(Container_T1& A, Container_T2& B){
    if(is_same<Container_T1, Container_T2>::value) cout<<"The containers are of same type.\n";
    else cout<<"The containers are of different type.\n";
}


