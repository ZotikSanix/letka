#include <stdio.h>
#include <math.h>

#include "function.h"

//-----------------------------------------------------------------------------------------------------������ main
int main()
{
    double a = 0, b = 0, c = 0;  // ���������� ������ � �������������
    double x1 = 0, x2 = 0;
    int klass = 0;               // ���������� ���������� ������
    int var_programm = 0;

    printf("Enter the action you want: 1 - launching the program, 2 - test mode\n");  // ������ �� ������ ���������

    int check_vvod = scanf("%d", & var_programm);               // ������������ ������� �������� ���������

    while (check_vvod != 1) {                         // �������� ����� �������
            int symb = getchar();
            while (symb != '\n' && symb != EOF) {
            symb = getchar();

            }
            printf("Enter the action you want: 1 - launching the program, 2 - test mode\n");
            check_vvod = scanf("%d", & var_programm);
        }

    if (var_programm == 1){                                    // ���� ��������� ���������

        printf("Enter a, b, c: \n");

        int check = scanf("%lg %lg %lg", &a, &b, &c); // ������������ ������� �������� ���������

        while (check !=3) {                           // �������� ����� 2
            int symb = getchar();
            while (symb != '\n' && symb != EOF) {
            symb = getchar();

            }
            printf("Enter a, b, c: \n");
            check = scanf("%lg %lg %lg", &a, &b, &c);
        }
        int nRoots = SolveSquare(a, b, c, &x1, &x2);

        out_back(nRoots, x1, x2);                    // ����� ������
    }
    if (var_programm == 2)                                    // ���� ��������� �����
        AllTests();



    return 0;
}
//----------------------------------------------------------------------------------------------�����    main
