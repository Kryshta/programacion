#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void cargarEstudiantes(){
    t_estudiante auxEstudiante;

    FILE* estud;
    estud = fopen("estudiantes.dat", "wb");

    printf("DNI? \n");
    scanf("%d", &auxEstudiante.dni);

    while(auxEstudiante.dni!=0){

    printf("apellido? \n");
    fflush(stdin);
    gets(auxEstudiante.apellido);

    printf("nombre? \n");
    fflush(stdin);
    gets(auxEstudiante.nombre);

    printf("promedio? \n");
    scanf("%f", &auxEstudiante.promedio);


    fwrite(&auxEstudiante, sizeof(t_estudiante), 1, estud);

    printf("DNI? \n");
    scanf("%d", &auxEstudiante.dni);

    }

    fclose(estud);
}


void cargarEmpleados(){
    t_empleado auxEmpleado;

    FILE* emplead;
    emplead = fopen("empleados.dat", "wb");

    printf("DNI? \n");
    scanf("%d", &auxEmpleado.dni);

    while(auxEmpleado.dni!=0){

    printf("apellido? \n");
    fflush(stdin);
    gets(auxEmpleado.apellido);

    printf("nombre? \n");
    fflush(stdin);
    gets(auxEmpleado.nombre);

    printf("sueldo? \n");
    scanf("%lf", &auxEmpleado.sueldo);


    fwrite(&auxEmpleado, sizeof(t_empleado), 1, emplead);

    printf("DNI? \n");
    scanf("%d", &auxEmpleado.dni);

    }

    fclose(emplead);
}


void comparar(FILE* employees, FILE* students){
    t_empleado auxEmpleado;
    t_estudiante auxEstudiante;
    int comparacion;

    fread(&auxEmpleado, sizeof(t_empleado), 1, employees);
    fread(&auxEstudiante, sizeof(t_estudiante),1, students);

    while(!feof(employees) && !feof(students)){

    comparacion = strcmpi(auxEmpleado.apellido, auxEstudiante.apellido);
    if (comparacion==0)
        comparacion = strcmpi(auxEmpleado.nombre, auxEstudiante.nombre);
    if (comparacion==0)
        comparacion = auxEmpleado.dni - auxEstudiante.dni;

    fUnion(auxEmpleado, auxEstudiante, comparacion, &employees, &students);
    //interseccion
    //solo estudiante
    //solo empleado

    fread(&auxEmpleado, sizeof(t_empleado), 1, employees);
    fread(&auxEstudiante, sizeof(t_estudiante),1, students);
    }

}

void fUnion(t_empleado auxEmpleado, t_estudiante auxEstudiante, int comparacion, FILE** employees, FILE** students){
    t_persona auxPersona;
    FILE* pUnion;
    pUnion = fopen("d.dat", "ab");

    if(comparacion>0){
        strcpy(auxPersona.apellido,auxEstudiante.apellido);
        strcpy(auxPersona.nombre,auxEstudiante.nombre);
        auxPersona.dni=auxEstudiante.dni;
        fwrite(&auxPersona, sizeof(t_persona),1,pUnion);
        fseek(*employees,-sizeof(t_empleado),SEEK_CUR);
    }

    if (comparacion<0){
        strcpy(auxPersona.apellido,auxEmpleado.apellido);
        strcpy(auxPersona.nombre,auxEmpleado.nombre);
        auxPersona.dni=auxEmpleado.dni;
        fwrite(&auxPersona, sizeof(t_persona),1,pUnion);
        fseek(*students, -1*sizeof(t_estudiante),SEEK_CUR);
    }

    if (comparacion==0){
        strcpy(auxPersona.apellido,auxEstudiante.apellido);
        strcpy(auxPersona.nombre,auxEstudiante.nombre);
        auxPersona.dni=auxEstudiante.dni;
        fwrite(&auxPersona, sizeof(t_persona),1,pUnion);
    }

    fclose(pUnion);

}
