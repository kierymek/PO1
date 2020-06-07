#pragma once
#include <iostream>
#include "gene_sequence.h"
#include "virus.h"
#include <vector>

using namespace std;

//klasa koronawirusa dziedziczacego po wirusie
class CoronaVirus : public Virus
{
    //skladniki prywatne
    private:
    string host_name;
    
    public:
    CoronaVirus() : Virus() {}
    
    //konstruktor
    CoronaVirus(string virus_name, string host,  const std::vector< Nucleotide > seq): Virus(virus_name), host_name(host){
        set_RNA(seq);
    }
    
    //konstruktor kopiujacy
    CoronaVirus( CoronaVirus& K):Virus(K), host_name(K.host_name){
        K.replication();
    }
    
    //konstruktor przenoszacy
    CoronaVirus(CoronaVirus&& K):Virus(K), host_name(K.host_name) {}
        
    //zwraca nazwe zwierzecia hosta
    string get_animal_host()const{
        return host_name;    
    }
    
    //operator przypisania kopiujacego
    CoronaVirus& operator=( CoronaVirus& K){
        Virus::operator=(K);
        host_name = K.host_name;
        return *this;
    }
    
    //operator przypisania przenoszacego
    CoronaVirus& operator=(CoronaVirus&& K){
        Virus::operator=(K);
        host_name = K.host_name;
        return *this;
    }
    
};