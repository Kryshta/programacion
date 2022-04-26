#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int dni;
    char nyap[50];
    float prom;
} t_alum;

void cargarAlum(t_alum* alum1);
int grabarAlumno( FILE** pf, t_alum* alum1, unsigned int tam, unsigned int cantEstr);
int buscarAlumno(FILE** pf, int dniDat);
void mostrarArchivo(FILE** pf);


#endif // HEADER_H_INCLUDED
