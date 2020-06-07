#include "wire.h"

QuantumWire::QuantumWire(double len, int qnt): _len{len}, _qnt(qnt)
{
    //srand(time(NULL));
    if(!_qnt) tab = nullptr;
    else{
    tab = new bool[_qnt];
    for(int i=0; i<_qnt; i++)
        tab[i] = rand()%2;}
}

QuantumWire::QuantumWire(const QuantumWire& K)
{
    // _len = K._len;
    // _qnt = K._qnt;
    // delete [] tab;
    // tab = new bool[_qnt];
    // for(int i=0; i<_qnt; i++)
    //     tab[i] = K.tab[i];
    tab = nullptr;
    this->operator= (K);
}

QuantumWire::QuantumWire(QuantumWire&& K)
{
    // _len = std::move(K._len);
    // _qnt = std::move(K._qnt);
    // delete [] tab;
    // tab = new bool[_qnt];
    // for(int i=0; i<_qnt; i++)
    //     tab[i] = std::move(K.tab[i]);
    // delete [] K.tab;
    // K.tab = nullptr;
    tab = nullptr;
    this->operator= (K);
}

QuantumWire& QuantumWire::operator=(const QuantumWire& K)
{
     _len = K._len;
    _qnt = K._qnt;
    if(!tab) delete [] tab;
    tab = new bool[_qnt];
    for(int i=0; i<_qnt; i++)
        tab[i] = K.tab[i];
    return *this;
}

QuantumWire& QuantumWire::operator=(QuantumWire&& K)
{
    _len = std::move(K._len);
    _qnt = std::move(K._qnt);
    if(tab) delete [] tab;
    tab = std::move(K.tab);
    K.tab = nullptr;
    return *this;
}

QuantumWire QuantumWire::operator*=(double x)
{
    _len *= x;
    return QuantumWire(*this);
}

QuantumWire::operator int()
{
    return _qnt;
}

bool QuantumWire::operator[](int n)
{
    return tab[n];
}

QuantumWire QuantumWire::operator!()
{
    QuantumWire A = QuantumWire(*this);
    for(int i=0; i<A._qnt; i++)
    {
        if(A.tab[i]) A.tab[i] = 0;
        else A.tab[i] = 1;
    }
    return A;
}

QuantumWire operator*(double n, QuantumWire K)
{
    QuantumWire A = QuantumWire(K);
    A._len *= n;
    return A;
}

QuantumWire QuantumWire::operator*(double n)
{
    QuantumWire A = QuantumWire(*this);
    A._len *= n;
    return A;
}

std::ostream& operator<<(std::ostream& o, const QuantumWire& K)
{
    o<<"length: "<< K._len<<", quanta: ";
    for(int i=0; i<K._qnt; i++)
        o<<K.tab[i]<<" ";
    return o;
}

bool QuantumWire::operator()(QuantumWire A, QuantumWire B)
{
    if(A._len > B._len) return true;
    else return false;
}

QuantumWire::~QuantumWire()
{
    if(tab) delete [] tab;
    tab = nullptr;
}