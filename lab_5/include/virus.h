#pragma once
#include <iostream>
#include "gene_sequence.h"
#include <vector>

using namespace std;

class Virus
{
    friend ostream& operator<<(ostream& o, const Virus& virus){
        return o;
    }
    //skladniki protected
    protected:
    string _name;
    int _age;
    GeneSeq* _seq;
    
    public:
    //czesc konstrutkorowa
    Virus(): _age(0), _seq(nullptr) {}//konstruktor domyslny
    Virus(string name) : _name(name), _age(0), _seq(nullptr) {}
    Virus( Virus&);
    Virus(Virus&&);
    
    //operatory przypisania
    Virus& operator=( Virus&);
    Virus& operator=(Virus&&);
    
    string get_name()const{
        return _name;
    }
    
    //metoda zwiekszajaca wiek wirusa po replikacji
    void replication(){
        _age++;    
    }
    
    //zwraca lancuch rna
    GeneSeq* get_RNA()const{
        return _seq;
    }
    
    void set_RNA( const std::vector< Nucleotide > seq ){
        _seq = new GeneSeq(seq);
    }
    
    //zwraca wiek
    int get_age()const{
        return _age;
    }
    
    ~Virus(){
        delete _seq;
    }
};