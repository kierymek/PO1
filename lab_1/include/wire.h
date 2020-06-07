#pragma once
#include <iostream>
#include <time.h>

class QuantumWire
{
    public:
    QuantumWire(double len = 0, int y = 0);
    QuantumWire(const QuantumWire&);
    QuantumWire(QuantumWire&&);
    ~QuantumWire();
    QuantumWire& operator=(const QuantumWire&);
    QuantumWire& operator=(QuantumWire&&);
    QuantumWire operator*=(double);

    friend QuantumWire operator*(double, QuantumWire);
    QuantumWire operator*(double);
    friend std::ostream& operator<<(std::ostream&, const QuantumWire&);
    bool operator[](int);
    QuantumWire operator!();
    bool operator()(QuantumWire, QuantumWire);
    operator int();

    private:
    double _len;
    int _qnt;
    bool* tab;
};

QuantumWire operator*(double, QuantumWire);
std::ostream& operator<<(std::ostream&, const QuantumWire&);