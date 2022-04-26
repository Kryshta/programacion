#include <stdio.h>
#include <stdlib.h>

float promedio = calcularPromedio(int matriz[cantidad], int cantidad, float* promedio);

int main()
{
    printf("Ingrese cantidad de elementos a almacenar:");
    scanf("%d", &cantidad);

    int matriz[cantidad];
    int i;
    float* promedio;

    for (i=0;i<cantidad; i++, matriz++){
        printf("Ingrese elemento %d", i+1);
        scanf("%d", &matriz);
    }

    matriz-=i;

    promedio = calcularPromedio(matriz, cantidad, &promedio);


    return 0;
}

float promedio = calcularPromedio(int matriz[cantidad], int cantidad, float* promedio){
    for
}

