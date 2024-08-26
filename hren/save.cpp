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
int sravn(double srav){   // функция сравнения с нулём

      if ( fabs(srav) < EPSILON ){
            return true;
      }
      else {
            return false;
      }

}

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

int  Check_eqation(struct Peremen *data){   // проверка уравнений
        double x1 = 0, x2 = 0;
        int nRoots = SolveSquare(data->a, data->b,data->c, &x1, &x2);
        if ((nRoots != data->nRootsexpect) || srav_chis(x1, data->x1expect) == false || srav_chis(x2, data->x2expect) == false){
                printf("Error Test a = %lg, b = %lg, c = %lg, x1 = %lg, x2 = %lg, nRoots = %d\n"
                "Expected: x1 = %lg, x2 = %lg, nRoots = %d\n", data->a, data->b, data->c, x1, x2, nRoots, data->x1expect, data->x2expect, data->nRootsexpect);
                return 0;
        }
        else {
           return 1;
        }

}

int srav_chis(double chis1, double chis2){   // cравнение чисел вида double()

    if  (fabs(chis1 - chis2) < EPSILON){
            return true;
    }
    else{
        return false;
    }
}

void AllTests(){  // записанные тесты
    int kol_vo = 0;
    const int nTests = 5;
    struct Peremen data[nTests] = {{.a = 1,   .b = 2,   .c = -3, .x1expect = 1,         .x2expect = -3,        .nRootsexpect = 2},// два корня
                                   {.a = 2,   .b = 3,   .c = -4, .x1expect = 0.850781,  .x2expect = -2.35078,  .nRootsexpect = 2},// два дробных корня
                                   {.a = 5.5, .b = 6.2, .c = 1,  .x1expect = -0.195034, .x2expect = -0.932239, .nRootsexpect = 2},// два дробных корня с дробными коэффициентами
                                   {.a = 1,   .b = 0,   .c = 0,  .x1expect = 0,         .x2expect = NO,        .nRootsexpect = 1},// один корень
                                   {.a = 1,   .b = 2,   .c = 3,  .x1expect = NO,        .x2expect = NO,        .nRootsexpect = 0}}; // нет корней

    for (int i = 0; i < nTests; i++){
      if (Check_eqation(&data[i]) == 1){
        kol_vo++;
      }
    }
    printf("Completed tests %d/5", kol_vo);

}

