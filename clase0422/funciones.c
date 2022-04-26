#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void cargarAlum(t_alum* alum1){

    fflush(stdin);
    printf("Ingrese nombre: ");
    gets(alum1->nyap);

    printf("Ingrese dni: ");
    scanf("%d", &alum1->dni);

    printf("Ingrese promedio: ");
    scanf("%f", &alum1->prom);

}

int grabarAlumno( FILE** pf, t_alum* alum1, unsigned int tam, unsigned int cantEstr){

    return cantEstr==fwrite(alum1, tam, cantEstr, *pf);
}

int buscarAlumno(FILE** pf, int dniDat){
    t_alum alum;
    void rewind(FILE* pf);

    while(!feof(*pf)){
        fread(&alum, sizeof(alum), 1, *pf);
        if (dniDat == alum.dni){
            printf("\n ALUMNO: %s \n DNI: %d \n PROMEDIO: %f\n ", alum.nyap, alum.dni, alum.prom);
            return 1;
        }
    }
    return 0;
}

void mostrarArchivo(FILE** pf){
    t_alum alum;

    while((fread(&alum, sizeof(alum), 1, *pf))==1){
        printf("\n ALUMNO: %s \n DNI: %d \n PROMEDIO: %.2f\n\n ", alum.nyap, alum.dni, alum.prom);
    }
}
