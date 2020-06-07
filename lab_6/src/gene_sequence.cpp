#include "gene_sequence.h"

//operator wypisaywania dla lancuchow nukleotydow
std::ostream& operator<<( std::ostream& out, const GeneSeq& seq_)
{
    for(auto v : seq_.chain)
        out<<static_cast<char>(v)<<" ";
    
    out<<"\n";
    
    return out;
}