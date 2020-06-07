#include "vector.h"

using namespace MyStuff;

vector::vector(int x)
{
    cnt = x;
    ptr = new int[cnt];
    for(int i=0; i<cnt; i++)
        ptr[i] = 0;
}

void vector::push_back(int m)
{
    if(!cnt)
    {
        ptr = new int[1];
        *ptr = m;
    }
    else
    {
        int* tmp = new int[cnt+1];
        for(int i=0; i<cnt; i++)
            tmp[i] = ptr[i]; 
        delete [] ptr;
        ptr = tmp;
        ptr[cnt] = m;
    }
    cnt++;
}

void vector::pop_back(int n)
{
    int* tmp = new int[cnt-n];
    for(int i=0; i<cnt-n; i++)
        tmp[i] = ptr[i];
    delete [] ptr;
    ptr = tmp;
    cnt -= n;
}

int vector::size() const
{
    return cnt;
}

int& vector::operator[](int n)
{
    return ptr[n];
}

vector& vector::operator=(const vector& K)
{
    puts("---copy operator---");
    if(ptr)delete [] ptr;
    cnt = K.cnt;
    ptr = new int[K.cnt];
    for(int i=0; i<cnt; i++)
        ptr[i] = K.ptr[i];
    return *this;
}

std::ostream& operator<<(std::ostream& o, const vector& K)
{
    for(int i=0; i<K.cnt; i++)
        o<<K.ptr[i]<<" ";
    // o<<"\tsize: "<<K.cnt;
    return o;
}

vector::~vector()
{
    if(ptr) delete [] ptr;
    ptr = nullptr;
}

vector::vector(const vector& K)
{
    puts("---copy constructor---");
    cnt = K.cnt;

    ptr = new int[cnt];
    
    for(int i=0; i<cnt; i++)
        ptr[i] = K.ptr[i];
}

vector& vector::operator=(vector && K)
{
    puts("---move operator---");
    delete [] ptr;
    cnt = K.cnt;
    ptr = std::move(K.ptr);
    return *this;
}

vector::vector(vector&& K)
{
    puts("---move constructor---");
    cnt = K.cnt;
    ptr = std::move(K.ptr);
}

vector vector::operator+(vector B)
{
    vector A(*this);

    for(int i=0; i<cnt; i++)
    {
        if(i==B.size()) break;
        A.ptr[i] += B.ptr[i];
        if(i == cnt-1 && i < B.size()-1)
        {
            for(int j=i+1; j<B.size(); j++)
                A.push_back(B.ptr[j]);
        }
    }
    return A;
}