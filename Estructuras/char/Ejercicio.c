#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char caracter, letra, palabra[100];
    int contador = 0;

    // 1. Mostrar código ASCII de un carácter
    printf("1. Mostrar código ASCII de un carácter\n");
    printf("Ingrese un caracter: ");
    scanf(" %c", &caracter);
    printf("El código ASCII de '%c' es %d\n\n", caracter, caracter);

    // 2. Determinar si una letra es vocal o consonante
    printf("2. Determinar si una letra es vocal o consonante\n");
    printf("Ingrese una letra: ");
    scanf(" %c", &caracter);
    caracter = tolower(caracter);

    if (!isalpha(caracter)) {
        printf("No es una letra.\n\n");
    } else if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u') {
        printf("Es una vocal.\n\n");
    } else {
        printf("Es una consonante.\n\n");
    }

    // 3. Convertir una letra minúscula a mayúscula
    printf("3. Convertir una letra minúscula a mayúscula\n");
    printf("Ingrese una letra minúscula: ");
    scanf(" %c", &caracter);

    if (islower(caracter)) {
        printf("La letra mayúscula es: %c\n\n", toupper(caracter));
    } else {
        printf("No ingresó una letra minúscula.\n\n");
    }

    // 4. Contar cuántas veces aparece una letra en una palabra
    printf("4. Contar cuántas veces aparece una letra en una palabra\n");
    printf("Ingrese una palabra: ");
    scanf("%s", palabra);
    printf("Ingrese la letra a buscar: ");
    scanf(" %c", &letra);

    letra = tolower(letra);
    for (int i = 0; palabra[i] != '\0'; i++) {
        if (tolower(palabra[i]) == letra) {
            contador++;
        }
    }
    printf("La letra '%c' aparece %d veces en la palabra '%s'.\n\n", letra, contador, palabra);

    // 5. Verificar si un carácter es un dígito numérico
    printf("5. Verificar si un carácter es un dígito numérico\n");
    printf("Ingrese un caracter: ");
    scanf(" %c", &caracter);

    if (isdigit(caracter)) {
        printf("'%c' es un dígito numérico.\n", caracter);
    } else {
        printf("'%c' no es un dígito numérico.\n", caracter);
    }

    return 0;
}
