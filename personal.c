#include <stdio.h>
#include <string.h>

// Estructura personal
struct Persona {
    char nombre[50];
    int edad;
};

// Estructura dirección
struct Direccion {
    char calle[100];
    char ciudad[50];
    char estado[50];
    char codigoPostal[20];
};

// Estructura empleo
struct Empleo {
    char puesto[50];
    char empresa[50];
    float salario;
};

int main() {

    // Estructuras
    struct Persona persona1;
    struct Direccion direccion1;
    struct Empleo empleo1;

    strcpy(persona1.nombre, "Juan Pérez");
    persona1.edad = 30;

    // Asignamos valores a  Direccion
    strcpy(direccion1.calle, "Av. Libertador 1234");
    strcpy(direccion1.ciudad, "Buenos Aires");
    strcpy(direccion1.estado, "CABA");
    strcpy(direccion1.codigoPostal, "C1001");

    // Asignamos valores a Empleo
    strcpy(empleo1.puesto, "Desarrollador de Software");
    strcpy(empleo1.empresa, "TechSolutions");
    empleo1.salario = 50000.50;

    // Mostramos información 
    printf("Datos Personales:\n");
    printf("Nombre: %s\n", persona1.nombre);
    printf("Edad: %d años\n", persona1.edad);

    printf("\nDireccion:\n");
    printf("Calle: %s\n", direccion1.calle);
    printf("Ciudad: %s\n", direccion1.ciudad);
    printf("Estado: %s\n", direccion1.estado);
    printf("Codigo Postal: %s\n", direccion1.codigoPostal);

    printf("\nEmpleo:\n");
    printf("Puesto: %s\n", empleo1.puesto);
    printf("Empresa: %s\n", empleo1.empresa);
    printf("Salario: %.2f\n", empleo1.salario);

    return 0;
}
