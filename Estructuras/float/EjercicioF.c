#include <stdio.h>
#include <math.h>

int main() {
    // 1. Área de un círculo
    float radio = 2.5;
    float area = 3.1416 * radio * radio;
    printf("1) Area del circulo: %.2f\n", area);

    // 2. Celsius a Fahrenheit
    float celsius = 25;
    float fahrenheit = (celsius * 9/5) + 32;
    printf("2) %.2f C = %.2f F\n", celsius, fahrenheit);

    // 3. Promedio de tres números
    float a = 4.5, b = 3.2, c = 6.8;
    float promedio = (a + b + c) / 3;
    printf("3) Promedio: %.2f\n", promedio);

    // 4. Comparar dos números
    float x = 7.5, y = 5.3;
    if (x > y) printf("4) %.2f es mayor que %.2f\n", x, y);
    else printf("4) %.2f es mayor que %.2f\n", y, x);

    // 5. Raíz cuadrada
    float num;
    printf("5) Ingrese un numero: ");
    scanf("%f", &num);
    if (num >= 0) printf("Raiz cuadrada: %.2f\n", sqrt(num));
    else printf("No existe raiz real\n");

    return 0;
}
