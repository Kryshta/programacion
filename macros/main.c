#include <stdio.h>
#include <stdlib.h>
#define PARTE_ENTERA(X) (int)(X)
#define PARTE_DECIMAL(X) (X)-PARTE_ENTERA(X)
#define REDONDEO(X) PARTE_DECIMAL>0.5?PARTE_ENTERA(X+1):PARTE_ENTERA(X)



int main()
{
    printf("%d \n", PARTE_ENTERA(5.05));
    printf("%f \n", PARTE_DECIMAL(5.05));

    return 0;

}

