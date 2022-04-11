#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int esMatrizDiagonal(int matriz[][TAM], int n){
    int i,j;
    for (i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i!=j && matriz[i][j]!=0)
                return 0;
        }
    }
    return 1;
}
