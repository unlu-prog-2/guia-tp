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

Construir un algoritmo que, utilizando el TAD Pila, permita convertir un número
decimal pasado como parámetro, a su correspondiente valor expresado en una base
de 2 a 16 (hexadecimal).

Determinar la complejidad algorítmica de la solución.

### Ejercicio 4

Invertir el contenido de una pila sin destruir la pila original. Se debe
retornar la nueva pila invertida y la original no se debe perder.

Determinar la complejidad algorítmica de la solución.

### Ejercicio 5

Dada una pila con valores al azar eliminar todas las ocurrencias de un
determinado ítem sin perder la pila original. Deberá retornar una nueva pila sin
el ítem en consideración. Resolver iterativamente y recursivamente.

Determinar la complejidad algorítmica de ambas soluciones.

> Ejemplo: si `P` contiene `(A, B, A, C, D, A, F)` y el ítem a eliminar es `A`
> entonces la pila resultante sería `(B, C, D, F)`.

### Ejercicio 6

Dada una pila con valores al azar realizar una operación que permite insertar un
ítem en una determinada posición ordinal. El proceso recibe la Pila, el dato a
insertar y la posición ordinal y retorna la nueva pila.

Determinar la complejidad algorítmica de la solución.

> Ejemplo: si `P` contiene `(A, B, C, D, F)` y el ítem a insertar es `E` en la posición `5` entonces la pila resultante sería `(A, B, C, D, E, F)`.

### Ejercicio 7

Dada dos pilas realizar una operación que permite determinar si poseen los
mismos elementos sin importar sus posiciones, ni sus repeticiones. El proceso
recibe ambas Pilas y retornar verdadero o falso. No se deben perder las 2 pilas
originales.

Determinar la complejidad algorítmica de la solución.

> Ejemplo: si `P1` contiene `(A, B, C, D, F)` y `P2` contiene `(B, A, C, A, D, C, F)`
> deberá retornar `True` porque tienen los mismos elementos.

## Ejercicios para entregar

### Ejercicio 8

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

### Ejercicio 9

Verificar si el contenido de una pila de caracteres es un palíndromo, sin 
destruir la pila original.


### Ejercicio 10

Dado un número decimal `n` y una base `b` (entre 2 y 16), convertir `n` a su 
representación 
en base `b` utilizando una pila como estructura de soporte.


### Ejercicio 11

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
