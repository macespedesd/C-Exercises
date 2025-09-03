#include <stdio.h>

int main() {
    // 1. Suma de dos enteros
    int a, b;
    printf("Ingrese dos numeros enteros: ");
    scanf("%d %d", &a, &b);
    printf("La suma es: %d\n", a + b);

    // 2. Par o impar
    int n;
    printf("Ingrese un numero entero: ");
    scanf("%d", &n);
    if (n % 2 == 0) printf("El numero es par\n");
    else printf("El numero es impar\n");

    // 3. Factorial
    int num, i, fact = 1;
    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++) fact *= i;
    printf("El factorial de %d es %d\n", num, fact);

    // 4. Mayor de tres numeros
    int x, y, z;
    printf("Ingrese tres numeros enteros: ");
    scanf("%d %d %d", &x, &y, &z);
    if (x >= y && x >= z) printf("El mayor es %d\n", x);
    else if (y >= x && y >= z) printf("El mayor es %d\n", y);
    else printf("El mayor es %d\n", z);

    // 5. Contar del 1 al 100
    for (i = 1; i <= 100; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
