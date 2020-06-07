#pragma once
#include <iostream>
#include <tuple>
#include <algorithm>

using namespace std;
//skrocenie nazwy dla naszego typu
typedef tuple<int, int, int, int, int> time_;

//operator wypisywania anszej zmiennej czasowej
ostream& operator<<(ostream& o, const time_& K){
    return o<<get<0>(K)<<"y:"<<get<1>(K)<<"d:"<<get<2>(K)<<"h:"<<get<3>(K)<<"m:"<<get<4>(K)<<"s";
}

//operator dodawania naszych zmiennych czasowych
time_ operator+(const time_& A, const time_& B){
    return make_tuple(get<0>(A) + get<0>(B), get<1>(A) + get<1>(B), get<2>(A)+get<2>(B), get<3>(A) + get<3>(B), get<4>(A) + get<4>(B));
}

//operator konwersji sekund na nasza zmienna czasowa time_
time_ operator""_sec(long long unsigned n){
    int rest = 0;
    const int sec_in_year = 31536000;
    const int sec_in_day = 86400;
    const int sec_in_hour = 3600;
    const int sec_in_min = 60;
    int tab[5];
    rest = n % sec_in_year;
    tab[0] = n/sec_in_year;
    n = rest;
    rest = n % sec_in_day;
    tab[1] = n / sec_in_day;
    n = rest;
    rest = n % sec_in_hour;
    tab[2] = n / sec_in_hour;
    n = rest;
    rest = n % sec_in_min;
    tab[3] = n / sec_in_min;
    tab[4] = rest % 60;
    return make_tuple(tab[0], tab[1], tab[2], tab[3], tab[4]);
}

//oeprator zamiany lat na nasza zmienna czasowa
time_ operator""_yrs(long long  unsigned n){
    return make_tuple(n, 0, 0, 0, 0);
}

//zmieniamy time_ na sekundy
long long unsigned to_sec(const time_& K){
    const int sec_in_year = 31536000;
    const int sec_in_day = 86400;
    const int sec_in_hour = 3600;
    const int sec_in_min = 60;
    return get<0>(K) * sec_in_year + get<1>(K) * sec_in_day +  get<2>(K) * sec_in_hour +  get<3>(K) *sec_in_min + get<4>(K);
}

//to samo co nasz operator konwersji
time_ from_sec(long long unsigned n){
    return operator""_sec(n);
}
    
//klasa zclowieka ktorego bedziemy klonowa,c tzn oryginal ktory zostaje na ziemi
class Human
{
    //cechy wyrozniajace czlowieka
    protected:
    string _name;
    time_ _age;
    int _cnt{0};//licztmy ile razy goscia klonowalismy
    
    public:
    //tworzymy czlowieka o danym imieniu i wieku
    Human(string name, time_ age): _name{name}, _age{age} {}
    //zwiekszamy wiek
    void update_time(const time_& t){
        _age = _age + t;
    }
    //pobieramy imie
    string get_name()const{
        return _name;
    }
    //pobieramy wiek ajko zmienna time_
    time_ get_age()const{
        return _age;
    }
    //zwiekszamy ilosc klonow danego oryginalu czlowieka
    void clone(){
        _cnt ++;
    }
    //dostajemy ilosc klonow
    int get_cnt()const{
        return _cnt;
    }
};

//klasa klona czlowieka
class Clone : public Human
{
    public:
    //klonujemy czlowieka
    Clone(Human& human): Human(human.get_name()+"_" + to_string(human.get_cnt()+1), human.get_age()){
        human.clone();
    }
};







