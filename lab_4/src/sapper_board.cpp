#include "sapper_board.h"

int max(int x, int y)
{
    if(x < 5 && y < 5) return 5;
    else if( x > 20 || y > 20) return 20;
    else if(x > y) return x;
    else return y;
}

int check_mines(int n, const SapperBoard& K)
{
    if(n>=2 && n<=K._X*K._Y/3) return n;
    else if(n<2) return 2;
    else return K._X*K._Y/3;
}
