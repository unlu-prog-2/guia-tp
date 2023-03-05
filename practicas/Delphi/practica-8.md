# Práctica 8: Conjuntos

**En cada caso se debe implementar el TAD descripto y una aplicación que, utilizando el tipo abstracto de dato, permita
al usuario el ingreso de una o más instancias (según sea necesario), la aplicación de cualquiera de las operaciones y
luego la obtención del resultado.**

## Para empezar a trabajar

Construir el TAD de conjuntos correspondiente a la implementación de “lista” teniendo en cuenta:

- Definir las estructuras de datos en función a las especificaciones dadas en clase y documentadas en los PDF que se
  encuentran en el aula virtual de la asignatura.
- Se las debe implementar mediante objetos y respetar estrictamente los nombres y parámetros de cada una de las
  operaciones del TAD especificadas.
- Se lo debe probar y testear de forma tal que se pueda asegurar que el TAD funciona correctamente.


### Ejercicio 1

Desarrollar un algoritmo que dados dos conjuntos de elementos tipo carácter (char)
verifique las operaciones de Unión, Intersección, Diferencia y Pertenencia.


### Ejercicio 2

Desarrollar un algoritmo que dados tres conjuntos de elementos tipo carácter (char)
realice las operaciones de Unión e Intersección.


### Ejercicio 3

Desarrollar un algoritmo que dado un conjunto de elementos tipo carácter (char) cree
dos conjuntos, uno con las vocales y otro con las consonantes.


### Ejercicio 4

Dados dos conjuntos de números naturales se pide determinar si uno es subconjunto
propio del otro.

Determinar la complejidad algorítmica.

> Ejemplo: si `A = (3, 4, 5)` y `B = (1, 2, 3, 4, 5, 6, 7, 8, 9)` entonces a `A` es un subconjunto
propio del conjunto `B` porque todos los elementos de `A` están en `B` pero `A <> B`.


### Ejercicio 5

Dados 3 conjuntos determinar si alguno es un subconjunto parcial o total del otro.

Se considera un subconjunto parcial cuando al menos la mitad de los elementos de uno
están en el otro.

Determinar la complejidad algorítmica.

> Ejemplo: si `A = (3, 4, 5)` y `B = (1, 2, 3, 4, 5, 6, 7, 8, 9)` y `C = (2, 4, 6, 8, 7)` entonces a `A` es un
subconjunto total `B` porque todos los elementos de `A` están en `B`, `C` es un
subconjunto total de `B` porque todos los elementos de `C` están en `B`. A su vez
`B` es un subconjunto parcial de `C` porque al menos la mitad de los elementos de
`B` están en `C`.


### Ejercicio 6

Dados dos conjuntos de números naturales se pide determinar si son iguales sin importar
la posición de sus elementos.

Determinar la complejidad algorítmica.

> Ejemplo: si `A = (3, 4, 5, 6)` y `B = (3, 5, 4, 6)` entonces a `A` es igual `B` y viceversa.


### Ejercicio 7

Resolver por fuera del TAD la unión del conjunto `A` con `B`.

Determinar la complejidad algorítmica sin importar el TAD.

Determinar la complejidad algorítmica teniendo en cuenta el TAD utilizado.


### Ejercicio 8

Resolver por fuera del TAD la intersección del conjunto `A` con `B`.

Determinar la complejidad algorítmica sin importar el TAD.

Determinar la complejidad algorítmica teniendo en cuenta el TAD utilizado.
