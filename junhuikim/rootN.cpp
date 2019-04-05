#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

// This calculates root N.
// After starting this program, put the N you want.
int main(void) {
    double N;

    double start, mid, end;

    double result;

    scanf("%lf", &N);

    start = 0;
    end = N;

    mid = (start + end) / 2;

    for (int i = 0; i < 100; i++) {
        result = mid * mid;

        if (result == N) {
            break;
        }

        if (result > N) {
            end = mid;
        }

        if (result < N) {
            start = mid;
        }

        mid = (start + end) / 2;
    }

    printf("%lf", mid);
    return 0;
}