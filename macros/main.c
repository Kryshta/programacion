#include <stdio.h>
#include <stdlib.h>

#define PARTE_ENTERA(X) (int)(X)
#define PARTE_DECIMAL(X) (X)-PARTE_ENTERA(X)
#define REDONDEO(X) PARTE_DECIMAL(X)>0.5?PARTE_ENTERA(X+1):PARTE_ENTERA(X)
#define ABS(X) (X)<0?(X)*-1:(X)
#define MAYOR(X, Y) (X)>(Y)?(X):(Y)
#define MENOR(X, Y) (X)<(Y)?(X):(Y)
#define ES_PAR(X) ((X)%2)==0?1:0
#define ES_IMPAR(X) !ES_PAR(X)
#define ES_MINUS(X) (((X)>= 'a')&&((X)<='z'))?1:0
#define ES_MAYUS(X) (((X)>= 'A')&&((X)<='Z'))?1:0
#define ES_LETRA(X) (ES_MINUS(X)||ES_MAYUS(X))?1:0
#define ES_NUMERO(X) ((X)>=0 && (X)<9)?1:0
#define ES_BLANCO(X) ((X)==' ')?1:0
#define ES_VOCAL(X) ((X)=='A' || (X)=='E' || (X)=='I' || (X)=='O' || (X)=='U' || (X)=='a' || (X)=='e' || (X)=='i' || (X)=='o' || (X)=='u')?1:0
#define A_MINUS(X)  ((X)>='A' && (X)<='Z')?((X)+32):(X)
#define A_MAYUS(X)  ((X)>='a' && (X)<='z')?((X)-32):(X)

int main()
{
    printf("Parte entera: %d \n", PARTE_ENTERA(5.05));
    printf("Parte decimal: %f \n", PARTE_DECIMAL(5.05));
    printf("Redondeo: %d \n", REDONDEO(5.05));
    printf("Valor absoluto: %f \n", ABS(5.05));
    printf("Cual es el mayor?: %f \n", MAYOR(5.05, 7.7));
    printf("Cual es el menor?: %f \n", MENOR(5.05, 7.7));
    printf("Es par?: %d \n", ES_PAR(5));
    printf("Es impar?: %d \n", ES_IMPAR(5));
    printf("Es minus?: %d \n", ES_MINUS('A'));
    printf("Es mayus?: %d \n", ES_MAYUS('A'));
    printf("Es numero?: %d \n", ES_NUMERO('a'));
    printf("Es letra?: %d \n", ES_LETRA('A'));
    printf("Es blanco?: %d \n", ES_BLANCO('A'));
    printf("Es vocal?: %d \n", ES_VOCAL('a'));
    printf("Mayuscula a minuscula: %c \n", A_MINUS('A'));
    printf("Minuscula a mayuscula: %c \n", A_MAYUS('a'));

    return 0;

}
