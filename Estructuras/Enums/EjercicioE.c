#include <stdio.h>

int main() {
    // 1. Enum de días de la semana
    enum Dia {LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO, DOMINGO};
    enum Dia d = VIERNES;
    printf("1) Dia elegido: %d\n", d);

    // 2. Enum de meses del año
    enum Mes {ENERO=1, FEBRERO, MARZO, ABRIL, MAYO, JUNIO, JULIO, AGOSTO, SEPTIEMBRE, OCTUBRE, NOVIEMBRE, DICIEMBRE};
    enum Mes m = 8;
    printf("2) Mes elegido: %d\n", m);

    // 3. Enum semáforo
    enum Semaforo {ROJO, AMARILLO, VERDE};
    enum Semaforo s = VERDE;
    if (s == ROJO) printf("3) Alto\n");
    if (s == AMARILLO) printf("3) Precaucion\n");
    if (s == VERDE) printf("3) Siga\n");

    // 4. Enum niveles de dificultad
    enum Dificultad {FACIL, MEDIO, DIFICIL};
    enum Dificultad nivel = MEDIO;
    printf("4) Nivel elegido: %d\n", nivel);

    // 5. Recorrer un enum con ciclo
    enum DiaSemana {LUN=1, MAR, MIE, JUE, VIE, SAB, DOM};
    for (int i = LUN; i <= DOM; i++) {
        printf("5) Valor enum: %d\n", i);
    }

    return 0;
}
