#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#include "function 2.h"

int sravn(double srav){   // функция сравнения с нулём

      if ( fabs(srav) < EPSILON ){
            return true;
      }
      else {
            return false;
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
