#include <stdio.h>
#include <stdlib.h>
#define TAM1 4
#define TAM2 7


int vectoresDisjunto(int *v1,int tam1,int *v2,int tam2);

int main()
{
    int v1[TAM1]={1,2,3,4}, v2[TAM2]={6,80,8,9,0,45,5};

    if(vectoresDisjunto(v1,TAM1,v2,TAM2))
    puts("Los Vectores Son Disjuntos");
    else
    puts("Los Vectores No Son Disjuntos");

    return 0;
}

int vectoresDisjunto(int *v1,int tam1,int *v2,int tam2)
{
    int i,j;

    for(i=0; i<tam1; i++,v1++)
    {
        for(j=0; j<tam2; j++,v2++)
        {
            if(*v1==*v2)
                return 0;
        }
        v2=v2-tam2;
    }

    return 1;
}
