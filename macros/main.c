#include <stdio.h>
#include <stdlib.h>
#define PARTE_ENTERA(X) (int)(X)
#define PARTE_DECIMAL(X) (X)-PARTE_ENTERA(X)
#define REDONDEO(X) PARTE_DECIMAL>0.5?PARTE_ENTERA(X+1):PARTE_ENTERA(X)
//#define
//abs mayor menor es_par es_impar es_letra es_nro es_blanco es_mayus es_minus a_mayus a_minus es_vocal



int main()
{
    printf("%d \n", PARTE_ENTERA(5.05));
    printf("%f \n", PARTE_DECIMAL(5.05));

    return 0;

}

