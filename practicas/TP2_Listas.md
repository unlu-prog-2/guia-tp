# Práctica 2: Listas

## Actividades de Aprendizaje

### Implementación de los TAD

Construir el TAD de listas correspondientes a las implementaciones de **"Arreglos"**, **"Punteros"** y **"Cursores"**
teniendo en cuenta:

a. Usar los `.h` definidos por la cátedra.

b. Se los debe implementar cada uno en un `.c` diferente. Es decir un archivo para cada implementación.

c. Se los debe probar y testear de forma tal que se pueda asegurar que el TAD funciona correctamente.

### Ejercicios a resolver con los TAD

> Los siguientes ejercicios siguientes deben ser implementados y resueltos en forma genérica, esto significa que se debería poder referenciar cualquiera de las implementaciones de lista (*arreglo, puntero o cursor*) y los mismos deben seguir en funcionamiento sin problemas.
> Implementar todas los ejercicios que puedan de **forma iterativa y de forma recursiva** para poder analizar la diferencia en la **complejidad algorítmica** en cada caso.

#### Invertir lista

Invertir una lista devolviendo una nueva lista que tenga los elementos de la original pero ordenados desde el último al primero.

```C
    Lista invertirLista(Lista l);
```

#### Casos de prueba

```C
lista => [6, 7, 8]

invertirLista(lista) -> [8, 7, 6]
```

### Encontrar el menor de la lista

Calcular el menor de los datos e indicar la posición ordinal.

```C
struct ElementoYPosicion {
    int valor;
    int ordinal;
};

struct ElementoYPosicion menorYPosicion(Lista l);
```

#### Casos de prueba

```C
lista => [7, 6, 8]

menorYPosicion(lista) -> Menor: 6; Ordinal: 2
```

### Encontrar el mayor de la lista

Calcular el dato máximo y contar la cantidad de veces que se repite.

```C
struct ElementoYOcurrencias {
    int valor;
    int ocurrencias;
};

struct ElementoYOcurrencias mayorYOcurrencias(Lista l);
```

#### Casos de prueba

```C
lista => [7, 6, 8, 7, 8, 8, 8, 8, 6]

mayorYOcurrencias(lista) -> Mayor: 8; Ocurrencias: 5
```

### Calcular promedio

 Obtener el promedio de los datos de una lista.

 ```C
    double promedio(Lista l);
 ```

 #### Casos de prueba

```C
lista => [7, 6, 8, 7, 8, 8, 8, 8, 6, 6]

promedio(lista) -> 7.2
```

### Calcular Múltiplos

Retornar otra lista con los números múltiplos de otro número que recibe como parámetro.

```C
    Lista multiplos(Lista l, int n);
```

 #### Casos de prueba

```C
    lista => [7, 6, 8, 1]

    multiplos(lista,3) -> [21, 18, 24, 3]
```

### Lista de números aleatorios

Escribir un algoritmo que genere números al azar únicos dentro de la lista.

```C
    Lista numerosAlAzar(int cantidad);
```

 #### Casos de prueba

```C
    numeroAlAzar(3) -> Controlar que sean 3 elementos con valores distintos.
```

### Espejito, espejito

Retornar una lista reflejada o espejada. La función recibirá un parámetro adicional según el cual se repetirá o no el último elemento de la lista original.

#### Casos de prueba

```C
lista => [6, 7, 8]

reflejarLista(lista, false) -> [6, 7, 8, 7, 6]
reflejarLista(lista, true) -> [6, 7, 8, 8, 7, 6]
```

#### Lista con números que son múltiplos

Dadas 2 listas (`L1` y `L2`) determinar si `L2` es múltiplo de `L1`.
Se considera múltiplo si cada elemento de `L2` se divide en forma exacta por el valor `L1` de la misma posición.

Si el resultado de la división retorna el mismo valor para cada posición se dice que `L2` es múltiplo de `L1` por un
***escalar***. El algoritmo debe contemplar esta situación.

> Nota: Para la implementación usar la clave como campo de datos solamente.


Entonces `L2` es múltiplo por `L1` porque cada posición de `L2` se divide por el valor de `L1` de la misma posición en
forma exacta (sin decimales).

Para este caso `4` es el escalar de `L1`.

```C
    bool listaEsMultiplo(Lista l1, Lista l2);
```

#### Casos de prueba

```C
    lista1 = [2, 5, 7, 3];
    lista2 = [8, 20, 28, 12];
    lista3 = [8, 21, 28, 12];

    listaEsMultiplo(lista1, lista2) -> true
    listaEsMultiplo(lista1, lista3) -> false
```

#### Comparación de listas

Dadas dos listas L1 y L2, se pide compararlas siempre en el sentido **L1 -> L2**. Por lo tanto, puede suceder que:

> `L1 > L2`, `L1 = L2` o `L1 < L2`.

La forma de obtener la comparación es por la clave, posición a posición, donde si L1 tiene más cantidad de claves
mayores que L2 se considera L1 > L2, por el contrario se considera L1 < L2, o de lo contrario L1 será igual a L2.

```C
    enum Comparacion {
        MENOR = -1,
        IGUAL = 0,
        MAYOR = 1
    };

    enum Comparacion compararListas(Lista l1, Lista l2);
```

#### Casos de prueba

```C
    lista1 = [2, 5, 7, 3];
    lista2 = [8, 20, 28, 12];
    lista3 = [1, 6, 28, 2];

    listaEsMultiplo(lista1, lista2) -> MENOR
    listaEsMultiplo(lista1, lista3) -> IGUAL
    listaEsMultiplo(lista2, lista3) -> MAYOR
```

#### TAD Polinomio

Generar un TAD Polinomio, que guardando en una lista enlazada los coeficientes de un polinomio, pueda realizar las
siguientes operaciones:

Implementar el código necesario para, dada la lista de coeficientes y un cierto valor de `X` nos devuelva el valor del
polinomio para ese punto.

Luego realizar un proceso que dado un rango de valores de `X` y un valor de intervalo `I`, retorne una lista con los
valores de `Y` o `F(x)`.

Ejemplo: si el polinomio es `F(x) = 2x + 1`. Se pide retornar los valores de `F(x)` entre los `X` `-1` y `1` de a `0,5`.
Es decir se deberían retornar los valores de `F(-1)`, `F(-0,5)`, `F(0)`, `F(0,5)` y `F(1)`.

```C
    struct Polinomio {
        Lista coeficientes;
    };

    struct PuntoXY {
        double x, y;
    };

    double evaluar(struct Polinomio p, double x);

    Lista valores(struct Polinomio p, int desde, int hasta, double paso);
```

#### Casos de prueba

```C
    polinomio1 => [1, 2] //(o sea 2x + 1)
    polinomio2 => [3, 1, 2] //(o sea 2x^2 + x + 3)

    evaluar(polinomio1, 0.5) -> 2.0
    evaluar(polinomio1, 1.0) -> 3.0
    evaluar(polinomio2, 2.0) -> 13.0

    valores(polinomio1, -2, 2, 0.5) -> [(-2.0; -3.0), (-1.5; -2.0), (-1.0; -1.0), (-0.5; 0.0), (0.0; 1.0), (0.5; 2.0), (1.0; 3.0), (1.5; 4.0), (2.0; 5.0)
```

### Ejercicios Interesantes

#### Sublistas

Generar un algoritmo que determine si una lista es sublista de otra. Se considera que es una sublista si todos los
valores de la segunda se encuentran dentro de la primera sin importar el orden o posición de cada elemento. La
comparación es solo por la clave. Se pide además determinar la complejidad algorítmica de la solución.

Ejemplo: si `L1` contiene los elementos (A, Z, B, D, H, K) y `L2` contiene los elementos (D, K, A) se dice que `L2` es
sublista de `L1`.

#### Subconjuntos que suman N

Definir una función recursiva que dado un conjunto devuelva una lista con los subconjuntos del mismo tales que la suma
de los elementos de cada subconjunto
sumen una cantidad dada. Por ejemplo: Dado el conjunto A = {10, 3, 1, 7, 4, 2}. La
lista de los conjuntos que sumen 7 sería: R = [{3, 4}, {1, 4, 2}, {7}]
Ejemplos:

```C
subconjuntosQueSumanN ({10, 3, 1, 7, 4, 2}, 7) => { {3, 4}, {1, 4, 2}, {7} }
subconjuntosQueSumanN ({10, 3, 1, 7, 4, 2}, 10) => { {10}, {3,7}, {3, 1, 4, 2}, {1, 7, 2} }
```
