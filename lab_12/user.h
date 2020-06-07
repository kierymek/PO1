#pragma once
#include <iostream>
#include <vector>
#include <memory>
#include <exception>

using namespace std;

//klassa uzytkownika
class User
{
  private:
  //falga autoryzacji
  bool _authorized{false};
  string _name;
  
  public:
  //konstruktor uzytkownika o podanej nazwie
  User(string name): _name{name}{
      cout<<"Creating User "<<name<<endl;
  }
  void authorize(bool t){
      _authorized = t;
  }
  //geter nazwy uzytkownika
  string get_name()const{
      if(_authorized)return _name;
      else throw "Authorisation for User " + _name +" was not granted.";
  }
  
  //sprawdzamy autoryzacje
  bool is_authorized()const{
      return _authorized;
  }
  
  //glosny destruktor
  ~User(){
      cout<<"Deleting User "<<_name<<endl;
  }
};

//klasa kontenera uzytkownikow
class UserArray
{
  private:
  int _max;//ustawiamy maksymalna ilosc przechowywanych userow
  vector<User*> _vec;//kontener
  
  public:
  //konstruktor z ustawieniem rozmiaru kontenera
  UserArray(int n): _max{n} {
      _vec.resize(n);
  }
  //wstawiamy usera pod damny indeks i sprawdzamy czy nie wyszlismy poza zakres
  void set(int n, User* ptr){
      if(n<_max)_vec[n] = move(ptr);
      else{
        delete ptr;
        throw unique_ptr<UserArray>(this);
      }
  }
  
  //dostajemy sie do naszego usera, sprawdzamy autoryzacje
  User* get(int n){
        if(_vec[n]->is_authorized()) return _vec[n];
        else {
            throw exception();
        }
  }
  
  //destruktor naszych przechowywanych adresow
  ~UserArray(){
      for(const auto& v : _vec)
        delete v;
  }
  
};

