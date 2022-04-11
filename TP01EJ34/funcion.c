#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void mostrarMatriz(int matriz[][TAM], int n){
    int i,j;
    for(i=0; i<n; i++){
        for(j=0;j<n;j++){
            printf(" %d", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void trasponerMatriz(int matriz[][TAM], int n){
    int i,j, aux;
    for(i=0; i<n; i++){
        for(j=i+1;j<n;j++){
            if(i != j){
                aux = matriz[i][j];
                matriz[i][j] = matriz[j][i];
                matriz[j][i] = aux;
            }
        }
    }
}
