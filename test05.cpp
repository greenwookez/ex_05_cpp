#include "intarray.hpp"
#include <stdio.h>
#include <stdlib.h>

int main() {
    IntArray a(2,6,15);
    a + 1;
    2 + a;
    printf("Size of a is %d",a.Size());
    return 0;
}