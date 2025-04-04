# Práctica de repaso e introducción a C

## Actividades de Aprendizaje

> Para la resolución de las prácticas, cada equipo debe iniciar un nuevo repositorio utilizando [este repositorio](https://github.com/unlu-prog-2/guia-base) como plantilla.

### Ejercicio 1

Escribir una función que dadas:

- las coordenadas `(xc, yc)` de un punto que consideramos centro de una circunferencia;
- el valor del radio de la circunferencia;
- las coordenadas `(xp, yp)` de un punto del plano;

Informe si el punto `(xp, yp)` está ubicado sobre la circunferencia, o dentro o fuera del círculo.

Nota: Se utilizará un enumerado Referencia que incluirá las opciones INTERNO, EXTERNO y EN_CIRCUNFERENCIA.

```c

enum Referencia
{
    INTERNO = -1, // el punto está dentro del círculo
    EN_CIRCUNFERENCIA, // el punto está en la circunferencia
    EXTERNO // el punto está fuera del círculo
};

enum Referencia dondeEstaElPunto(int xc, int yc, int rc, int xp, int yp);
```

#### Casos de prueba

```c
    dondeEstaElPunto(0, 0, 2, 1, 1 ); // INTERNO
    dondeEstaElPunto(0, 0, 1, 1, 1 ); // EXTERNO
    dondeEstaElPunto(0, 0, 1, 1, 0 ); // EN_CIRCUNFERENCIA
```

### Ejercicio 2

Necesitamos una función que reciba un valor entero `n` y un dígito `d` (entero entre 0 y 9), y confirme que dicho dígito `d` está (o no) entre los del número `n`.

```c
bool digitoEnNumero(long n, short d);
```

#### Casos de prueba EJ2

```c
    digitoEnNumero(987, 7); // True
    digitoEnNumero(987, 6); // False
```

### Ejercicio 3

Refactorizar el **[Ejercicio 1](#ejercicio-1)** para que los parámetros recibidos sean:

```c
    enum Referencia dondeEstaElPuntoBis(Punto centroC, int rc, Punto p);
```

donde `Punto` se define así:

```c
    struct Punto {
        int x, y;
    };
```

### Casos de prueba EJ3

```c
    struct Punto centro = {0, 0};
    struct Punto p1 = {1, 1};
    struct Punto p2 = {1, 0};

   dondeEstaElPuntoBis(centro, 2, p1) // INTERNO
   dondeEstaElPuntoBis(centro, 1, p1) // EXTERNO
   dondeEstaElPuntoBis(centro, 1, p2) // EN_CIRCUNFERENCIA
```

### Ejercicio 4

Es necesario administrar los datos de los jugadores de un equipo de futbol (nombre, edad, partidosJugados).

Se pide escribir funciones que informen:

- Los jugadores ordenados desde el que más partidos jugó hasta el que menos.
- Los jugadores ordenados desde el más joven al más grande.
- La cantidad de partidos jugados en promedio dada una edad.

```c
    #define TAMANO_STRING 50
    #define CANT_JUGADORES 11

    struct Jugador {
        char nombre[TAMANO_STRING];
        int edad, partidosJugados;
    };

    struct Jugador *jugadoresOrdenadosPorCantDePartidos(struct Jugador equipo[CANT_JUGADORES]);
    struct Jugador *jugadoresOrdenadosPorEdad(struct Jugador equipo[CANT_JUGADORES]);
    float promedioDePartidosJugados(struct Jugador equipo[CANT_JUGADORES], int edad);
```

#### Casos de prueba EJ4

```c
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

    jugadoresOrdenadosPorCantDePartidos(equipo);
    //    {
    //        {"Ronaldo", 37, 900},
    //        {"Messi", 34, 800},
    //        {"Neuer", 35, 800},
    //        {"Lewandowski", 33, 700},
    //        {"Ramos", 35, 650},
    //        {"De Bruyne", 30, 600},
    //        {"Neymar Jr.", 29, 500},
    //        {"Salah", 29, 400},
    //        {"van Dijk", 30, 400},
    //        {"Mbappe", 22, 200},
    //        {"Davies", 20, 100}
    //    }

    jugadoresOrdenadosPorEdad(equipo); 
    //    {
    //        {"Davies", 20, 100},
    //        {"Mbappe", 22, 200},
    //        {"Neymar Jr.", 29, 500},
    //        {"Salah", 29, 400},
    //        {"De Bruyne", 30, 600},
    //        {"van Dijk", 30, 400},
    //        {"Lewandowski", 33, 700},
    //        {"Messi", 34, 800},
    //        {"Ramos", 35, 650},
    //        {"Neuer", 35, 800},
    //        {"Ronaldo", 37, 900},
    //    }
    
    promedioDePartidosJugados(equipo, 35); // 725.0
```

### Ejercicio 5

Se quiere controlar el número de habitantes de un edificio con 8 pisos y 5 departamentos (A, B, C, D y E) en cada piso.
Se pide escribir funciones que informen:

- el departamento que más habitantes tiene de todo el edificio.
- el piso que más habitantes tiene de todo el edificio.
- la cantidad de viviendas vacias.
- el promedio de habitantes por departamento.

```c
#define CANT_PISOS 8
#define CANT_DEPARTAMENTOS 5

typedef struct ViviendaRep {
    short piso;
    char depto;
} Vivienda;

int pisoConMasHabitantes(int edificio[CANT_PISOS][CANT_DEPARTAMENTOS]);
int cantidadDeViviendasVacias(int edificio[CANT_PISOS][CANT_DEPARTAMENTOS]);
float promedioHabitantesPorVivienda(int edificio[CANT_PISOS][CANT_DEPARTAMENTOS]);
Vivienda viviendaConMasHabitantes(int edificio[CANT_PISOS][CANT_DEPARTAMENTOS]);
void cantidadDeViviendasVaciasPorPiso(int edificio[CANT_PISOS][CANT_DEPARTAMENTOS], int vaciasPorPiso[CANT_PISOS]);
void viviendasVacias(int edificio[CANT_PISOS][CANT_DEPARTAMENTOS], Vivienda viviendasVacias[CANT_PISOS * CANT_DEPARTAMENTOS]);
```

#### Casos de prueba EJ5

```c
    int edificio[CANT_PISOS][CANT_DEPARTAMENTOS] = {
        {3, 5, 2, 1, 0},
        {2, 4, 3, 0, 2},
        {1, 0, 1, 2, 1},
        {0, 1, 0, 0, 0},
        {1, 3, 2, 1, 1},
        {2, 2, 0, 1, 3},
        {1, 0, 0, 2, 1},
        {0, 0, 1, 1, 1}
    };

    pisoConMasHabitantes(edificio)             // 2
    cantidadDeViviendasVacias(edificio)        // 12
    cantidadDeViviendasVaciasPorPiso(edificio) // 1 => 1   2 => 1   3 => 1   4 => 4   5 => 0   6 => 1   7 => 2   8 => 2
    viviendasVacias(edificio)                  // 1E  2D  3B  4A  4C  4D  4E  6C  7B  7C  8A  8B
    promedioHabitantesPorVivienda(edificio)    // 1.325
    viviendaConMasHabitantes(edificio)         // 1B
```

### Ejercicio 6

Dado un archivo de texto que contiene datos de minutos trabajos por personal de una consultora de sistemas informáticos a diferentes clientes, se pide obtener los totales por cliente/año en forma de grilla como se muestra debajo.

El archivo contiene los siguientes datos: `Cliente Año Mes Minutos_Trabajados`. El separador de campos es un `Tabulador`.

A continuación se muestra un pequeño ejemplo. Si tuviera el siguiente contenido:

```txt
    // Cliente Anio    Mes Minutos_Trabajados
        1000    2019    01  1001
        1000    2019    02  50
        1001    2020    02  120
        1001    2021    03  96
        1001    2022    01  48
    ...
```

La tabla a producir por el programa debería ser:

| Clientes / Años | 2019 | 2020 | 2021 | 2022 |
|-----------------|------|------|------|------|
| 1000            | 1051 |      |      |      |
| 1001            |      | 120  | 96   | 48   |

La guía incluye un TXT con estos datos según lo especificado a procesar con el nombre `TP0_EJ6.txt` que contiene aprox. unas 65500 filas a procesar.

La función a implementar tiene la siguiente firma:

```c
#define CANT_MAX_ANIOS 100
#define CANT_MAX_CLIENTES 10000
#define ANIO_INICIO 2013

struct Cliente {
    int id;
    int totalesPorAnio[CANT_MAX_ANIOS];
};

void procesarArchivo(const char *nombreArchivo);
```

---

## Pruebas de escritorio

> Los programas siguientes son presentados sin el texto común `main() {...}`.

En cada uno de los siguientes casos, sin ejecutar el código, interpretar y justificar qué es lo que se imprime en la salida estándar.

### Prueba 1

```c
    int i = 4, x = 5;
    for (i = 0; i < 10; i++) {
        if ( i < x )
            printf("%d ", i);
        else
            printf("%d ", i-x);
    }
```

### Prueba 2

```c
    int array[10], i = 0;
    while (i<10) {
        array[i] = i * i;
        i++;
    }
    do {
        printf("%d", array[--i]);
    } while (i >= 0);
```

### Prueba 3

```c
    int mi_funcion(int x) {
        x=x*5;
        return x;
    }

    void main(void){
        int y = 3, x = 4;
        printf("La función devuelve %d", mi_funcion(y));
        printf("La variable vale %d", x);
    }
```

### Prueba 4

```c
    int *punta, *puntb;
    int x = 7;
    int y = 5;
    punta = &x;
    *punta = 3;
    puntb = &y;
    *puntb = x;
    x = 9;
    printf("%d, %d",*puntb, *punta);
```

### Prueba 5

```c
    int datos(int x, float y, char c)
    {
        printf("%d %f %c", x, y, c);
        x = 8;
        y = 4.2;
        c = 'g';
        return x;
    }

    void main(void)
    {
        int x = 9;
        float y = 44.6;
        char c = 'a';
        x = datos (x, y, c);
        printf("%d %d %f %c", x, y, c);
    }
```

### Prueba 6

```c
    struct medidas{
        int alto, ancho, largo;
    };

    void main(void){
        int i;
        struct medidas cajas[5];
        for(i=0;i<5;i++) {
            cajas[i].alto = 4;
            cajas[i].ancho = 2 * i;
            cajas[i].largo = i + 1;
        }
        for(i=0;i<5;i++) {
            printf("Medidas de cajas Nº%d: %d alto, %d ancho, %d largo", cajas[i].alto, cajas[i].ancho, cajas[i].largo);
        }
    }
```
