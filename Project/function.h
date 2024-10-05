#include <stdio.h>
#include <math.h>

#define INF_ROOTS -1
#define NO_ROOTS   0
#define ONE_ROOT   1
#define TWO_ROOTS  2
#define EPSILON    0.0001
#define NO         0

//#ifndef PEREMEN
//#define PEREMEN
struct Peremen{  //-----------------------------------структура
    double a, b, c;
    double x1expect, x2expect;
    int nRootsexpect;
};
//#endif

void AllTests();// записанные тесты

int srav_chis(double num1, double num2); // cравнение чисел вида double()

int  Check_eqation(struct Peremen *data);// проверка уравнений

void out_back(int s, double x1, double x2); // функция вывода

int sravn(double s); // функция сравнения с нулём

int SolveSquare(double a, double b, double c, double *x1, double *x2); //  функция подсчёта корней

//----------------------------------------------------------------------------------------------------------------
