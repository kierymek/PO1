#pragma once
#include <iostream>
#include "vector.h"


//przestrzen nazw
namespace MyStuff
{
    class vector;
    class matrix
    {
      //operator wypisywania dla klasy
      friend std::ostream& operator<<(std::ostream&, const matrix&);

      public:
        //czesc konstruktorowa
        matrix() ;
        matrix(const int n, const int m );
        matrix(const matrix&);
        matrix(matrix&&);

        //oepratory
        matrix& operator=(const matrix&);
        matrix& operator=(matrix&&);
        matrix operator+(const matrix&);
        matrix operator*(const matrix&);
        vector& operator[](int n);

        //metody
        void fill(vector*, int);

        //część destruktorowa
        ~matrix();


        private:
        vector** _array;
        int _m, _n;
    };
}