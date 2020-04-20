#include "intlist.hpp"

class IntArray : public IntList {
    int low_index;
    int high_index;
    
    protected:
    int * AddLeft(int elem);
    int * AddRight(int elem);

    public:
    IntArray();
    IntArray(int lb);
    IntArray(IntArray &_array);
    IntArray(int lb, int cnt, int val);

    int Low() { return low_index; };
    int High() { return high_index; };
    int Size() { return high_index - low_index + 1; }; // returns amount of elements

    int & operator[] (int index); // overloads a[i] = ...
    int * operator --();
    int * operator --(int nothing);
    IntArray & operator =(IntArray & _array);
};