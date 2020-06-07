#pragma once
#include <iostream>
#include "board.h"

using namespace std;

class Game
{
private:
    string _nickname;

public:
    Game() : _nickname{"new_player"} {}
    virtual ~Game() = default;

    //metoda pozwalajaca wprowdzic nazwe gracza
    inline void new_player(string nick) { _nickname = nick; }

    
    //funkcje wirtualne
    virtual void new_board(const Board&) = 0;
    virtual void print_board() = 0;
    virtual bool operator()(int, int) = 0;
};

