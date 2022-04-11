#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int sumatoriaPrincipal(int matriz[][TAM], int n){
    int i, acumuladorP=0;
        for(i=0;i<n;i++){
            acumuladorP+=matriz[i][i];
        }
        return acumuladorP;
}

int sumatoriaSecundaria(int matriz[][TAM], int n){
    int i, j, acumuladorS=0;
        for (i=0; i<n; i++){
            for(j=0;j<n;j++){
                if(i+j==n-1)
                    acumuladorS+=matriz[i][j];
            }
        }
        return acumuladorS;
}
