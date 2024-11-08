#include <stdio.h>

// Definición de la estructura Estudiante
struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

int main() {
    struct Estudiante estudiante1;  // Declaración de una variable de tipo struct Estudiante

    // Solicitar datos al usuario
    printf("Ingrese el nombre del estudiante: ");
    fgets(estudiante1.nombre, sizeof(estudiante1.nombre), stdin);  // Leer nombre con espacios

    printf("Ingrese la edad del estudiante: ");
    scanf("%d", &estudiante1.edad);

    printf("Ingrese el promedio de calificaciones del estudiante: ");
    scanf("%f", &estudiante1.promedio);

    // Mostrar los datos ingresados
    printf("\n--- Datos del Estudiante ---\n");
    printf("Nombre: %s", estudiante1.nombre);
    printf("Edad: %d\n", estudiante1.edad);
    printf("Promedio: %.2f\n", estudiante1.promedio);

    return 0;
}
