#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "../TP0_Repaso.h"


#define ERROR "\x1b[31m Error \x1b[0m"

#define OK "\x1b[32m OK \x1b[0m"


int main()
{


    printf("\n\n\x1b[36m Tests de Ejercicio 1 \x1b[0m\n");
    printf("\x1b[34m ----- -- --------- -\x1b[0m\n\n");

    printf("dondeEstaElPunto(0, 0, 2, 1, 1) => INTERNO           \t%s\n", ((dondeEstaElPunto(0, 0, 2, 1, 1) == INTERNO)? OK : ERROR));
    printf("dondeEstaElPunto(0, 0, 1, 1, 1) => EXTERNO           \t%s\n", ((dondeEstaElPunto(0, 0, 1, 1, 1) == EXTERNO)? OK : ERROR));
    printf("dondeEstaElPunto(0, 0, 1, 1, 0) => EN_CIRCUNFERENCIA \t%s\n", ((dondeEstaElPunto(0, 0, 1, 1, 0) == EN_CIRCUNFERENCIA)? OK : ERROR));


    printf("\n\n\x1b[36m Tests de Ejercicio 2 \x1b[0m\n");
    printf("\x1b[34m ----- -- --------- -\x1b[0m\n\n");

    printf("digitoEnNumero(987, 7) => true  \t%s -> %s\n", digitoEnNumero(987, 7)? "true": "false", ((digitoEnNumero(987, 7) == true)? OK : ERROR));
    printf("digitoEnNumero(987, 6) => false \t%s -> %s\n", digitoEnNumero(987, 6)? "true": "false", ((digitoEnNumero(987, 6) == false)? OK : ERROR));


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

    return 0;

}