#pragma once 
#include <iostream>
#include <vector>
#define M_PI 3.14

using namespace std;

//klasa bazowa
class Shape
{
    //zaprzyjazniony operator wypisywania
    friend ostream& operator<<(ostream& o, const Shape& K){
        return o<<K._name;
    }
    
    //zmienne chronione
    protected:
    string _name;
    vector <double> _vec; // kontener na wartosci zmiennopszecinkowe ksztaltu
    
    public:
    //kontruktor rowniez dla pochodnych
    Shape(string name, vector <double> vec): _name{name}, _vec{vec} {}
    //wirtualne metody czyli interfejs
    virtual double area()const = 0;
    virtual double circumference()const = 0;
    virtual ~Shape() = default; //wirtualny konstruktor
};

//klasa okregu dziedziczacego po ksztalcie
class Circle : public Shape
{
    //wymuszenie dziedziczenia konsturktora
    using Shape::Shape;
    
    public:
    //nadpisanie funkcji zwracajeacej warotsc obwodu
    double circumference()const override{
        return 2*_vec[0] * M_PI;
    }
    //nadpisanie funkcji zwracajeacej warotsc pola
    double area()const override{
        return M_PI*_vec[0]*_vec[0];
    }

    
};

//klasa prostokada dziedziczaca po ksztalcie
class Rectangle : public Shape
{
    //wymuszenie dziedziczenia konsturktora
    using Shape::Shape;
    
    public:
    //nadpisanie funkcji zwracajeacej warotsc obwodu
    double circumference()const override{
        return 2*(_vec[0] + _vec[1]);
    }
    //nadpisanie funkcji zwracajeacej warotsc pola
    double area()const override{
        return _vec[0] * _vec[1];
    }
    

};