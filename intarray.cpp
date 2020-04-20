#include "intarray.hpp"
#include <stdlib.h>

IntArray :: IntArray() {
    low_index = 1;
    high_index = 0;
};

IntArray :: IntArray(int lb) {
    low_index = lb;
    high_index = lb - 1;
};

IntArray :: IntArray(IntArray &_array) : IntList(_array) {
    low_index = _array.low_index;
    high_index = _array.high_index;
};

int * IntArray :: AddLeft(int elem) {
    low_index--;
    return IntList :: AddLeft(elem);
};

int * IntArray :: AddRight(int elem) {
    high_index++;
    return IntList :: AddRight(elem);
};

IntArray :: IntArray(int lb, int cnt, int val) {
    int i;
    low_index = lb;
    high_index = lb - 1;
    for (i = 1; i <= cnt; i++) {
        AddRight(val);
    };
};

int & IntArray :: operator[] (int index) { // Q: Index error
    IntDequeElement *tmp;
    int i;
    tmp = GoToLeft();
    for (i = low_index; i < index; i++) {
        tmp = tmp -> GetNext();
    };
    return tmp -> GetElement();
};


int * IntArray :: operator --() {
    int *tmp = IntList :: operator -- ();
    if (!tmp) {
        low_index = 1;
        high_index = 0;
        return tmp;
    } else {
        low_index++;
    }
    return tmp;
};

int * IntArray :: operator --(int nothing) {
    int *tmp = IntList :: operator -- (0);
    if (!tmp) {
        low_index = 1;
        high_index = 0;
        return tmp;
    } else {
        high_index--;
    }
    return tmp;
};

IntArray & IntArray :: operator =(IntArray &_array) {
    low_index = _array.low_index;
    high_index = _array.high_index;
    IntList :: operator = (_array);
    return *this;
};