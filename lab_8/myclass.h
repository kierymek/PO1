#pragma once
#include <iostream>
#include "weapon.h"
#include "terrorist.h"

using namespace std;

//klasa terrorist1 dla obywatela katshynsky, posaia bron noz i karabin
class Terrorist1 : public Terrorist, public Knife, public Rifle
{
    //wykorzystywanie konstruktora klasy bazowyej
    using Terrorist::Terrorist;
    
    public:
    //wypisanie, przekazujemy wektor z nazwami broni
    void what()const override{
        Terrorist::print({Knife::name,Rifle::name});
    }
    
    //atak terrorysty, wybieramy z ktorych metod chcemy skorzystac
    void attack()const override{
        Knife::cut();
        Rifle::shoot();
    }
};

//klasa terrorist1 dla obywatela mason, posaia bron topor i bombe
class Terrorist2: public Terrorist, public Axe, public Bomb
{
    //wykorzystywanie konstruktora klasy bazowyej
    using Terrorist::Terrorist;
    
    public:
    //wypisanie, przekazujemy wektor z nazwami broni
    void what()const override{
        Terrorist::print({Axe::name,Bomb::name});
    }
    
    //atak terrorysty, wybieramy z ktorych metod chcemy skorzystac
    void attack()const override{
        Axe::chop();
        Bomb::explode();
    }
};

//klasa proxy przechowujaca wskaznik do obiektu terrorysty, ktora dziala z dowolnym terrorysta
class Safety: public Terrorist
{
    public:
    //konstruktor dla zwyklego wskaznika
    Safety(Terrorist* ptr): _ptr{ptr}, safe{false} {} 
    //konstruktor dla uniqe_ptr, pobieramy jego adres
    Safety(const unique_ptr<Terrorist>& ptr): _ptr{ptr.get()}, safe{false}{} 
    
    //w danej metodzie wskaznik wywoluje wlasne zaimplementowane metody
    void what()const override{
        _ptr->what();
    }
    
     //w danej metodzie wskaznik wywoluje wlasne zaimplementowane metody
    void attack()const override{
        if(!safe)_ptr->attack();
    }
    
    //unieszkodliwiamy zloczynce, ustawiajac flage, ktora blokuje atak
    void apply_safety_measures(){
        safe = true;
    }
    
    private:
    Terrorist *_ptr;
    bool safe; //flaga
};