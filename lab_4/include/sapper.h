#pragma once
#include <iostream>
#include "game.h"
#include "matrix.h"
#include "sapper_board.h"
#include "board.h"

using namespace std;

class Sapper : public Game
{
private:

    MyStuff::matrix *plansza;
    int _poles_left;

public:

    //metody przeslaniajace metody wirtualne klasy od ktorej dziedziczymy
    void new_board(const Board&);
    void print_board();
    bool operator()(int, int);
    ~Sapper();
};
