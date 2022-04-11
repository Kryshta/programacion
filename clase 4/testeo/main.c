#include <stdio.h>
#include <stdlib.h>

void mostrarTrianInf(int[][3], int, int);

int main(){

    int matriz[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    mostrarTrianInf(matriz, 3, 3);

    printf("\nHello world!\n");
    return 0;
}

void mostrarTrianInf(int matriz[][3], int filas, int columnas){
        int i,j;

        for (i=0;i<filas; i++){
            for(j=0;j<columnas;j++){
                if (i>j)
                    printf("%d ", matriz[i][j]);
            }
        }
    }
