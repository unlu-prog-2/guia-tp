# Práctica 3: Listas

**En cada caso se debe implementar el TAD descripto y una aplicación que, utilizando el tipo abstracto de dato, permita
al usuario el ingreso de una o más instancias (según sea necesario), la aplicación de cualquiera de las operaciones y
luego la obtención del resultado.**

## Para empezar a trabajar

Construir la TAD de listas correspondientes a las implementaciones de “Arreglos”, “Punteros” y “Cursores” teniendo en cuenta:

-   Definir las estructuras de datos en función a las especificaciones dadas en clase y documentadas en los PDF que se encuentran en el aula virtual de la asignatura.
-   Se las debe implementar mediante objetos y respetar estrictamente los nombres y parámetros de cada una de las operaciones del TAD especificadas.
-   Se las debe probar y testear de forma tal que se pueda asegurar que la TAD funciona correctamente.

**Aclaración:**

Los siguientes ejercicios siguientes deben ser implementados y resueltos en forma genérica, esto significa que se debería poder referenciar cualquiera de las implementaciones de lista (arreglo, puntero o cursor) y los mismos deben seguir en funcionamiento sin problemas.

## Ejercicios de Práctica opcionales

### Ejercicio 1

Dada una lista cargada con valores al azar realizar los siguientes ejercicios:

-   Mostrar una lista desde el último elemento al primero.
-   Que calcule el mayor de los datos e indique la posición ordinal.
-   Que calcule el dato mínimo y cuente la cantidad de veces que se repita.
-   Que obtenga el promedio de los datos de una lista. El proceso debe ser recursivo.
-   Que retorne otra lista con los números múltiplos de otro número que recibe como parámetro. El proceso debe ser recursivo.
-   Generar un algoritmo que genere números al azar únicos dentro de la lista.

### Ejercicio 2

Dadas 2 listas (L1 y L2) determinar si L2 es divisible por L1. Se considera divisible si cada elemento de L2 se divide en forma exacta por el valor L1 de la misma posición.

> **Por Ejemplo:** si _L1 = (2, 5, 7, 3)_ y _L2 = (8, 20, 28, 12)_ entonces _L2_ es divisible por _L1_ porque cada posición de _L2_ se divide por el valor de _L1_ de la misma posición en forma exacta. Si el resultado de la división retorna el mismo valor para cada posición se dice que _L2_ es múltiplo de _L1_ por un **_escalar_**. Para este caso _4_ es el ** _escalar_** de _L1_. **El algoritmo debe contemplar esta situación**.

### Ejercicio 3

Dadas dos listas, informar si son iguales. Se consideran iguales si cada elemento de _L1_ está en _L2_ sin importar la posición, ni la cantidad de ocurrencias. Por otro lado todos los elementos de _L2_ también deben estar en _L1_, sin importar la posición, ni la cantidad de ocurrencias. Determinar la complejidad algorítmica de la solución empleada.

### Ejercicio 4

Generar un algoritmo que guarde en una lista enlazada los coeficientes de un polinomio.

#### Evaluarlo en un punto

Realizar una función que dada un cierto valor de _X_ nos devuelva el valor del polinomio para ese punto.

#### Valores característicos

Agregar al tad funciones que devuelvan el “grado del polinomio”, “el coeficiente principal” y la “ordenada al origen”.

#### Factorización

Agregar al tad funciones que devuelvan listas con la factorización del polinomio según los siguientes casos de factoreo:

-   Factor común
-   Binomio cuadrado perfecto

#### Evaluarlo en un rango

Dado un rango de valores de “X” y un valor de intervalo “I”, retorne una lista con los valores de “Y” o “F(x)”.

> **Ejemplo**: si el polinomio es F(x) = 2x + 1. Se pide retornar los valores de F(x) entre los “X” -1 y 1 de a “0,5”. Es decir se deberían retornar los valores de F(-1), F(-0,5), F(0), F(0,5) y F(1).

#### Operar 2 polinomios

Resolver la “suma”, “resta” y “multiplicación de polinomios”.

-   Determinar la complejidad algorítmica de la solución empleada.
-   ¿Existe una mejor forma de resolverlo de tal forma de reducir la complejidad algorítmica?

### Ejercicio 5

Generar un algoritmo que determine si una lista es sublista de otra. Se considera que es una sublista si todos los valores de la segunda se encuentran dentro de la primera sin importar el orden o posición de cada elemento. Se pide además determinar la complejidad algorítmica de la solución.

> **Ejemplo:** si _L1_ contiene los elementos _(A, Z, B, D, H, K)_ y _L2_ contiene los elementos _(D, K, A)_ se dice que _L2_ es sublista de _L1_.

### Ejercicio 6

Implementar un algoritmo recursivo genérico que reciba una lista y la devuelva ordenada de manera decreciente utilizando burbujeo. El método se define de la siguiente manera:

>     PROCEDURE _Burbujeo(var L:Lista; P, Q: PosicionLista);_

Donde _P_ es la posición del primer elemento de la lista y _Q_ la del segundo.

## Ejercicios para entregar

### Ejercicio 7

Se necesita saber el puntaje que suma un pacman en su recorrigo hasta llegar a la terminar el nivel.
En su recorrido se puede encontrar con frutas con distinto puntaje y con el activador del bonus que duplica todos los puntos de las cosas que coma durante 10 pasos y que habilita la posibilidad de comerse el fantasma. Si se _come el fantasma_ si el bonus activado: Pierde.
Escribir un algoritmo que permita calcular el puntaje dada una lista de objetos que se come el pacman.
Para el calculo tener en cuenta el siguiente listado de objetos que se come el pacman: (puntito: 1, frutilla: 10, banana: 30, cerezas: 50, fantasma: 100).

> **Por ejemplo:**<br />
> (puntito,frutilla,puntito,puntito,banana,puntito,puntito,fantasma,puntito,puntito,cerezas,puntito) -> Perdiste.<br />
> (puntito,puntito,puntito,banana,puntito,puntito,bonus,puntito,puntito,fantasma,puntito,puntito,cerezas,puntito) -> 345.

### Ejercicio 8

Generar un TAD que permita administrar la agenda de un ejecutivo. Se tiene un listado de tiempo se pretende dedicar a cada actividad: (almuerzo de negocios:120; atender cliente: 10; atender cliente VIP: 30; reunion con gerente:30; etc).

-   Programar las funciones necesarias que permitan insertar actividades a la agenda, controlando que no se superpongan actividades, guardando solo que actividad se agenda y el horario de comienzo. _Se pide que esta lista se mantenga ordenada por el horario._

    > **Por ejemplo:**
    > (reunion con gerente, 9:30; atender cliente VIP, 10:30; almuerzo de negocios, 12:0; atender cliente VIP, 16: 30;atender Cliente, 17:10).

-   Agregar una funcion que permita saber que está haciendo el ejecutivo dado un horario.

    > **Por ejemplo:**<br />
    > 12:45 -> almuerzo de negocios.<br />
    > 17:45 -> libre.

-   Un índice que le interesa a los ejecutivos es el porcentaje de ocupación de su día. Agregar una función que calcule este indice

### Ejercicio 9

Generar una lista de lista que permita almacenar como clave la patente de un vehículo (campo clave) y como valores de la clave las multas que se le realizaron a dicho vehículo. Se debe guardar como datos de la multa el número de acta (campo clave), la fecha y el importe (como valores), estado (Pendiente, Abonada, Anulada).

Se pide:

-   Dado un vehículo determinar el total adeudado por multas, la multa más antigua y la más reciente (comparable por las fechas).
-   ¿Cuál es el vehículo que mayor cantidad de infracciones?
-   ¿Cuál es el que vehículo que más deuda de infracciones tiene?
-   ¿Existe algún vehículo/s que no tenga deuda de infracciones?
