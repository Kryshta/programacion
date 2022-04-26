#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#include <string.h>

int main()
{
    FILE *pf;

    int input=0, dniDat, resultado;
    t_alum alum;
    char yesno;

    while (input!=6){
        printf(" 1. Crear archivo \n 2. Abrir archivo \n 3. Grabar alumno \n 4. Mostrar archivo \n 5. Buscar y mostrar alumno \n 6. Cerrar \n Elija una opcion: ");
        scanf("%d", &input);

        switch(input){
            case 1:
                pf = fopen("alumnos.dat", "rb");

                if (pf){
                    do{
                        fflush(stdin);
                        printf("Ya existe un archivo, desea sobreescribirlo? (s/n): ");
                        scanf("%c", &yesno);
                    }while (yesno!='s' && yesno!='n');

                if (yesno=='n')
                    break;
                }

                pf = fopen("alumnos.dat", "wb");
                if (!pf)
                    printf("\n No se pudo crear el archivo \n ");
                break;

            case 2:
                pf = fopen("alumnos.dat", "rb");
                if (!pf)
                    printf("\n No se pudo encontrar el archivo \n");
                break;

            case 3:

                pf = fopen("alumnos.dat", "ab");
                if (!pf){
                    printf("\n No se pudo inicializar el archivo \n");
                    break;
                }

                cargarAlum(&alum);
                grabarAlumno(&pf, &alum, sizeof(t_alum),1);
                break;

            case 4:
                pf = fopen("alumnos.dat", "rb");
                if (!pf){
                    printf("\n No se pudo encontrar el archivo \n");
                    break;
                }
                mostrarArchivo(&pf);
                break;


            case 5:
                pf = fopen("alumnos.dat", "rb");
                if (!pf){
                    printf("\n No se pudo encontrar el archivo \n");
                    break;
                }

                printf("\nIngrese dni del alumno a mostrar:");
                scanf("%d", &dniDat);
                resultado = buscarAlumno(&pf, dniDat);
                if (resultado==0)
                    printf("\n No se encontro el alumno especificado \n ");
                break;

            case 6:
                fclose(pf);

            }
    }

    return 0;
}
