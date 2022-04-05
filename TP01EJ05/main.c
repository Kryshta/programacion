#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, n1=1, n2=1, n3;
    printf("Programa para determinar si un numero pertenece a la secuencia de Fibonacci \n");

    printf("Ingrese un numero entero: ");
    scanf("%d", &x);

    while(n2<=x){
        if (x==n2){
            printf("%d es un numero de Fibonacci", x);
            break;
        }
        else{
            n3=n1+n2;
            n1=n2;
            n2=n3;
        }
    }

    if (n2!=x)
        printf("%d no es un numero de Fibonacci", x);

    return 0;
}
