#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#include "function.h"

int sravn(double srav){   // функция сравнения с нулём

    if (fabs(srav) < EPSILON){
        return true;
    }
    else {
        return false;
    }

}

int srav_chis(double num1, double num2){   // cравнение чисел вида double()

    if  (fabs(num1 - num2) < EPSILON){
        return true;
    }
    else{
        return false;
    }
}

