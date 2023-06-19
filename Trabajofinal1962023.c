#include <stdio.h>

struct alumno {
    char nombre[20];
    char direccion[20];
    char carrera[20];
    int edad;
    float promedio;
};

int main() {
    struct alumno alumnos[5];

    for (int i = 0; i < 5; i++) {
        printf("Ingrese los datos del alumno %d:\n", i + 1);

        printf("Nombre: ");
        fflush(stdout);
        gets(alumnos[i].nombre);

        printf("Dirección: ");
        fflush(stdout);
        gets(alumnos[i].direccion);

        printf("Carrera: ");
        fflush(stdout);
        gets(alumnos[i].carrera);

        printf("Edad: ");
        fflush(stdout);
        scanf("%d", &alumnos[i].edad);
        fflush(stdin);

        printf("Promedio: ");
        fflush(stdout);
        scanf("%f", &alumnos[i].promedio);
        fflush(stdin);

        printf("\n");
    }

    printf("Datos de los alumnos:\n");
    for (int i = 0; i < 5; i++) {
        
        printf("Alumno %d:\n", i + 1);
        printf("Nombre: ");
        puts(alumnos[i].nombre);
        
        printf("Dirección: ");
        puts(alumnos[i].direccion);
        
        printf("Carrera: ");
        puts(alumnos[i].carrera);
        
        printf("Edad: %d\n", alumnos[i].edad);
        
        printf("Promedio: %.2f\n\n", alumnos[i].promedio);
    }

    return 0;
}
