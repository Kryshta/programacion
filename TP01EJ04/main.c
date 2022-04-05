#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    float tol, rparcial=1, rparcial2, rdiferencia=0;

    printf("Calculo de raiz cuadrada de numeros positivos\n");

    printf("Ingrese un numero positivo: ");
    scanf("%d", &a);

    printf("Ingrese un numero de tolerancia: ");
    scanf("%f", &tol);

    do{
        rparcial2 = (rparcial+(a/rparcial)) * 0.5;
        rdiferencia=rparcial2-rparcial;
        if(rdiferencia<0)
            rdiferencia*=-1;
        rparcial=rparcial2;
    } while(rdiferencia>tol);

    printf("El resultado es %f", rparcial2);

    return 0;
}
