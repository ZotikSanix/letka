#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#include "function.h"

int Check_eqation(struct Peremen *data){   // проверка уравнений
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
