# Práctica 5: Colas

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

Resolver los siguientes puntos:
- Concatenar dos colas dejando el resultado en la primera de ellas.
- Informar si un elemento dado se encuentra en la cola.
- Agregar un nuevo elemento en una posición dada (colarse).
- Dado un elemento sacarlo de la cola todas las veces que aparezca.
- Contar los elementos de la cola.
- Realizar una función que realice una copia de una cola.
- Invertir del contenido de una cola sin destruir la cola original.


### Ejercicio 2

Dadas dos colas, determinar si sus contenidos son iguales tanto en posición como en
datos, sin destruirlas. Utilizar para la resolución del problema una sola cola auxiliar.

Determinar la complejidad algorítmica de la solución.


### Ejercicio 3

Dada una cola de números enteros, ordenada, construir un algoritmo que permita
pasar a otra cola todos los elementos que no se repiten en la primera, sin destruir el
contenido de la cola original y dejándola en su estado inicial.

Determinar la complejidad algorítmica de la solución.

> Ejemplo: si `C` contiene `(5, 6, 8, 8, 12, 12)` la cola resultado del proceso sería `(5, 6)`.


### Ejercicio 4

Dada una cola de valores enteros no repetidos y mayores o iguales a `2`, obtener todos
los valores que son Divisores Totales. Se dice que un valor es Divisor Total si permite
dividir a todos los demás valores de la cola en forma exacta.

Determinar la complejidad algorítmica de la solución.

> Ejemplo: si `C` contiene `(8, 12, 2, 6, 14)` se dice que `2` es el divisor total de la cola
porque divide al resto en forma exacta.

### Ejercicio 5

Dada una pila y una cola generada con valores al azar retornar en una lista todos los
valores comunes a ambas y en qué posición ordinal se encontró cada uno en su
estructura. No se deben destruir las estructuras originales.

Determinar la complejidad algorítmica de la solución empleada.

> Ejemplo: si `P = (2,5,8,19,3,4)` y `C = (4, 18, 12, 5, 6)` la lista tendría `L = (5:2:4, 4:6:1)`.

## Ejercicios para entregar


### Ejercicio 6

Dadas 2 colas cargadas con valores alfanuméricos se pide determinar si ambas
contienen los mismos elementos. Se considera que contendrán los mismos elementos
sin importar su posición o las repeticiones.

Determinar la complejidad algorítmica de la solución.

> Ejemplo: Si `C1 = (A, B, E, D, H, A, Z)` y `C2 = (B, A, D, H, Z, E)` se consideran que contienen los
mismos elementos y deberá retornar verdadero.


### Ejercicio 7

Un negocio tiene 3 ventanillas para atender a sus clientes. Los clientes forman cola en
cada ventanilla. Un día, dos de los tres empleados que atienden las ventanillas no
pueden asistir al trabajo, quedando uno solo para atender a las tres colas. Este
empleado decide que, a medida que lleguen los clientes, atenderá por cierta cantidad
de minutos (que denominaremos Q) a cada cola, paseándose por todas las colas
equitativamente.

Se pide que implemente un algoritmo que modele esta situación y dé como resultado
el orden en que fueron atendidos los clientes.

> Ejemplo: El algoritmo recibe un Q de tiempo que atenderá a cada cola y las tres colas
cargadas con clientes, donde cada cliente es la cantidad de tiempo que se necesita
para atenderlo.  
Q = 10  
Cola1 = (40, 20, 30)  
Cola2 = (20, 10)  
Cola3 = (10, 10, 10)
Resultado =
Cliente 1 Cola 3,  
Cliente 1 Cola 2,  
Cliente 2 Cola 3,  
Cliente 2 Cola 2,  
Cliente 3 Cola 3,  
Cliente 1 Cola 1,  
Cliente 2 Cola 1,  
Cliente 3 Cola 1  
