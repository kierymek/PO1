#pragma once
#include <iostream>
#include "board.h"

using namespace std;
int max(int, int);

class SapperBoard : public Board
{
    //funkcja pozwalajaca ustalic liczbe min dla ulatiwenia zapisu w konstruktorze
    friend int check_mines(int n, const SapperBoard& K);

private:

    int _X, _Y, _mines_quantity;
    double time_limit;

public:

    //min wymiary 5x5, min liczba min 2, maks liczba min x * y /3
    SapperBoard(int X = 5, int Y = 5, int mines_quantity = 2): _X{max(X, Y)}, _Y{max(X, Y)}, _mines_quantity{check_mines(mines_quantity, *this)}{}
    ~SapperBoard() = default;

    //pozwala nam uzyskac wymiary takie jak wymiary plansyz i liczba min
    int get_geometry(int k) const{
        switch(k)
        {
            case 1: return _X;  break;
            case 2: return _Y; break;
            case 3: return _mines_quantity; break;
            default : return 0; break;
        }
    }

    //parametry zmiennoprzecinkowe, nie wykorzystywane
    double get_params(int k) const{
        switch(k)
        {
            case 1: return time_limit;  break;
            default : return 0; break;
        }
    }
};

