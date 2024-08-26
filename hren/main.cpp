#include <stdio.h>
#include <math.h>

#include "function 2.h"

//-----------------------------------------------------------------------------------------------------начало main
int main()
{
    double a = 0, b = 0, c = 0;  // объевление корней и коэффициентов
    double x1 = 0, x2 = 0;
    int klass = 0;// количество пройденных тестов
    int tip = 0;

    printf("Enter the action you want: 1 - launching the program, 2 - test mode\n");

    int check_vvod = scanf("%d", &tip);

    while (check_vvod != 1) {                         // проверка ввода 1
            int symb = getchar();
            while (symb != '\n' && symb != EOF) {
            symb = getchar();

            }
            printf("Enter the action you want: 1 - launching the program, 2 - test mode\n");
            check_vvod = scanf("%d", & tip);
        }

    if (tip == 1){

        printf("Enter a, b, c: \n");

        int check = scanf("%lg %lg %lg", &a, &b, &c); // определитель сколько символов считалось



        while (check !=3) {                         // проверка ввода 2
            int symb = getchar();
            while (symb != '\n' && symb != EOF) {
            symb = getchar();

            }
            printf("Enter a, b, c: \n");
            check = scanf("%lg %lg %lg", &a, &b, &c);
        }
        int nRoots = SolveSquare(a, b, c, &x1, &x2);

        out_back(nRoots, x1, x2);// вывод корней
    }
    if (tip == 2)
        AllTests();



    return 0;
}
//----------------------------------------------------------------------------------------------конец    main
