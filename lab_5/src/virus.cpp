#include "virus.h"

//konstruktory kopiujace i przenoszace
Virus::Virus( Virus& K): _name(K._name), _age(0), _seq(new GeneSeq(K._seq->get_sequence()))
{
    K.replication();
}

Virus::Virus(Virus&& K):_name(move(K._name)), _age(0), _seq(move(K._seq)) {
    K._seq = nullptr;
}
    
//operator przypisania kopiujacego
Virus& Virus::operator=( Virus& K)
{
    if(_seq) delete _seq;
    _name = K._name;
    _age = 0;
    _seq = new GeneSeq(K._seq->get_sequence());
    K.replication();
    return *this;
}

//operator przypisania przenoszacego
Virus& Virus::operator=(Virus&& K)
{
    if(_seq) delete _seq;
    swap(_name, K._name);
    _age = 0;
    swap(_seq, K._seq);
    K._seq = nullptr;
    return *this;
}