#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//Incluir encabezados de la Práctica
#include "../TP0_Repaso.h"


// Declarar constantes para los mensajes. 
// Texto en Rojo: \x1b[31m
// Texto en Verde: \x1b[32m
// Color texto por default: \x1b[0m

#define ERROR "\x1b[31m Error \x1b[0m"

#define OK "\x1b[32m OK \x1b[0m"

int main()
{
    // Ejercicio 1
    printf("\n\n\x1b[36m Tests de Ejercicio 1 \x1b[0m\n");
    printf("\x1b[34m ----- -- --------- -\x1b[0m\n\n");

    printf("dondeEstaElPunto(0, 0, 2, 1, 1) => INTERNO           \t%s\n", ((dondeEstaElPunto(0, 0, 2, 1, 1) == INTERNO)? OK : ERROR));
    printf("dondeEstaElPunto(0, 0, 1, 1, 1) => EXTERNO           \t%s\n", ((dondeEstaElPunto(0, 0, 1, 1, 1) == EXTERNO)? OK : ERROR));
    printf("dondeEstaElPunto(0, 0, 1, 1, 0) => EN_CIRCUNFERENCIA \t%s\n", ((dondeEstaElPunto(0, 0, 1, 1, 0) == EN_CIRCUNFERENCIA)? OK : ERROR));

    // Ejercicio 2
    printf("\n\n\x1b[36m Tests de Ejercicio 2 \x1b[0m\n");
    printf("\x1b[34m ----- -- --------- -\x1b[0m\n\n");

    printf("digitoEnNumero(987, 7) => true  \t%s -> %s\n", digitoEnNumero(987, 7)? "true": "false", ((digitoEnNumero(987, 7) == true)? OK : ERROR));
    printf("digitoEnNumero(987, 6) => false \t%s -> %s\n", digitoEnNumero(987, 6)? "true": "false", ((digitoEnNumero(987, 6) == false)? OK : ERROR));

    // Ejercicio 3
    printf("\n\n\x1b[36m Tests de Ejercicio 3 \x1b[0m\n");
    printf("\x1b[34m ----- -- --------- -\x1b[0m\n\n");

    struct Punto centro = {0, 0};
    struct Punto p1 = {1, 1};
    struct Punto p2 = {1, 0};

    printf("dondeEstaElPuntoBis(centro, 2, p1) => INTERNO           \t%s\n", ((dondeEstaElPuntoBis(centro, 2, p1) == INTERNO)? OK : ERROR));
    printf("dondeEstaElPuntoBis(centro, 1, p1) => EXTERNO           \t%s\n", ((dondeEstaElPuntoBis(centro, 1, p1) == EXTERNO)? OK : ERROR));
    printf("dondeEstaElPuntoBis(centro, 1, p2) => EN_CIRCUNFERENCIA \t%s\n", ((dondeEstaElPuntoBis(centro, 1, p2) == EN_CIRCUNFERENCIA)? OK : ERROR));

    // Ejercicio 4

    /* 
        Quizá lo mejor sería escribir una función que compare matrices para que sea más simple escribir estos test. 
        En el caso de los tads, creo que habria que hacer lo mismo para cada una de las estructuras.
        Seguramente lo incluyamos en cada una de las prácticas.
    */

    // Ejercicio 5
    printf("\n\n\x1b[36m Tests de Ejercicio 4 \x1b[0m\n");
    printf("\x1b[34m ----- -- --------- -\x1b[0m\n\n");

   int edificio[CANT_PISOS][CANT_DEPARTAMENTOS] = {
        {3, 5, 2, 1, 0},
        {2, 4, 3, 0, 4},
        {1, 0, 1, 2, 1},
        {0, 1, 0, 0, 0},
        {1, 3, 2, 1, 1},
        {2, 2, 0, 1, 3},
        {1, 0, 0, 2, 1},
        {0, 0, 1, 1, 1}
    };

    printf("pisoConMasHabitantes(edificio) => 2              \t%d -> %s\n", pisoConMasHabitantes(edificio) , (pisoConMasHabitantes(edificio) == 2)? OK : ERROR);
    printf("cantidadDeViviendasVacias(edificio) => 12        \t%d -> %s\n",cantidadDeViviendasVacias(edificio), (cantidadDeViviendasVacias(edificio) == 12)? OK : ERROR);
    printf("promedioHabitantesPorVivienda(edificio) => 1.325 \t%f -> %s\n", promedioHabitantesPorVivienda(edificio), (fabs(promedioHabitantesPorVivienda(edificio) - 1.325) < 0.00001)? OK : ERROR);
    
    Vivienda v = viviendaConMasHabitantes(edificio);
    printf("viviendaConMasHabitantes(edificio) => 1B         \t%d%c -> %s\n", v.piso, v.depto, ((v.piso == 1 && v.depto == 'B')? OK : ERROR));

    // Ejercicio 6

    /* 
        Idem ejercicio 4
    */

    return 0;

}