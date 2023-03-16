#include <stdio.h>
#include <math.h>
#include "assert.h"

// Incluir encabezados de la Práctica
#include "../TP0_Repaso.h"

// Declarar constantes para los mensajes.
// Texto en Rojo: \x1b[31m
// Texto en Verde: \x1b[32m
// Color texto por default: \x1b[0m


void ejercicio1 ();
void ejercicio2 ();
void ejercicio3 ();
void ejercicio4 ();
void ejercicio5 ();
//void ejercicio6 ();

void ejercicio1 (){
    printf("\n\n\x1b[36m Tests de Ejercicio 1 \x1b[0m\n");
    printf("\x1b[34m ----- -- --------- -\x1b[0m\n\n");

    printf("dondeEstaElPunto(0, 0, 2, 1, 1) => INTERNO           \t%s\n", ((dondeEstaElPunto(0, 0, 2, 1, 1) == INTERNO) ? OK : ERROR));
    printf("dondeEstaElPunto(0, 0, 1, 1, 1) => EXTERNO           \t%s\n", ((dondeEstaElPunto(0, 0, 1, 1, 1) == EXTERNO) ? OK : ERROR));
    printf("dondeEstaElPunto(0, 0, 1, 1, 0) => EN_CIRCUNFERENCIA \t%s\n", ((dondeEstaElPunto(0, 0, 1, 1, 0) == EN_CIRCUNFERENCIA) ? OK : ERROR));
}

void ejercicio2() {
    printf("\n\n\x1b[36m Tests de Ejercicio 2 \x1b[0m\n");
    printf("\x1b[34m ----- -- --------- -\x1b[0m\n\n");

    printf("digitoEnNumero(987, 7) => true  \t%s -> %s\n", digitoEnNumero(987, 7) ? "true" : "false", ((digitoEnNumero(987, 7) == true) ? OK : ERROR));
    printf("digitoEnNumero(987, 6) => false \t%s -> %s\n", digitoEnNumero(987, 6) ? "true" : "false", ((digitoEnNumero(987, 6) == false) ? OK : ERROR));
}

void ejercicio3() {
    printf("\n\n\x1b[36m Tests de Ejercicio 3 \x1b[0m\n");
    printf("\x1b[34m ----- -- --------- -\x1b[0m\n\n");

    struct Punto centro = {0, 0};
    struct Punto p1 = {1, 1};
    struct Punto p2 = {1, 0};

    printf("centro = {0, 0};           \t%s\n", ((dondeEstaElPuntoBis(centro, 2, p1) == INTERNO) ? OK : ERROR));
    printf("p1 = {1, 1};           \t%s\n", ((dondeEstaElPuntoBis(centro, 2, p1) == INTERNO) ? OK : ERROR));
    printf("p2 = {1, 0};           \t%s\n", ((dondeEstaElPuntoBis(centro, 2, p1) == INTERNO) ? OK : ERROR));

    printf("dondeEstaElPuntoBis(centro, 2, p1) => INTERNO           \t%s\n", ((dondeEstaElPuntoBis(centro, 2, p1) == INTERNO) ? OK : ERROR));
    printf("dondeEstaElPuntoBis(centro, 1, p1) => EXTERNO           \t%s\n", ((dondeEstaElPuntoBis(centro, 1, p1) == EXTERNO) ? OK : ERROR));
    printf("dondeEstaElPuntoBis(centro, 1, p2) => EN_CIRCUNFERENCIA \t%s\n", ((dondeEstaElPuntoBis(centro, 1, p2) == EN_CIRCUNFERENCIA) ? OK : ERROR));
}

// Función para imprimir los nombres de los jugadores
void imprimirNombres(struct Jugador jugadores[]) {
    for (int i = 0; i < CANT_JUGADORES; i++) {
        printf("%s\n", jugadores[i].nombre);
    }
}

void ejercicio4() {
    printf("\n\n\x1b[36m Tests de Ejercicio 4 \x1b[0m\n");
    printf("\x1b[34m ----- -- --------- -\x1b[0m\n\n");

    struct Jugador equipo[CANT_JUGADORES] = {
            {"Messi", 34, 800},
            {"Ronaldo", 37, 900},
            {"Neymar Jr.", 29, 500},
            {"Mbappe", 22, 200},
            {"Lewandowski", 33, 700},
            {"Salah", 29, 400},
            {"De Bruyne", 30, 600},
            {"van Dijk", 30, 400},
            {"Ramos", 35, 650},
            {"Neuer", 35, 800},
            {"Davies", 20, 100}
    };

    struct Jugador *jugadoresOrdenados = jugadoresOrdenadosPorCantDePartidos(equipo);
    printf("Jugadores ordenados por cantidad de partidos jugados:\n");
    imprimirNombres(jugadoresOrdenados);
    for (int i = 0; i < CANT_JUGADORES - 1; ++i) {
        assert_int_gte(equipo[i].partidosJugados, equipo[i+1].partidosJugados);
    }
    printf("\n");

    jugadoresOrdenados = jugadoresOrdenadosPorEdad(equipo);
    printf("Jugadores ordenados por edad:\n");
    imprimirNombres(jugadoresOrdenados);
    for (int i = 0; i < CANT_JUGADORES - 1; ++i) {
        assert_int_lte(equipo[i].edad, equipo[i+1].edad);
    }
    printf("\n");

    int edad = 35;
    float promedio = promedioDePartidosJugados(equipo, edad); // => 725.0
    printf("Promedio de partidos jugados para edad %d: %f\n", edad, promedio);
    assert_float_eq(promedio, 725.0f);
}

void ejercicio5() {
    printf("\n\n\x1b[36m Tests de Ejercicio 5 \x1b[0m\n");
    printf("\x1b[34m ----- -- --------- -\x1b[0m\n\n");

    int edificio[CANT_PISOS][CANT_DEPARTAMENTOS] = {
        {3, 5, 2, 1, 0},
        {2, 4, 3, 0, 4},
        {1, 0, 1, 2, 1},
        {0, 1, 0, 0, 0},
        {1, 3, 2, 1, 1},
        {2, 2, 0, 1, 3},
        {1, 0, 0, 2, 1},
        {0, 0, 1, 1, 1}};

    printf("pisoConMasHabitantes(edificio) =>       %d\n", pisoConMasHabitantes(edificio));
    assert_int_eq(pisoConMasHabitantes(edificio), 2);
    printf("cantidadDeViviendasVacias(edificio) =>  %d\n", cantidadDeViviendasVacias(edificio));
    assert_int_eq(cantidadDeViviendasVacias(edificio), 12);
    printf("promedioHabitantesPorVivienda(edificio) %f\n", promedioHabitantesPorVivienda(edificio));
    assert_float_lt(fabs(promedioHabitantesPorVivienda(edificio) - 1.325f), 0.00001f);

    Vivienda v = viviendaConMasHabitantes(edificio);
    printf("viviendaConMasHabitantes(edificio) =>   %d%c\n", v.piso, v.depto);
    assert_int_eq(v.piso, 1);
    assert_int_eq(v.depto, 'B');
}

int main()
{
    ejercicio1();
    ejercicio2();
    ejercicio3();
    ejercicio4();
    ejercicio5();
    //ejercicio6();

    return 0;
}
