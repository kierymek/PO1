#pragma once
#include <iostream>

using namespace std;

class Board
{
private:

public:
    
    virtual ~Board() = default;
    virtual int get_geometry(int k) const = 0;
    virtual double get_params(int k) const = 0;
};

