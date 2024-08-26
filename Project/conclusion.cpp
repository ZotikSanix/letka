#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#include "function.h"

void out_back(int nRoots, double x1, double x2){  // функция вывода

    switch(nRoots) {
        case NO_ROOTS:
            printf("No roots\n");
            break;
        case ONE_ROOT:
            printf("x = %lg\n", x1);
            break;
        case TWO_ROOTS:
            printf("x1 = %lg x2 = %lg\n", x1, x2);
            break;
        case INF_ROOTS:
            printf("Any number\n");
            break;
        default: printf("Error/n");
            break;
    }
}
