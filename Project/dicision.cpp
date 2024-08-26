#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#include "function 2.h"

int SolveSquare(double a, double b, double c, double *x1, double *x2) { //  функция подсчёта корней
    if (sravn(a) == true) {
        if (sravn(b) == true) {
            return NO_ROOTS;
        }

        else {
            *x1 = -c/b;
            return ONE_ROOT;
        }
    }
    else {
        double dis = b*b - 4*a*c;
        if (sravn(dis) == true) {
            *x1 = *x2 = -b/(2*a);
            return ONE_ROOT;
        }
        if (dis<0) {
            return NO_ROOTS;
        }

        if (dis>0) {
            *x1 = (-b + sqrt(dis)) / (2*a);
            *x2 = (-b - sqrt(dis)) / (2*a);
            return TWO_ROOTS;
        }
    }
}
