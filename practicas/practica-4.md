# Práctica 4: Pilas

**En cada caso se debe implementar el TAD descripto y una aplicación que,
utilizando el tipo abstracto de dato, permita al usuario el ingreso de una o más
instancias (según sea necesario), la aplicación de cualquiera de las operaciones
y luego la obtención del resultado.**

## Para empezar a trabajar

Construir el TAD de pilas correspondientes a las implementaciones de “Arreglos”,
“Punteros” y “Cursores” teniendo en cuenta:

- Definir las estructuras de datos en función a las especificaciones dadas en
  clase y documentadas en los PDF que se encuentran en el aula virtual de la
  asignatura.
- Se las debe implementar mediante objetos y respetar estrictamente los nombres
  y parámetros de cada una de las operaciones del TAD especificadas.
- Se lo debe probar y testear de forma tal que se pueda asegurar que el TAD
  funciona correctamente.

**Aclaración:**

Los siguientes ejercicios siguientes deben ser implementados y resueltos en
forma genérica, esto significa que se debería poder referenciar cualquiera de
las implementaciones de lista (arreglo, puntero o cursor) y los mismos deben
seguir en funcionamiento sin problemas.

## Ejercicios de Práctica opcionales

### Ejercicio 1

Dada una pila cargada con valores al azar realizar los siguientes ejercicios:

- Buscar una clave y determinar si existe en la Pila.
- Colocar en el fondo de una pila un nuevo elemento.
- Eliminar de una pila todas las ocurrencias de un elemento dado.
- Intercambiar los valores del tope y el fondo de una pila.
- Duplicar el contenido de una pila.
- Contar los elementos de la pila.

### Ejercicio 2

Dadas dos pilas, determinar si sus contenidos son exactamente iguales, sin
destruirlas. Utilizar para la resolución del problema una única pila auxiliar.

Determinar la complejidad algorítmica de la solución.

### Ejercicio 3

Invertir el contenido de una pila sin destruir la pila original. Se debe
retornar la nueva pila invertida y la original no se debe perder.

Determinar la complejidad algorítmica de la solución.

### Ejercicio 4

Dada una pila con valores al azar eliminar todas las ocurrencias de un
determinado ítem sin perder la pila original. Deberá retornar una nueva pila sin
el ítem en consideración. Resolver iterativamente y recursivamente.

Determinar la complejidad algorítmica de ambas soluciones.

> Ejemplo: si `P` contiene `(A, B, A, C, D, A, F)` y el ítem a eliminar es `A`
> entonces la pila resultante sería `(B, C, D, F)`.

### Ejercicio 5

Dada una pila con valores al azar realizar una operación que permite insertar un
ítem en una determinada posición ordinal. El proceso recibe la Pila, el dato a
insertar y la posición ordinal y retorna la nueva pila.

Determinar la complejidad algorítmica de la solución.

> Ejemplo: si `P` contiene `(A, B, C, D, F)` y el ítem a insertar es `E` en la posición `5` entonces la pila resultante sería `(A, B, C, D, E, F)`.

### Ejercicio 6

Dada dos pilas realizar una operación que permite determinar si poseen los
mismos elementos sin importar sus posiciones, ni sus repeticiones. El proceso
recibe ambas Pilas y retornar verdadero o falso. No se deben perder las 2 pilas
originales.

Determinar la complejidad algorítmica de la solución.

> Ejemplo: si `P1` contiene `(A, B, C, D, F)` y `P2` contiene `(B, A, C, A, D, C, F)`
> deberá retornar `True` porque tienen los mismos elementos.

## Ejercicios para entregar

### Ejercicio 7

Generar un algoritmo que determine si los paréntesis de una expresión matemática
son correctos, validando que la expresión sea correcta. Determinar la
complejidad algorítmica de la solución.

Ejemplos:

* `(a)` = Correcto
* `(5)` = Correcto
* `5` = Correcto
* `(a + b)` = Correcto
* `(4 * (3 + 2)` = Incorrecto
* `) 6 * (2 - 1` = Incorrecto
* `(k*g) / ) (r + s)` = Incorrecto
* `(ab)` = Incorrecto (falta un operador)

### Ejercicio 8

Verificar si el contenido de una pila de caracteres es un palíndromo, sin destruir la pila original.

**Determinar la complejidad algorítmica de la solución.**

### Ejercicio 9

Dado un número decimal `n` y una base `b` (entre 2 y 16), convertir `n` a su 
representación 
en base `b` utilizando una pila como estructura de soporte.

**Determinar la complejidad algorítmica de la solución.**

### Ejercicio 10

Dado el ejercicio 2 de la práctica de recursividad (cálculo del máximo común 
dividir) utilizar una pila para guardar cada vez que se hace una llamada 
recursiva. Al finalizar y hallar el resultado mostrar en pantalla el 
árbol de llamadas.

Ejemplo
> Al calcular el máximo común divisor entre 20 y 12.  
> mcd(20, 12) ==> mcd(12, 8) ==> mcd(8, 4) ==> mcd(4, 4) ==> 4  
> Resultado a imprimir:  
> mcd(4, 4)  
> mcd(8, 4)  
> mcd(12, 8)  
> mcd(20, 12)  

<!--
### Ejercicio 11

Programar un TAD llamado UNO que implemente algunas funcionalidades del juego UNO con unas reglas simplificadas.
Es necesario implementar una pila con las cartas del mazo, una lista de cartas para cada jugador y una pila de cartas donde se van ubicando las cartas que se juegan.
El mazo del UNO está compuesto de cuatro colores: *azul, verde, rojo y amarillo*. Las cartas comunes van del *1 al 9* y cada color tiene repetido 2 veces cada número, menos el *cero* que viene una sola vez en cada color.

Las reglas para jugar:
- Se arma una pila inicializada con una carta al azar.
- Cada jugador tiene que ubicar una de sus cartas en la pila central siempre y cuando la carta sea del mismo color o valor numérico que la carta de la cima de la pila central.
- Si el jugador no puede ubicar una carta, debe agarrar cartas del mazo, una a una, hasta que encuentre una que pueda ubicar en la pila central.

Se pide implementar:

  `UNO.iniciarJuego(): ListaDeCartas;` esta función inicializa las funciones del juego. Mezcla el mazo, inicializa la pila central con la primera carta del mazo y genera la lista de cartas que será la mano de un jugador. Esta lista de cartas se formará por las 5 cartas siguientes del mazo.

  `UNO.puedeUbicar(mano: ListaDeCartas): Boolean;` -> esta función retorna `true` si en la mano hay alguna carta que se pueda ubicar en la pila central, en caso contrario retornará `false`.

  `UNO.ubicar(mano: ListaDeCartas, carta: PosicionLista): Boolean;` -> esta función controlará si la carta elegida es ubicable en la pila central y de ser así la apilará. Retornará `true` si la acción fue exitosa, `false` en el caso contrario.

  `UNO.agarrarCarta(mano: ListaDeCartas): PosicionLista;` -> esta función deberá agarrar cartas del mazo hasta que la carta agarrada sea ubicable en la pila central.

  `UNO.topePilaCentral(): Carta;` -> esta función retorna la carta que se encuentra en el tope de la pila de cartas central.
-->
