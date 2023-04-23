# Práctica 3: Pilas

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

> En todos los casos es impresindible no perder la pila con los datos.

#### Buscar elemento

Dada una pila, buscar una clave y determinar si existe en la Pila.

```C

```

##### Casos de prueba

```C

```

#### Insertar elemento

Dada una pila, colocar en una posición ordinal determinada, recibida por parámetro, un
nuevo elemento (Insertar un elemento nuevo).

```C

```

##### Casos de prueba

```C

```

#### Eliminar elemento

Eliminar de una pila un elemento dado (primera ocurrencia encontrada por la clave).

```C

```

##### Casos de prueba

```C

```

#### Switch

Intercambiar los valores de 2 posiciones ordinales de la pila, por ejemplo la 2da con la 4ta.

```C

```

##### Casos de prueba

```C

```

#### Copia

Duplicar el contenido de una pila.

```C

```

##### Casos de prueba

```C

```

#### Contar elementos

Contar los elementos de la pila.

```C

```

##### Casos de prueba

```C

```

#### Buscar elemento

Dadas dos pilas, determinar si sus contenidos son exactamente iguales (solo por la
clave), sin destruirlas. Utilizar para la resolución del problema una única pila auxiliar.

```C

```

##### Casos de prueba

```C

```

#### Cambio de Base

Construir un algoritmo que, utilizando el TAD Pila, permita convertir un número
decimal pasado como parámetro, a su correspondiente valor expresado en una base
de 2 a 16 (hexadecimal).

```C

```

##### Casos de prueba

```C

```

#### Cambio de Base

Invertir el contenido de una pila sin destruir la pila original. Se debe retornar la nueva
pila invertida y la original no se debe perder. 

```C

```

##### Casos de prueba

```C

```

#### Eliminiar todas las ocurrecias

Dada una pila con valores al azar eliminar todas las ocurrencias de un determinado
ítem sin perder la pila original. Deberá retornar una nueva pila sin el ítem en
consideración.

```C

```

##### Casos de prueba

```C
Ejemplo: si “P” contiene (1, 5, 7, 1, 3, 1, 8) y el ítem a eliminar es “1” entonces la pila
resultante sería (5, 7, 3, 8).
```

#### Eliminiar todas las ocurrecias

Dada dos pilas realizar una función que permita determinar los elementos que tienen
en común. Debe retornar una nueva pila con esos elementos (que están en ambas
pilas) sin perder las pilas originales.

```C

```

##### Casos de prueba

```C
Ejemplo: si “P1” contiene (1, 4, 7, 9, 8) y “P2” contiene (4,1,6,9,3) el resultado será la
pila “PR” = (1,4,9).
```

#### Eliminiar todas las ocurrecias

Dada una pila con valores repetidos, se desea obtener una nueva pila con todos los
valores (sin repetición) y la cantidad de veces que aparecen. No debe perderse la pila
original. El proceso recibe la pila con las repeticiones y retorna una nueva pila.

```C

```

##### Casos de prueba

```C
Ejemplo: si “P” contiene (1, 2,1, 3, 4, 5, 2, 1, 3, 5, 5), la pila resultado del proceso será
“PR” = (1:3, 2:2, 3:2, 4:1, 5:3).
```

### Ejercicios Interesantes

#### Mazo de cartas

Modelar un TAD que represente un mazo de cartas españolas y programar las siguientes funcionalidades

- Barajar
- Repartir cartas
- Jugar al culo sucio
- 