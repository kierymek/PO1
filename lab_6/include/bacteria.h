#pragma once
#include "organism.h"
#include "gene_utils.h"

//klasa bakterii
class Bacteria : public Organism
{
    public:
    Bacteria() : Organism() {}
    Bacteria(string name, DNA dna){
        _name = name;
        _dna = dna;
    }

    //reprodukcja bakterii
    Organism* reproduce(Organism* K)override{   
        return new Bacteria(_name , mutation(_dna));
    }
        

};