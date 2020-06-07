#pragma once
#include "organism.h"
#include "gene_utils.h"


//klasa protonoza
class Protozoa : public Organism
{
    public:
    Protozoa(string name, DNA dna){
        _name = name;
        _dna = dna;
    }
    //rozmnazanie ze sprawdzaniem gatunkow
     Organism* reproduce(Organism* K) override{
        if(K->get_name() != get_name()) { 
            cout<<"reproduce: mismatch species"<<endl;
            return 0;}
        else return new Bacteria(_name, DNA(_dna[0], K->get_dna()[1]));
    }
};


