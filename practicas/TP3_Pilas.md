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

> Implementar todos los ejercicios que puedan de **forma iterativa y de forma recursiva** para poder analizar la diferencia en la **complejidad algorítmica** en cada caso.

> En todos los casos es imprescindible no perder la pila con los datos.

#### Buscar elemento

Dada una pila, buscar una clave y determinar si existe en la Pila.

```C
bool buscarElemento(Pila p, TipoElemento e);
```

Casos de prueba

```C
Pila p = (1, 6, 3, 7, 4, 8, 3)
buscarElemento(p,  1) => true
buscarElemento(p, 13) => false
```

#### Insertar elemento

Dada una pila, colocar en una posición ordinal determinada, recibida por parámetro, un
nuevo elemento (Insertar un elemento nuevo).

```C
void insertarElemento(Pila p, TipoElemento e, int pos);
```

Casos de prueba

```C
Pila p = (1, 6, 3, 7, 4, 8, 3)
insertarElemento(p, 5, 20) => (1, 6, 13, 3, 20, 7, 4, 8, 3)
insertarElemento(p, 1, 30) => (30, 1, 6, 13, 3, 20, 7, 4, 8, 3)
```

#### Eliminar elemento

Eliminar de una pila un elemento dado (primera ocurrencia encontrada por la clave).

```C
void eliminarElemento(Pila p, int clave);
```

Casos de prueba

```C
Pila p = (1, 6, 3, 7, 4, 8, 3)
eliminarElemento(p, 3) => (1, 6, 3, 7, 4, 8)
eliminarElemento(p, 3) => (1, 6, 7, 4, 8)
eliminarElemento(p, 1) => (6, 7, 4, 8)
```

#### Switch

Intercambiar los valores de 2 posiciones ordinales de la pila, por ejemplo la 2da con la 4ta.

```C
void intercambiarElementos(Pila p, int pos1, int pos2);
```

Casos de prueba

```C
Pila p = (1, 6, 3, 7, 4, 8, 3)
intercambiarElementos(p, 2, 6) => (1, 8, 3, 7, 4, 6, 3)
intercambiarElementos(p, 1, 5) => (4, 8, 3, 7, 1, 6, 3)
```

#### Copia

Duplicar el contenido de una pila.

```C
Pila copiar(Pila p);
```

Casos de prueba

```C
Pila p = (1, 6, 3, 7, 4, 8, 3)
Pila p2 = copiar(p) => (1, 6, 3, 7, 4, 8, 3)
```

#### Contar elementos

Contar los elementos de la pila.

```C
int contarElementos(Pila p);
```

Casos de prueba

```C
Pila p = (1, 6, 3, 7, 4, 8, 3)
contarElementos(p) => 7
```

#### Comparar pilas

Dadas dos pilas, determinar si sus contenidos son exactamente iguales (solo por la
clave), sin destruirlas. Utilizar para la resolución del problema una única pila auxiliar.

```C
bool compararPilas(Pila p1, Pila p2);
```

Casos de prueba

```C
Pila p1 = (1, 6, 3, 7, 4, 8, 3)
Pila p2 = (1, 6, 3, 7, 4, 8, 3)
Pila p3 = (6, 1, 3, 7, 4, 8, 3)
Pila p4 = (5, 6, 3, 7, 4, 8, 3)
compararPilas(p1, p2) => true
compararPilas(p2, p1) => true
compararPilas(p1, p3) => false
compararPilas(p1, p4) => false
compararPilas(p2, p3) => false
compararPilas(p3, p4) => false
```

#### Cambio de Base

Construir un algoritmo que, utilizando el TAD Pila, permita convertir un número
decimal pasado como parámetro, a su correspondiente valor expresado en una base
de 2 a 16 (hexadecimal).

```C
char* cambioDeBase(int numero, int base);
```

Casos de prueba

```C
cambioDeBase(10, 2) => "1010"
cambioDeBase(10, 3) => "101"
cambioDeBase(16, 3) => "121"
cambioDeBase(567, 16) => "237"
cambioDeBase(759, 16) => "2F7"
```

#### Invertir Pila

Invertir el contenido de una pila sin destruir la pila original. Se debe retornar la nueva
pila invertida y la original no se debe perder. 

```C
Pila invertirPila(Pila p);
```

Casos de prueba

```C
Pila p1 = (1, 6, 3, 7, 4, 8, 3)
invertirPila(p1) => (3, 8, 4, 7, 3, 6, 1)
```

#### Eliminar todas las ocurrencias

Dada una pila eliminar todas las ocurrencias de un determinado
ítem sin perder la pila original. Deberá retornar una nueva pila sin el ítem en
consideración.

```C
Pila eliminarTodasOcurrencias(Pila p, int clave);
```

Casos de prueba

```C
Pila p = (1, 5, 7, 1, 3, 1, 8)
eliminarTodasOcurrencias(p, 1) => (5, 7, 3, 8)
eliminarTodasOcurrencias(p, 8) => (1, 5, 7, 1, 3, 1)
```

#### Elementos en común

Dada dos pilas realizar una función que permita determinar los elementos que tienen
en común. Debe retornar una nueva pila con esos elementos (los que están en ambas
pilas) sin perder las pilas originales.

```C
Pila elementosEnComun(Pila p1, Pila p2);
```

Casos de prueba

```C
Ejemplo: si "P1" contiene (1, 4, 7, 9, 8) y "P2" contiene (4,1,6,9,3) el resultado será la
pila "PR" = (1,4,9).
```

#### Eliminar repetidos

Dada una pila con valores repetidos, se desea obtener una nueva pila con todos los
valores (sin repetición) y la cantidad de veces que aparecen. No debe perderse la pila
original. El proceso recibe la pila con las repeticiones y retorna una nueva pila.

Usar el `valor` del `TipoElemento` guardar la cantidad de ocurrencias en la pila resultado.

```C
Pila eliminarRepetidos(Pila p);
```

Casos de prueba

```C
Ejemplo: si "P" contiene (1, 2,1, 3, 4, 5, 2, 1, 3, 5, 5), la pila resultado del proceso será
"PR" = (1:3, 2:2, 3:2, 4:1, 5:3).
```

### Ejercicios Interesantes

#### Mazo de cartas

Modelar un TAD que represente un mazo de cartas españolas y programar las siguientes funcionalidades:

- Barajar
- Repartir cartas
- Jugar al culo sucio
