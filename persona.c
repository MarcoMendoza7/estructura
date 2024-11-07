#include <stdio.h>

struct Persona {
    char nombre[50];
    int edad;
    float altura;
};

int main() {
    // Declaración de una variable de tipo struct Persona
    struct Persona persona1;

    // Asignación de valores a los campos de la estructura
    printf("Ingrese el nombre: ");
    fgets(persona1.nombre, sizeof(persona1.nombre), stdin);  // Leer nombre
    printf("Ingrese la edad: ");
    scanf("%d", &persona1.edad);  // Leer edad
    printf("Ingrese la altura (en metros): ");
    scanf("%f", &persona1.altura);  // Leer altura

    // Imprimir los datos ingresados
    printf("\nDatos de la persona:\n");
    printf("Nombre: %s", persona1.nombre);
    printf("Edad: %d años\n", persona1.edad);
    printf("Altura: %.2f metros\n", persona1.altura);

    return 0;
}
