#pragma once
#include <iostream>
#include "dna.h"
#include "virus.h"

using namespace std;

class Organism
{
    protected:
    string _name;
    DNA _dna;

    public:
    Organism() { }

    string get_name()const{
        return _name;
    }

    DNA get_dna()const{
        return _dna;
    }

    virtual Organism* reproduce(Organism* K = 0) = 0;
    virtual ~Organism() = default;
    void operator<<(const Virus& K){
        if(!rand()%2){
            int k = 0;
            int pos = rand()%_dna[0].size();
            for(int i=0;  i< (int)K.get_RNA()->get_sequence().size(); i++)
                _dna.chain[(pos+i)%_dna[0].size()] = K.get_RNA()->get_sequence()[k++];
        }
        else
        {
            int k = 0;
            int pos = rand()%_dna[1].size();
            for(int i=0; i< (int) K.get_RNA()->get_sequence().size(); i++)
                _dna.chain2[(pos+i)%_dna[1].size()] = K.get_RNA()->get_sequence()[k++];
        }
    }
};