#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(void) {
    int A, B, V;

    scanf("%d %d %d", &A, &B, &V);

    int todo = V-A;
    int dV = A-B;

    int day = 1;

    if(todo % dV == 0) {
        day += todo/dV;
    } else {
        day += todo/dV + 1;

    }

    printf("%d", day);
}