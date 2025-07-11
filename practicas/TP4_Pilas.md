# Práctica 3: Pilas

## Actividades de Aprendizaje

### Implementación de los TAD

Construir el TAD de listas correspondientes a las implementaciones de **"Arreglos"** y **"Punteros"**
teniendo en cuenta:

a. Usar los `.h` definidos por la cátedra.

b. Se los debe implementar cada uno en un `.c` diferente. Es decir un archivo para cada implementación.

c. Se los debe probar y testear de forma tal que se pueda asegurar que el TAD funciona correctamente.

### Ejercicios a resolver con los TAD

> Los siguientes ejercicios siguientes deben ser implementados y resueltos en forma genérica, esto significa que se debería poder referenciar cualquiera de las implementaciones de lista (*arreglos o punteros*) y los mismos deben seguir en funcionamiento sin problemas.
>
> Implementar todos los ejercicios que puedan de **forma iterativa y de forma recursiva** para poder analizar la diferencia en la **complejidad algorítmica** en cada caso.
>
> En todos los casos es imprescindible no perder la pila con los datos originales.

#### Buscar elemento

Dada una pila, buscar una clave y determinar si existe en la Pila.

```c
    bool buscarElemento(Pila p, TipoElemento e);
```

Casos de prueba

```c
    Pila p = (1, 6, 3, 7, 4, 8, 3);
    buscarElemento(p,  1); // true
    buscarElemento(p, 13); // false
```

#### Insertar elemento

Dada una pila, colocar en una posición ordinal determinada, recibida por parámetro, un
nuevo elemento (Insertar un elemento nuevo).

```c
    void insertarElemento(Pila p, TipoElemento e, int pos);
```

Casos de prueba

```c
    Pila p = (1, 6, 13, 3, 7, 4, 8, 3);
    // Se insertan en ese orden, por lo cual el tope sería el 3.
    
    //                               9º 8º 7º  6º 5º  4º 3º 2º 1º     
    insertarElemento(p, 5, 20);  // (1, 6, 13, 3, 20, 7, 4, 8, 3)
    // Se empieza a contar desde el tope
    insertarElemento(p, 1, 30);  // (1, 6, 13, 3, 20, 7, 4, 8, 3, 30)
```

#### Eliminar elemento

Eliminar de una pila un elemento dado (primera ocurrencia encontrada por la clave).

```c
    void eliminarElemento(Pila p, int clave);
```

Casos de prueba

```c
    Pila p = (1, 6, 3, 7, 4, 8, 3);
    eliminarElemento(p, 3);  // (1, 6, 3, 7, 4, 8)
    eliminarElemento(p, 3);  // (1, 6, 7, 4, 8)
    eliminarElemento(p, 1);  // (6, 7, 4, 8)
```

#### Switch

Intercambiar los valores de 2 posiciones ordinales de la pila, por ejemplo la 2da con la 4ta.

```c
    void intercambiarElementos(Pila p, int pos1, int pos2);
```

Casos de prueba

```c
    Pila p = (1, 6, 3, 7, 4, 8, 3);
    intercambiarElementos(p, 2, 6);  // (1, 8, 3, 7, 4, 6, 3)
    intercambiarElementos(p, 1, 5);  // (4, 8, 3, 7, 1, 6, 3)
```

#### Copia

Duplicar el contenido de una pila.

```c
    Pila copiar(Pila p);
```

Casos de prueba

```c
    Pila p = (1, 6, 3, 7, 4, 8, 3);
    copiar(p);  // (1, 6, 3, 7, 4, 8, 3)
```

#### Contar elementos

Contar los elementos de la pila.

```c
    int contarElementos(Pila p);
```

Casos de prueba

```c
    Pila p = (1, 6, 3, 7, 4, 8, 3);
    contarElementos(p);  // 7
```

#### Comparar pilas

Dadas dos pilas, determinar si sus contenidos son exactamente iguales (solo por la clave), sin destruirlas. Utilizar para la resolución del problema una única pila auxiliar.

```c
    bool compararPilas(Pila p1, Pila p2);
```

Casos de prueba

```c
    Pila p1 = (1, 6, 3, 7, 4, 8, 3);
    Pila p2 = (1, 6, 3, 7, 4, 8, 3);
    Pila p3 = (6, 1, 3, 7, 4, 8, 3);
    Pila p4 = (5, 6, 3, 7, 4, 8, 3);
    compararPilas(p1, p2);  // true
    compararPilas(p2, p1);  // true
    compararPilas(p1, p3);  // false
    compararPilas(p1, p4);  // false
    compararPilas(p2, p3);  // false
    compararPilas(p3, p4);  // false
```

#### Cambio de Base

Construir un algoritmo que, utilizando el TAD Pila, permita convertir un número
decimal pasado como parámetro, a su correspondiente valor expresado en una base
de 2 a 16 (hexadecimal).

```c
    char* cambioDeBase(int numero, int base);
```

Casos de prueba

```c
    cambioDeBase(10, 2);    // "1010"
    cambioDeBase(10, 3);    // "101"
    cambioDeBase(16, 3);    // "121"
    cambioDeBase(567, 16);  // "237"
    cambioDeBase(759, 16);  // "2F7"
```

#### Invertir Pila

Invertir el contenido de una pila sin destruir la pila original.

Se debe retornar la nueva pila invertida y la original no se debe perder.

```c
    Pila invertirPila(Pila p);
```

Casos de prueba

```c
    Pila p1 = (1, 6, 3, 7, 4, 8, 3);
    invertirPila(p1);  // (3, 8, 4, 7, 3, 6, 1)
```

#### Eliminar todas las ocurrencias

Dada una pila eliminar todas las ocurrencias de un determinado
ítem sin perder la pila original. Deberá retornar una nueva pila sin el ítem en
consideración.

```c
    Pila eliminarTodasOcurrencias(Pila p, int clave);
```

Casos de prueba

```c
    Pila p = (1, 5, 7, 1, 3, 1, 8);
    eliminarTodasOcurrencias(p, 1);  // (5, 7, 3, 8)
    eliminarTodasOcurrencias(p, 8);  // (1, 5, 7, 1, 3, 1)
```

#### Elementos en común

Dada dos pilas realizar una función que permita determinar los elementos que tienen en común. Debe retornar una nueva pila con esos elementos (los que están en ambas pilas) sin perder las pilas originales.

```c
    Pila elementosEnComun(Pila p1, Pila p2);
```

Casos de prueba

```c
    Pila p1 = (1, 4, 7, 9, 8);
    Pila p2 = (4, 1, 6, 9, 3);
    elementosEnComun(p1, p2);  // (1, 4, 9)
```

#### Contar apariciones

Dada una pila con valores repetidos, se desea obtener una nueva pila con todos los valores (sin repetición) y la cantidad de veces que aparecen. No debe perderse la pila original. El proceso recibe la pila con las repeticiones y retorna una nueva pila.

Usar el `valor` del `TipoElemento` guardar la cantidad de ocurrencias en la pila resultado.

```c
    Pila contarRepetidos(Pila p);
```

Casos de prueba

```c
    Pila p = (1, 2, 1, 3, 4, 5, 2, 1, 3, 5, 5);
    contarRepetidos(p);  // (1:3, 2:2, 3:2, 4:1, 5:3)
```

### Ejercicios Interesantes

#### Mazo de cartas

Modelar un TAD que represente un mazo de cartas españolas y programar las siguientes funcionalidades:

- Crear Mazo:

    Generar una pila de cartas. Utilizar el TAD `TipoElemento` donde la clave es el `número` de la carta y el valor es el `palo` de la carta.

- Barajar:

    Mezclar las cartas aleatoriamente, encontrando un método que emule la mezcla que se hace a mano de las cartas.

- Repartir cartas:

    Generar N listas de cartas repartidas como se hace con un mazo real.

- Tirar Reyes:

    Dado una lista de 4 jugadores, repartir las cartas de a un jugador, y realizar parejas con los 2 primeros jugadores que reciben algún rey, y los 2 jugadores restantes forman la otra pareja. Si la lista es de 6 jugadores el equipo se forma con los 3 primeros que reciban reyes y los otros 3 quedan en el segundo equipo.

- Mayor o Menor

    Dada un mazo de cartas y una lista de apuestas, implementar un algoritmo que corrobore cuántas apuestas a Mayor o Menor ganó el apostador.
    El juego consta de adivinar si la carta siguiente en el mazo es mayor o menor a la que se encuentra en la mesa. El juego comienza dando vuelta sobre la mesa una carta y a partir de esa comienzan las apuestas.
    Por ejemplo si el mazo tiene en este orden las cartas: (3B, 7E, 9O, 10E, 5E, 1C, 3B) y el jugador apostó en este orden (MAYOR, MENOR, MENOR, MENOR, MENOR, MAYOR) se debe retornar que ganó 4 veces y que perdió 2.
