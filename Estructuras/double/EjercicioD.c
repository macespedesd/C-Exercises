#include <stdio.h> // Biblioteca estándar de entrada y salida

int main() { // Función principal
    
    // 1. Serie de Leibniz (pi con 1000 términos)
    // =======================
    int n = 1000; // Cantidad de términos
    double pi = 0.0; // Resultado de la serie
    for (int i = 0; i < n; i++) { // Bucle de 0 a 999
        double termino = (i % 2 == 0 ? 1.0 : -1.0) / (2.0 * i + 1.0); // Fórmula de cada término
        pi += termino; // Se acumula en pi
    }
    pi *= 4.0; // Se multiplica por 4 al final
    printf("1) Aproximacion de pi con %d terminos: %.10f\n\n", n, pi);

    // 2. Suma de dos números double

    double a = 5.75; // Primer número
    double b = 3.25; // Segundo número
    double suma = a + b; // Suma de los dos
    printf("2) La suma de %.2f y %.2f es %.2f\n\n", a, b, suma);

    // 3. Promedio de 5 números
    double num, acumulador = 0.0; // Variables para leer y acumular
    for (int i = 1; i <= 5; i++) { // Se leen 5 números
        printf("Ingrese el numero %d: ", i);
        scanf("%lf", &num); // El usuario ingresa un double
        acumulador += num; // Se suma al acumulador
    }
    double promedio = acumulador / 5.0; // Fórmula del promedio
    printf("3) El promedio de los 5 numeros es: %.2f\n\n", promedio);

    // 4. Número positivo, negativo o cero
    double n_usuario; // Variable para guardar un número
    printf("Ingrese un numero: ");
    scanf("%lf", &n_usuario); // Lee el número
    if (n_usuario > 0) {
        printf("4) El numero es positivo.\n\n");
    } else if (n_usuario < 0) {
        printf("4) El numero es negativo.\n\n");
    } else {
        printf("4) El numero es cero.\n\n");
    }

    // 5. Potencia base^exponente
    double base, resultado = 1.0; // Base y resultado
    int exponente; // Exponente entero
    printf("Ingrese la base: ");
    scanf("%lf", &base); // Lee la base
    printf("Ingrese el exponente (entero): ");
    scanf("%d", &exponente); // Lee el exponente

    if (exponente == 0) { // Cualquier número elevado a 0 es 1
        resultado = 1.0;
    } else if (exponente > 0) { // Exponente positivo
        for (int i = 0; i < exponente; i++) {
            resultado *= base;
        }
    } else { // Exponente negativo
        for (int i = 0; i < -exponente; i++) {
            resultado *= base;
        }
        resultado = 1.0 / resultado; // Inverso para negativos
    }
    printf("5) %.2f elevado a %d es %.5f\n", base, exponente, resultado);

    return 0; // Fin del programa
}
