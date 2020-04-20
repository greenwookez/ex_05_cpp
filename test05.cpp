#include "intarray.hpp"
#include <stdio.h>
#include <stdlib.h>
void print_arr(IntArray & _array, const char * name);
void print_low(IntArray & _array, const char * name);
void print_high(IntArray & _array, const char * name);
void print_arr_plus_int(IntArray & _array, const char * name, int value);
void print_int_plus_arr(IntArray & _array, const char * name, int value);
void print_prefix(IntArray & _array, const char * name);
void print_postfix(IntArray & _array, const char * name);
void print_by_index(IntArray & _array, const char * name, int value);


int main() {
    IntArray parray01,parray02;
    
    print_low(parray01,"parray01");
    print_high(parray01,"parray01");
    print_arr_plus_int(parray01, "parray01", 3);
    print_int_plus_arr(parray01, "parray01", 18);
    print_arr_plus_int(parray01, "parray01", 5);
    print_int_plus_arr(parray01, "parray01", 9);
    print_arr_plus_int(parray01, "parray01", 12);
    print_int_plus_arr(parray01, "parray01", 14);
    print_by_index(parray01, "parray01", 1);
    print_by_index(parray01, "parray01", -12);
    int tmp_int = 666;
    int &tmp_int_ref = tmp_int;
    parray01[2] = tmp_int_ref; printf("parray01[2] = %d == OK\n",tmp_int_ref);
    parray01[-1] = 666; printf("parray01[-1] = 666 == OK\n");
    print_by_index(parray01, "parray01", 2);
    print_by_index(parray01, "parray01", -1);

    print_prefix(parray01, "parray01");
    print_postfix(parray01, "parray01");
    print_prefix(parray01, "parray01");
    print_prefix(parray01, "parray01");
    print_postfix(parray01, "parray01");
    print_prefix(parray01, "parray01");
    print_prefix(parray01, "parray01");
    print_postfix(parray01, "parray01");


    print_int_plus_arr(parray02, "parray02", rand() % 150);
    print_int_plus_arr(parray02, "parray02", rand() % 150);
    print_int_plus_arr(parray02, "parray02", rand() % 150);
    print_int_plus_arr(parray02, "parray02", rand() % 150);
    print_arr_plus_int(parray02, "parray02", rand() % 150);
    print_int_plus_arr(parray02, "parray02", rand() % 150);
    print_arr_plus_int(parray02, "parray02", rand() % 150);
    print_int_plus_arr(parray02, "parray02", rand() % 150);
    print_arr_plus_int(parray02, "parray02", rand() % 150);
    print_int_plus_arr(parray02, "parray02", rand() % 150);
    print_arr_plus_int(parray02, "parray02", rand() % 150);
    print_int_plus_arr(parray02, "parray02", rand() % 150);
    print_arr_plus_int(parray02, "parray02", rand() % 150);
    print_arr_plus_int(parray02, "parray02", rand() % 150);
    print_arr_plus_int(parray02, "parray02", rand() % 150);
    print_low(parray02,"parray02");
    print_high(parray02,"parray02");
    const int constvalue = 0;
    parray02[2] = constvalue; printf("parray02[2] = %d == OK\n",constvalue); print_arr(parray02, "parray02");
    parray02[-1] = (1 + 1 - 1) * 1/1; printf("parray02[-1] = 1 == OK\n"); print_arr(parray02, "parray02");


    print_postfix(parray02, "parray02");
    print_postfix(parray02, "parray02");
    print_postfix(parray02, "parray02");
    print_postfix(parray02, "parray02");
    print_prefix(parray02, "parray02");
    print_prefix(parray02, "parray02");
    print_prefix(parray02, "parray02");
    print_postfix(parray02, "parray02");
    print_prefix(parray02, "parray02");
    print_prefix(parray02, "parray02");
    print_postfix(parray02, "parray02");
    print_prefix(parray02, "parray02");
    print_prefix(parray02, "parray02");
    print_postfix(parray02, "parray02");
    print_prefix(parray02, "parray02");
    print_prefix(parray02, "parray02");
    print_postfix(parray02, "parray02");
    print_prefix(parray02, "parray02");

    print_arr_plus_int(parray01, "parray01", 3);
    print_int_plus_arr(parray01, "parray01", 18);
    print_arr_plus_int(parray01, "parray01", 5);
    print_int_plus_arr(parray01, "parray01", 9);
    print_arr_plus_int(parray01, "parray01", 12);
    print_int_plus_arr(parray01, "parray01", 14);

    IntArray parray03 = parray01; printf("IntArray parray03 = parray01\n"); print_arr(parray03, "parray03");
    

    print_postfix(parray01, "parray01");
    print_prefix(parray01, "parray01");
    print_prefix(parray01, "parray01");
    print_postfix(parray01, "parray01");
    print_prefix(parray01, "parray01");
    print_prefix(parray01, "parray01");
    print_postfix(parray01, "parray01");
    print_prefix(parray01, "parray01");

    print_postfix(parray03, "parray03");
    print_prefix(parray03, "parray03");
    print_prefix(parray03, "parray03");
    print_postfix(parray03, "parray03");
    print_prefix(parray03, "parray03");
    print_prefix(parray03, "parray03");
    print_postfix(parray03, "parray03");
    print_prefix(parray03, "parray03");

    print_arr_plus_int(parray01, "parray01", 25);
    parray02 = parray03 = parray01;
    print_arr(parray01, "parray01");
    print_arr(parray02, "parray02");
    print_arr(parray03, "parray03");

    IntArray parray04(5);
    print_arr(parray04,"parray04");
    print_arr_plus_int(parray04, "parray04", 14);
    print_arr(parray04,"parray04");

    IntArray parray05(216,16,33);
    print_arr(parray05,"parray05");
    return 0;
}

void print_low(IntArray & _array, const char * name) {
    printf("%s.Low() ==",name);
    if (_array.Low() > _array.High()) {
        printf(" ArrayIsEmpty\n");
    } else {
        printf(" %d\n",_array.Low());
    }
    print_arr(_array, name);
};

void print_high(IntArray & _array, const char * name) {
    printf("%s.High() ==",name);
    if (_array.Low() > _array.High()) {
        printf(" ArrayIsEmpty\n");
    } else {
        printf(" %d\n",_array.High());
    }
    print_arr(_array, name);
};

void print_arr_plus_int(IntArray & _array, const char * name, int value) {
    int *tmp = _array + value;
    printf("%s + %d == ", name, value);
    if (!tmp) {
        printf("NoMemory\n");
    } else {
        printf("OK\n");
    }
    print_arr(_array, name);
};

void print_int_plus_arr(IntArray & _array, const char * name, int value) {
    int *tmp = value + _array;
    printf("%d + %s == ", value, name);
    if (!tmp) {
        printf("NoMemory\n");
    } else {
        printf("OK\n");
    }
    print_arr(_array, name);
};

void print_by_index(IntArray & _array, const char * name, int value) {
    if (value > _array.High() || value < _array.Low()) {
        printf("%s[%d] == WrongIndex\n", name, value);
        print_arr(_array, name);
        return;
    }
    printf("%s[%d] == %d\n", name, value, _array[value]);
    print_arr(_array, name);
};

void print_prefix(IntArray & _array, const char * name) {
    int *tmp = --_array;
    printf("--%s == ",name);
    if (!tmp) {
        printf("ArrayIsEmpty\n");
    } else {
        printf("%d\n",*tmp);
    }
    print_arr(_array, name);
};

void print_postfix(IntArray & _array, const char * name) {
    int *tmp = _array--;
    printf("%s-- == ",name);
    if (!tmp) {
        printf("ArrayIsEmpty\n");
    } else {
        printf("%d\n",*tmp);
    }
    print_arr(_array, name);
};

void print_arr(IntArray & _array, const char * name) {
    int i;
    if (_array.Low() > _array.High()) {
        printf("[print_arr]: Array %s is empty.\n",name);
        printf("++\n||\n++\n");
    } else {
        printf("IntArray %s:\n",name);
        for (i = 1; i <= _array.Size(); i++) {
            printf("+-----");
        };
        printf("+\n");
        IntDequeElement *tmp = _array.GoToLeft();
        for (i = 1; i <= _array.Size(); i++) {
            printf("|%5d",tmp -> GetElement());
            tmp = tmp -> GetNext();
        };
        printf("|\n");
        for (i = 1; i <= _array.Size(); i++) {
            printf("+-----");
        };
        printf("+\n");
        for (i = _array.Low(); i <= _array.High(); i++) {
            printf(" %5d",i);
        };
        printf(" \n");
    };

    printf(" \n");
};