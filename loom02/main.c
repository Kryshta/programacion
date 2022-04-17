#include <stdio.h>
#include <stdlib.h>
#define TAM1 7
#define TAM2 7

int sonDisjuntos (int vectorM[TAM1], int vectorN[TAM2], int sizeM, int sizeN);

int main()
{
    int vectorM[]={1,2,3,4,5,6,7};
    int vectorN[]={8,8,8,8,8,8,8};

    printf("%d", sonDisjuntos(vectorM, vectorN, TAM1, TAM2));

    return 0;
}

int sonDisjuntos (int vectorM[TAM1], int vectorN[TAM2], int sizeM, int sizeN){
    int indiceM, indiceN=0;
    for(indiceN=0; indiceN<sizeN; indiceN++){
        for(indiceM=0; indiceM<sizeM; indiceM++){
        if(*vectorM==*vectorN)
            return 0;
        vectorM++;
        }
        vectorM-=indiceM; //devuelvo el vector M a su posicion inicial
        vectorN++;
    }
    return 1;
}
