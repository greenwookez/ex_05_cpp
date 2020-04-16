#include "intarray.hpp"

IntArray :: IntArray() {
    low_index = 1;
    high_index = 0;
};

IntArray :: IntArray(int lb) {
    low_index = lb;
    high_index = lb - 1;
};

IntArray :: IntArray(int lb, int cnt, int val) {
    int i;
    low_index = lb;
    high_index = lb - 1;
    for (i = 1; i <= cnt; i++) {
        AddRight(val);
    };
};

int * IntArray :: AddLeft(int elem) {
    IntDequeElement *tmp;
    int *result;
    result = IntList :: AddLeft(elem);
    tmp = GoToLeft();
    tmp -> SetIndex(low_index - 1);
    low_index = low_index - 1;
    return result;
};

int * IntArray :: AddRight(int elem) {
    IntDequeElement *tmp;
    int *result;
    result = IntList :: AddRight(elem);
    tmp = GoToRight();
    tmp -> SetIndex(high_index + 1);
    high_index = high_index + 1;
    return result;
};

IntDequeElement * IntArray :: findElement(int index) {
    IntDequeElement *tmp;
    tmp = GoToLeft();
    while (tmp) {
        if (tmp -> GetIndex() == index) {
            return tmp;
        };
        tmp = tmp -> GetNext();
    };
};

int & IntArray :: operator[] (int index) {
    IntDequeElement *tmp;
    tmp = GoToLeft();
    while (tmp) {
        if (tmp -> GetIndex() == index) {
            break;
        };
        tmp = tmp -> GetNext();
    };
    int value = tmp -> GetElement();

    return &value;
};