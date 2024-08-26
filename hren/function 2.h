#include <stdio.h>
#include <math.h>

#define INF_ROOTS -1
#define NO_ROOTS   0
#define ONE_ROOT   1
#define TWO_ROOTS  2
#define EPSILON    0.0001
#define NO         0

#ifndef PEREMEN
#define PEREMEN
struct Peremen{  //-----------------------------------���������
    double a, b, c;
    double x1expect, x2expect;
    int nRootsexpect;
};
#endif

void AllTests();// ���������� �����

int srav_chis(double chisl1, double chis2); // c�������� ����� ���� double()

int  Check_eqation(struct Peremen *data);// �������� ���������

void out_back(int s, double x1, double x2); // ������� ������

int sravn(double s); // ������� ��������� � ����

int SolveSquare(double a, double b, double c, double *x1, double *x2); //  ������� �������� ������

//----------------------------------------------------------------------------------------------------------------
