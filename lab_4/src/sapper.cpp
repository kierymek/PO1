#include "sapper.h"

using namespace MyStuff;

void Sapper::new_board(const Board& board)
{
    plansza = new matrix(board.get_geometry(2), board.get_geometry(1));
     
    int mines_left = board.get_geometry(3);

    _poles_left = board.get_geometry(2) * board.get_geometry(1) - mines_left;
    
    //sprawdzamy w kadym obiegu ile min zostalo do ustawienia
    while(mines_left)
    {
        //losowo znajdujemy wspolrzedne
        int a = rand()%(board.get_geometry(1));
        int b = rand()%(board.get_geometry(2));

        //sprawdzamy czy nie ma juz na tym miejscu miny
        if((*plansza)[a][b] != -200)
        {
            (*plansza)[a][b] = -200;
            mines_left--; //zmienjszamy ilosc min po wstawieniu
        }
    }

    //zapisujemy pozostale miejsca na planszy
    for(int i=0; i<board.get_geometry(1); i++)
        for(int j=0; j<board.get_geometry(2); j++)
        {
            if((*plansza)[i][j] == -200) continue;
            else{
                int _mines = 0;
                
                //sprawdzamy pola wokol danego pola w poszukiwaniu min
                for(int k=i-1; k<i+2; k++)
                    for(int l=j-1; l<j+2; l++)
                    {   
                        //sprawdzamy warunki czy nie wyszlismy na zakres itp
                        if(k < 0 || l< 0) continue;
                        else if(k >= board.get_geometry(1) || l >= board.get_geometry(2)) continue;
                        else if(k==i && l==j) continue;
                        else if((*plansza)[k][l] == -200) _mines++;
                    }
                
                (*plansza)[i][j] -= (100 - _mines);
            }
        }
}

//wypisanie planszy
void Sapper::print_board()
{
    for(int i=0; i<plansza->get_m(); i++){
        for(int j=0; j<plansza->get_n(); j++)
        {
            //tu sprawdzamy czy pole jest odsloniete
            if((*plansza)[j][i]>=0) cout<<(*plansza)[j][i]<<" ";
            else cout<<"* ";
        }

        cout<<endl;
    }
    cout<<endl;
}

//operator wyboru pola
bool Sapper::operator()(int x, int y)
{
    //sprawdzamy zakres
    if(x < 0 || x > plansza->get_m()-1 || y < 0 || y > plansza->get_n()-1)
    {
        cout<<"out of range...\n\n\n\n";
        return true;
    }

    else if((*plansza)[x][y] >= 0)
    {
        // cout<<"place already chosen\n\n\n";
        return true;
    }

    else if((*plansza)[x][y] != -200) 
    {
        _poles_left--;
        (*plansza)[x][y] += 100;

        if(!_poles_left){ //tu sprawdzamy czy nie jest to ostatnie pole do odkrycia
            cout<<"Good job! You survived!\n";
            return false;
        }
        
        else return true;
    }

    else
    {
        cout<<"!!!   BOOOOM    !!!\n    Game Over \n\n";
        return false;
    }
}

//czesc destruktorowa
Sapper::~Sapper()
{
    delete plansza;
    plansza = nullptr;
}