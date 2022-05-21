#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

int main()
{
    printf("Hello world!\n");

    FILE* input;
    input = fopen("registros.txt", "rt");
    if (input==NULL)
        exit(-1);

    char auxString[999];
    registro auxRegistro;
    registroGrosso grosso;
    int nrocuentaanterior;
    float acumulacion=0;

    while(!feof(input)){
        fgets(auxString, 999, input);
        sscanf(auxString, "%s %s %d %s %c %f", auxRegistro.fecha,
                                                auxRegistro.hora,
                                                &auxRegistro.nroCuenta,
                                                auxRegistro.codSuc,
                                                &auxRegistro.operacion,
                                                &auxRegistro.monto);
        if(nrocuentaanterior==auxRegistro.nroCuenta){
            acumulacion += auxRegistro.monto;
            if(acumulacion>10000000){
                strcpy(grosso.fecha, auxRegistro.fecha);
                strcpy(grosso.hora, auxRegistro.hora);
                grosso.nroCuenta = auxRegistro.nroCuenta;
                strcpy(grosso.codSuc, auxRegistro.codSuc);
                grosso.monto = acumulacion;
            }
        }
        else{
            nrocuentaanterior = auxRegistro.nroCuenta;
            if(acumulacion>10000000){
                //meter en cola de grossos
                printf("\nNumero de cuenta: %s, monto: %f\n",grosso.nroCuenta, grosso.monto);
            }
        }

    }

    fclose(input);

    //generar archivo con cola de grossos

    return 0;
}
