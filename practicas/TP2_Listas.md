# Práctica 1: Recursividad

## Actividades de Aprendizaje

### Implementación de los TAD

Construir el TAD de listas correspondientes a las implementaciones de **"Arreglos"**, **"Punteros"** y **"Cursores"**
teniendo en cuenta:

a. Usar los `.h` definidos por la cátedra.

b. Se los debe implementar cada uno en un `.c` diferente. Es decir un archivo para cada implementación.

c. Se los debe probar y testear de forma tal que se pueda asegurar que el TAD funciona correctamente.

### Ejercicios a resolver con los TAD

> Los siguientes ejercicios siguientes deben ser implementados y resueltos en forma genérica, esto significa que se
> debería poder referenciar cualquiera de las implementaciones de lista (*arreglo, puntero o cursor*) y los mismos deben
> seguir en funcionamiento sin problemas.

> **En todos los casos es necesario analizar la complejidad algorítmica de las soluciones planteadas.**

#### Operaciones varias

Dada una lista implementar las siguientes funcionalidades:

- Invertir una lista devolviendo una nueva lista que tenga los elementos de la original pero ordenados desde el último al primero.

- Calcular el menor de los datos e indicar la posición ordinal.

- Calcular el dato máximo y contar la cantidad de veces que se repite.

- Obtener el promedio de los datos de una lista.

- Retornar otra lista con los números múltiplos de otro número que recibe como parámetro.

- Escribir un algoritmo que genere números al azar únicos dentro de la lista.

- Retornar una lista reflejada o espejada. La función recibirá un parámetro adicional según el cual se repetirá o no el último elemento de la lista original.

##### Casos de testeo

```C
L1 = (A, B, C)
reflejarLista(L1, False) -> (A, B, C, B, A)
reflejarLista(L1, True) -> (A, B, C, C, B, A)
```

> Implementar todas las funcionalidades de **forma iterativa y de forma recursiva** para poder analizar la diferencia en la complejidad algorítmica en cada caso.

#### Lista con números que son múltiplos

Dadas 2 listas (`L1` y `L2`) determinar si `L2` es múltiplo de `L1`.
Se considera múltiplo si cada elemento de `L2` se divide en forma exacta por el valor `L1` de la misma posición.

Si el resultado de la división retorna el mismo valor para cada posición se dice que `L2` es múltiplo de `L1` por un
***escalar***. El algoritmo debe contemplar esta situación.

> Nota: Para la implementación usar la clave como campo de datos solamente.

Ejemplo:

```C
L1 = (2, 5, 7, 3);
L2 = (8, 20, 28, 12);
```

Entonces `L2` es múltiplo por `L1` porque cada posición de `L2` se divide por el valor de `L1` de la misma posición en
forma exacta (sin decimales).

Para este caso `4` es el escalar de `L1`.

#### Comparación de listas

Dadas dos listas L1 y L2, se pide compararlas siempre en el sentido **L1 -> L2**. Por lo tanto, puede suceder que:

> `L1 > L2`, `L1 = L2` o `L1 < L2`.

La forma de obtener la comparación es por la clave, posición a posición, donde si L1 tiene más cantidad de claves
mayores que L2 se considera L1 > L2, por el contrario se considera L1 < L2, o de lo contrario L1 será igual a L2.

#### TAD Polinomio

Generar un TAD Polinomio, que guardando en una lista enlazada los coeficientes de un polinomio, pueda realizar las
siguientes operaciones:

Implementar el código necesario para, dada la lista de coeficientes y un cierto valor de `X` nos devuelva el valor del
polinomio para ese punto.

Luego realizar un proceso que dado un rango de valores de `X` y un valor de intervalo `I`, retorne una lista con los
valores de `Y` o `F(x)`.

Ejemplo: si el polinomio es `F(x) = 2x + 1`. Se pide retornar los valores de `F(x)` entre los `X` `-1` y `1` de a `0,5`.
Es decir se deberían retornar los valores de `F(-1)`, `F(-0,5)`, `F(0)`, `F(0,5)` y `F(1)`.

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
