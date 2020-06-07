#include <iostream>
#include <vector>
#include <map>
#include <utility>
#include <math.h>

using namespace std;

template <int n, const double* x1, const double* x2>
struct IntegralXn
{
    static constexpr double value{n<0 ? 0 : pow(*x2, n+1)/(n+1) - pow(*x1, n+1)/(n+1)};
};

template <typename T>
class GroupZn
{
    public:
    GroupZn(const vector<T>& vec): _vec{vec}{
        for(int i=0; i<(int)vec.size(); i++)
            _map[vec[i]] = i;
    }
    T operator()(const T& a, const T& b){
        if(!_map[a]) return b;
        else if(!_map[b]) return a;
        else if((_map[a]+_map[b]) == (int)_map.size()) return _vec[0];
        else if((_map[a]+_map[b]) > (int)_map.size()) return _vec[(_map[a]+_map[b])%_map.size()];
        else return _vec[(_map[a]+_map[b])];
    }

    private:
    map<T, int> _map;
    vector<T> _vec;
};
