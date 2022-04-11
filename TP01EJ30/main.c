#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{

    int matriz[][TAM]={{1,2,3,4,6},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};
    int n=TAM;

    printf("%d\n", sumatoriaPrincipal(matriz, n));
    printf("%d\n",sumatoriaSecundaria(matriz, n));

    return 0;
}
