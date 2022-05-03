#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include "header.h"
void loteprueba(){
    FILE* pf;
    pf = fopen("loteprueba.dat", "wb");
    tAlumno alumnos[] = {{1,"alexis c",'h',{1,1,1},9},
                         {2,"car c",'m',{1,2,9},5},
                         {3,"maria c",'m',{2,7,1},2},
                         {7,"jaun c",'h',{1,1,1},5},
                         {11,"raul c",'h',{3,4,5},8}};
    fwrite(alumnos,sizeof(alumnos),1,pf);
    fclose(pf);
}
void crearArchivotxtFija(FILE** pf){
    FILE* pft;
    pft = fopen("archivoFija.txt","wt");
    if(pft==NULL){
        exit(1);
    }
    tAlumno alumnoAux;
    fread(&alumnoAux,sizeof(tAlumno),1,*pf);
    while(!feof(*pf)){
        fprintf(pft,"%8d|%50s|%2c|%2d/%2d/%2d|%4.2f\n",alumnoAux.dni,alumnoAux.AyN,alumnoAux.sexo,alumnoAux.fingr.dia,alumnoAux.fingr.mes,alumnoAux.fingr.anio,alumnoAux.promedio );
        fread(&alumnoAux,sizeof(tAlumno),1,*pf);
    }
    fclose(pft);
}
void crearArchivotxtVariable(FILE** pf){
    rewind(*pf);
    FILE* pft;
    pft = fopen("archivoVariable.txt","wt");
    if(pft==NULL){
        exit(1);
    }
    tAlumno alumnoAux;
    fread(&alumnoAux,sizeof(tAlumno),1,*pf);
    while(!feof(*pf)){
        fprintf(pft,"%d|%s|%c|%d/%d/%d|%.2f\n",alumnoAux.dni,alumnoAux.AyN,alumnoAux.sexo,alumnoAux.fingr.dia,alumnoAux.fingr.mes,alumnoAux.fingr.anio,alumnoAux.promedio );
        fread(&alumnoAux,sizeof(tAlumno),1,*pf);
    }
    fclose(pft);
}
//void crearBinario
