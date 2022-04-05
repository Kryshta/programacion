#include <stdio.h>
#include <stdlib.h>
#include "../TP01EJ01/header.h"

int i, nro;
int factorial(int nro){
    if(nro==0){
            return 1;
        }

        else{
            for(i=nro;i>1;i--){
                nro*=(i-1);
            }

            return nro;
        }
}
