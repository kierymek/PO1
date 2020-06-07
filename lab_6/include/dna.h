#pragma once
#include <iostream>
#include "gene_sequence.h"
#include <vector>

using namespace std;
class Organism;

//klasa dna
class DNA : public GeneSeq
{
    friend class Organism;

    //operator wypisywania dla dna
    friend ostream& operator<<(ostream& o, const DNA& dna){
        
        //pierwsza nic
    for(auto v : dna.get_sequence())
        o<<static_cast<char>(v)<<" ";
    
    o<<"\n";
    
    //wiazania
    for(int i=0; i<(int)dna.get_sequence().size(); i++)
        o<<"| ";
    
    o<<"\n";
    
    //druga nic
    for(auto v : dna.chain2)
        o<<static_cast<char>(v)<<" ";
        
    o<<"\n";
    
    return o;
}
    
    public:

    DNA() { }
    
    //konstruktor tworzacy dna z 2 dnici nukleotydow
    DNA(const GeneSeq& A, const GeneSeq& B) : GeneSeq(A.get_sequence()){
        chain2 = B.get_sequence();
    }

    DNA(const DNA& K):  GeneSeq(K.get_sequence()){
        chain2 = K.get_sequence();
    }
    
    std::vector<Nucleotide> operator[](int n)const{
        switch (n)
        {
        case 0: return get_sequence();
             break;
         
         case 1: return chain2;
         default:
         return get_sequence();
             break;
         }
     }

    std::vector<Nucleotide> operator[](int n){
        switch (n)
        {
        case 0: return get_sequence();
             break;
         
         case 1: return chain2;
         default:
         return get_sequence();
             break;
         }
     }

    std::vector<Nucleotide> get_chain(int n)const{
        return this->operator[](n);
    }

    private:
    std::vector< Nucleotide > chain2;
    
};