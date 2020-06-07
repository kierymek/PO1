#include "matrix.h"

using namespace std;

namespace MyStuff
{
    matrix::matrix(const int n, const int m)
    {
        _m = m;
        _n = n;

        _array = new vector*[_m];

        for(int i=0; i<_m; i++)
            _array[i] = new vector(_n);
    }

    matrix::matrix(const matrix& K)
    {
        _m = K._m;
        _n = K._n;

        _array = new vector*[_m];

        for(int i=0; i<_m; i++)
            _array[i] = new vector(_n);
        
        for(int i=0; i<_m; i++)
            for(int j=0; j<_n; j++)
                _array[i]->ptr[j] = K._array[i]->ptr[j];
    }

    matrix::matrix(matrix&& K)
    {
        _m = K._m;
        _n = K._n;
        _array = move(K._array);
        K._array = nullptr;
    }

    //destruktor sprawdzajacy czy pod adresem podwojnej tablicy cos sie znajduje
    matrix::~matrix()
    {
        if(_array)
        for(int i=0; i<_m; i++)
            if(_array[i]) delete _array[i];
        if(_array) delete[] _array;

        _array = nullptr;
    }

    //operator przypisania dal konstruktora kopiujacego
    //if(this==&K)
    matrix& matrix::operator=(const matrix& K)
    {
        for(int i=0; i<_m; i++)
            delete _array[i];
        delete[] _array;

        _m = K._m;
        _n = K._n;

        _array = new vector*[_m];

        for(int i=0; i<_m; i++)
            _array[i] = new vector(_n);
        
        for(int i=0; i<_m; i++)
            for(int j=0; j<_n; j++)
                _array[i]->ptr[j] = K._array[i]->ptr[j];
        
        return *this;
    }

    //operator przypisania dal konstruktora przenoszacego
    
    //swap
    //exchange
    matrix& matrix::operator=(matrix&& K)
    {
        _m = K._m;
        _n = K._n;
        swap(_array, K._array);
        K._array = nullptr;

        return *this;
    }

    //operator dodawnaia macierzy, tworzy macierz o maksymalnych wymiarach kazdej z macierzy
    matrix matrix::operator+(const matrix& K)
    {
        matrix A(_m > K._m? _m : K._m, _n > K._n ? _n : K._n);

        for(int i=0; i<_m; i++)
            for(int j=0; j<_n; j++)
                A._array[i]->operator[](j) +=  _array[i]->operator[](j);

        for(int i=0; i<K._m; i++)
            for(int j=0; j<K._n; j++)
                A._array[i]->operator[](j) += K._array[i]->operator[](j);
                
        return A;
    }

    //operator mnozenia macierzy klasycznie o zlozonosci n^3
    matrix matrix::operator*(const matrix& K)
    {
        if(_n == K._m)
        {
            matrix A(K._n, _m );

            for(int i=0; i<_m; i++)
                for(int j=0; j<K._n; j++)
                    for(int k=0; k<_n; k++)
                         A._array[i]->operator[](j) += _array[i]->operator[](k) * K._array[k]->operator[](j);
        
            return A;
        }
        else std::cout<<"Niezgodne wymiary *\n";
        return *this;
    }

    //operator pozwalajacy na dostep do wektora bedacego skladowa danego wiersza macierzy
    vector& matrix::operator[](int n)
    {
        return *_array[n];
    }

    //metoda wypelniajaca macierz zadana iloscia wierszy
    void matrix::fill(vector* vec, int n)
    {
        for(int i=0; i<n; i++)
            for(int j=0; j<_n;j++)
                _array[i]->ptr[j] = vec[i].ptr[j];
    }

    //operator wypisania dla macierzy
    ostream& operator<<(ostream& o, const matrix& K)
    {
        for(int i=0; i<K._m; i++)
        {
            for(int j=0; j<K._n; j++)
                o<<K._array[i]->ptr[j]<<" ";
            o<<"\n";
        }

        o<<"\n";
        return o;
    }

    //konstruktor domyslny
    matrix::matrix()
    {
        _m = 0;
        _n = 0;
        _array = nullptr;
    }
}