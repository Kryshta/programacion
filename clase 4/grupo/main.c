#include<stdio.h>
#include<stdlib.h>
#define FILAS 3
#define COL 3
void mostrarDprincipal(int matriz[][COL],int filas, int columnas);
void mostrarDsecundaria(int matriz[][COL],int filas, int columnas);
void mostrarTrianSup(int matriz[][COL],int filas, int columnas);
void mostrarMatriz(int matriz[][COL], int filas, int columnas);
void mostrarTrianInf(int matriz[][COL],int filas, int columnas);
void mostrarTrianInfDiagonalP(int matriz[][COL],int filas, int columnas);
void mostrarTrianSupDiagonalP(int matriz[][COL],int filas, int columnas);
void mostrarTrianSupDs(int matriz[][COL],int filas,int columnas);
void mostrarTrianInfDs(int matriz[][COL],int filas,int columnas);
int main(){

    int matriz[FILAS][COL] = {{1,2,3},{4,5,6},{7,8,9}};
    mostrarMatriz(matriz,FILAS,COL);
    printf("\n");
    mostrarDprincipal(matriz,FILAS,COL);
    printf("\n");
    mostrarDsecundaria(matriz,FILAS,COL);
    printf("\n");
    mostrarTrianSup(matriz,FILAS,COL);
    printf("\n");
    mostrarTrianInf(matriz,FILAS,COL);
    printf("\n");
    mostrarTrianSupDiagonalP(matriz,FILAS,COL);
    printf("\n");
    mostrarTrianSupDs(matriz,FILAS,COL);
    printf("\n");
    mostrarTrianInfDs(matriz,FILAS,COL);
    printf("\n\n");
    system("pause");
    return 0;
}
void mostrarDprincipal(int matriz[][COL],int filas, int columnas){
    int i;
    for(int i = 0; i<filas;i++)
    {
        printf("%d ",matriz[i][i]);
    }
}
void mostrarDsecundaria(int matriz[][COL],int filas, int columnas){
    int i;
    for(int i = 0; i<filas;i++){
        printf("%d ",matriz[i][columnas-1-i]);
    }
}
void mostrarTrianSup(int matriz[][COL],int filas, int columnas){
    int i,j;
    for(int i = 0; i<filas;i++){
        for(int j = i+1; j<columnas;j++){
            printf("%d ",matriz[i][j]);
        }
    }
}
void mostrarMatriz(int matriz[][COL], int filas, int columnas){
    int i,j;
    for(int i = 0; i<filas;i++){
        for(int j=0;j<columnas;j++){
            printf("%02d ", matriz[i][j]);
        }
        printf("\n");
    }
}
void mostrarTrianInf(int matriz[][COL],int filas, int columnas){
    int i,j=0;
    for(int j=0;j<columnas;j++){
        for(int i = j+1; i<filas;i++){
            printf("%d ", matriz[i][j]);
        }
    }
}
void mostrarTrianInfDiagonalP(int matriz[][COL],int filas, int columnas){
    int i,j=0;
    for(int j=0;j<columnas;j++){
        for(int i = j; i<filas;i++){
            printf("%d ", matriz[i][j]);
        }
    }
}
void mostrarTrianSupDiagonalP(int matriz[][COL],int filas, int columnas){
    int i,j;
    for(int i = 0; i<filas;i++){
        for(int j = i; j<columnas;j++){
            printf("%d ",matriz[i][j]);
        }
    }
}
void mostrarTrianSupDs(int matriz[][COL],int filas,int columnas){
    int i,j;
    for(int j=0;j<columnas;j++){
        for(int i =0; i<filas-1-j;i++){
            printf("%d ",matriz[i][j]);
        }
    }
}
void mostrarTrianInfDs(int matriz[][COL],int filas,int columnas){
    int i,j;
    for(int i=filas-1;i>0;i--){
        for(int j = columnas-i; j<columnas;j++){
            printf("%d ",matriz[i][j]);
        }
    }
}
