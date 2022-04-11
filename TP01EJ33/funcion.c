#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int determinarSimetria(int matriz[][TAM], int n){
    int i,j;

    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(matriz[i][j] != matriz[j][i])
                return 0;
        }
    }
    return 1;
}
