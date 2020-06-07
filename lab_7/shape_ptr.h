#pragma once 
#include <iostream>
#include "shape.h"

using namespace std;

//klasa inteligentnego wskaznika
class Shape_ptr
{
    private:
    Shape* _ptr; //wskaznik na ksztalt
    
    public:
    Shape_ptr(Shape * ptr = nullptr) : _ptr{ptr} {}//rowniez jako konstruktor domyslny
    Shape_ptr(const Shape& K) = delete; //zapobieganie kopiowaniu, zwraca błąd
    ~Shape_ptr(){
        delete _ptr;
    }    
    
    //operator strzalki zwracajacy wskaznik na ksztalt
    Shape* operator->(){
        return _ptr;
    }
    
    //operator dereferencji
    Shape& operator*(){
        return *_ptr;
    }
    
    //zapobieganie kopiowaniu
    Shape_ptr& operator=(const Shape_ptr& K) = delete;
    
    //operator przypisania inteligentnego wskaznika
    Shape_ptr& operator=(Shape_ptr& K){
        delete _ptr;
        _ptr = move(K._ptr);
        K._ptr = nullptr;
        return *this;
    }
    
    //operator przypisania dla zwyklego wskaznika
    Shape_ptr& operator=(Shape*& ptr){
        delete _ptr;
        _ptr = move(ptr);
        ptr = nullptr;
        return *this;
    }
    
    //operator konwersji na wskaznik na ksztalt
    operator Shape*(){
        return _ptr;
    }
};