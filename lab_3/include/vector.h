#pragma once
#include <iostream>

namespace MyStuff{
    class vector;
}
std::ostream& operator<<(std::ostream& o, const MyStuff::vector& K);

namespace MyStuff
{
    class matrix;

    class vector
    {
        friend class matrix;
        friend std::ostream& operator<<(std::ostream&, const matrix&);

        //prywatne wlasnosci
        private:
        int* ptr ;
        int cnt ;

        public:

        //czesc konstruktorowa
        vector() {cnt=0; ptr=nullptr;} 
        vector(int);
        vector(const vector&);
        vector(vector&&);
        
        //metody klasy
        void push_back(int);
        void pop_back(int n=1);
        int size() const;

        //operatory
        int& operator[](int);
        vector& operator=(const vector&);
        vector& operator=(vector &&);
        vector operator+(vector);

        //destruktor
        ~vector();
        friend std::ostream& ::operator<<(std::ostream& o, const vector& K);

        
    };
}



