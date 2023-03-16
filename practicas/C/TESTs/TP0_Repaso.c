#include <math.h>

#include <stdbool.h>
#include <stdlib.h>

#include "../TP0_Repaso.h"

/*
    Ejercicio 1
    --------- -
*/

enum Referencia dondeEstaElPunto(int xc, int yc, int rc, int xp, int yp)
{
    enum Referencia ref;

    // calcular la distancia entre el centro de la circunferencia y el punto a evaluar
    double d = sqrt(pow((xp - xc), 2) + pow((yp - yc), 2));

    // evaluar la ubicación del punto con respecto a la circunferencia y asignar la referencia correspondiente
    if (d == rc)
    {
        ref = EN_CIRCUNFERENCIA;
    }
    else if (d < rc)
    {
        ref = INTERNO;
    }
    else
    {
        ref = EXTERNO;
    }

    return ref;
}

/*
    Ejercicio 2
    --------- -
*/
bool digitoEnNumero(long n, short d)
{
    bool encontroDigito = false;

    while (n != 0 && !encontroDigito)
    {
        long digito = n % 10;
        encontroDigito = (digito == d);
        n /= 10;
    }
    return encontroDigito;
}

/*
    Ejercicio 3
    --------- -
*/

enum Referencia dondeEstaElPuntoBis(struct Punto centroC, int rc, struct Punto p)
{
    enum Referencia ref;

    // calcular la distancia entre el centro de la circunferencia y el punto a evaluar
    double d = sqrt(pow((p.x - centroC.x), 2) + pow((p.y - centroC.y), 2));

    // evaluar la ubicación del punto con respecto a la circunferencia y asignar la referencia correspondiente
    if (d == rc)
    {
        ref = EN_CIRCUNFERENCIA;
    }
    else if (d < rc)
    {
        ref = INTERNO;
    }
    else
    {
        ref = EXTERNO;
    }

    return ref;
}

/*
    Ejercicio 4
    --------- -
*/

// Función de comparación para ordenar jugadores por cantidad de partidos jugados
int cmpPartidosJugados(const void *a, const void *b)
{
    struct Jugador *jugadorA = (struct Jugador *)a;
    struct Jugador *jugadorB = (struct Jugador *)b;
    return jugadorB->partidosJugados - jugadorA->partidosJugados;
}

// Función de comparación para ordenar jugadores por edad
int cmpEdad(const void *a, const void *b)
{
    struct Jugador *jugadorA = (struct Jugador *)a;
    struct Jugador *jugadorB = (struct Jugador *)b;
    return jugadorA->edad - jugadorB->edad;
}

// Función para ordenar jugadores por cantidad de partidos jugados
struct Jugador *jugadoresOrdenadosPorCantDePartidos(struct Jugador equipo[])
{
    qsort(equipo, CANT_JUGADORES, sizeof(struct Jugador), cmpPartidosJugados);
    return equipo;
}

// Función para ordenar jugadores por edad
struct Jugador *jugadoresOrdenadosPorEdad(struct Jugador equipo[])
{
    qsort(equipo, CANT_JUGADORES, sizeof(struct Jugador), cmpEdad);
    return equipo;
}

// Función para calcular el promedio de partidos jugados dada una edad
float promedioDePartidosJugados(struct Jugador equipo[], int edad)
{
    int cantJugadores = 0;
    int totalPartidos = 0;
    for (int i = 0; i < CANT_JUGADORES; i++)
    {
        if (equipo[i].edad == edad)
        {
            cantJugadores++;
            totalPartidos += equipo[i].partidosJugados;
        }
    }
    if (cantJugadores == 0)
    {
        return 0;
    }
    return (float)totalPartidos / cantJugadores;
}

/*
    Ejercicio 5
    --------- -
*/

// Función que devuelve el departamento con más habitantes
Vivienda viviendaConMasHabitantes(int edificio[CANT_PISOS][CANT_DEPARTAMENTOS])
{
    Vivienda v; // = (Vivienda) malloc(sizeof(struct ViviendaRep));
    int maxHabitantes = -1;
    char deptoConMasHabitantes = ' ';
    for (int piso = 0; piso < CANT_PISOS; piso++)
    {
        for (int depto = 0; depto < CANT_DEPARTAMENTOS; depto++)
        {
            if (edificio[piso][depto] > maxHabitantes)
            {
                maxHabitantes = edificio[piso][depto];
                /*Para generar los caracteres que nombran a los dptos le suma la posicion de la columna a la letra A.
                De tal manera que A + 1 es B, y A + 2 es B.
                Esto es porque es un char, por lo cual al 97 que es el ASCII de A le suma del 0 al 4 para formar las letras A, B, C, D y E.
                */
                v.depto = 'A' + depto;
                v.piso = piso + 1;
            }
        }
    }

    return v;
}

// Función que devuelve el piso con más habitantes
int pisoConMasHabitantes(int edificio[CANT_PISOS][CANT_DEPARTAMENTOS])
{
    int maxHabitantes = -1;
    int pisoConMasHabitantes = -1;
    for (int piso = 0; piso < CANT_PISOS; piso++)
    {
        int habitantesEnPiso = 0;
        for (int depto = 0; depto < CANT_DEPARTAMENTOS; depto++)
        {
            habitantesEnPiso += edificio[piso][depto];
        }
        if (habitantesEnPiso > maxHabitantes)
        {
            maxHabitantes = habitantesEnPiso;
            pisoConMasHabitantes = piso + 1;
        }
    }
    return pisoConMasHabitantes;
}

// Función que devuelve el número de departamentos vacíos
int cantidadDeViviendasVacias(int edificio[CANT_PISOS][CANT_DEPARTAMENTOS])
{
    int viviendasVacias = 0;
    for (int piso = 0; piso < CANT_PISOS; piso++)
    {
        for (int depto = 0; depto < CANT_DEPARTAMENTOS; depto++)
        {
            if (edificio[piso][depto] == 0)
            {
                viviendasVacias++;
            }
        }
    }
    return viviendasVacias;
}

// Función que devuelve el promedio de habitantes por departamento
float promedioHabitantesPorVivienda(int edificio[CANT_PISOS][CANT_DEPARTAMENTOS])
{
    int totalHabitantes = 0;
    for (int piso = 0; piso < CANT_PISOS; piso++)
    {
        for (int depto = 0; depto < CANT_DEPARTAMENTOS; depto++)
        {
            totalHabitantes += edificio[piso][depto];
        }
    }
    return (float)totalHabitantes / (CANT_PISOS * CANT_DEPARTAMENTOS);
}
