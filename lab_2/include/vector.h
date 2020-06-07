#pragma once
#include <iostream>

namespace MyStuff{
    class vector;
}
std::ostream& operator<<(std::ostream& o, const MyStuff::vector& K);

namespace MyStuff
{
    class vector
    {
        private:
        int* ptr ;
        int cnt ;

        public:
        vector() {cnt=0; ptr=nullptr;} 
        vector(int);
        vector(const vector&);
        vector(vector&&);
        void push_back(int);
        void pop_back(int n=1);
        int size() const;
        int& operator[](int);
        vector& operator=(const vector&);
        vector& operator=(vector &&);
        vector operator+(vector);
        ~vector();
        friend std::ostream& ::operator<<(std::ostream& o, const vector& K);

        
    };
}



