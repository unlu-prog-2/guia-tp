# Práctica 1: Recursividad

## Actividades de Aprendizaje

> Para la resolución de esta práctica ponemos a tu disposición el archivo de encabezados [TP1_Recursividad.h](C/TP1_Recursividad.h "Archivo de encabezado de la Práctica de Recursividad C") de tal manera que solo te queda implementar las funciones que te pedimos y alguna forma de probar los algoritmos que escribiste.

### Ejercicio 1

Construir una función recursiva que retorne verdadero si un número entero recivido como parámetro es capicua.

> **Capicua:** número simétrico que, por ello, se lee igual de izquierda a derecha que de derecha a izquierda. Ejemplos: 161, 2992, 3003.

#### Declaración / Prototipo

```C
    bool esCapicua(int numero);
```

#### Casos de testeo

```C
    esCapicua(161);  => true
    esCapicua(2992); => true
    esCapicua(2993); => false
```

### Ejercicio 2

Construir una función recursiva que retorne verdadero si una cadena de caracteres pasada como parámetro es un palíndromo. 

#### Ejemplo

La palabra "neuquen" ya que se lee igual de atrás hacia adelante.

#### Declaración / Prototipo

```C
    bool esPalindromo(char *palabra);
```

#### Casos de testeo

```C
    esPalindromo("neuquen");    => true
    esPalindromo("palindromo"); => false
```

### Ejercicio 3

Dados dos números enteros `m` y `n`, construir una función recursiva que devuelva el producto de ambos, calculando el mismo como sumas sucesivas. Esto es: `m * n = m + m + ...  + m`, `n` veces.

#### Declaración / Prototipo

```C
    int productoRecursivo(int m, int n);
```

#### Casos de testeo

```C
    productoRecursivo(3, 2);   => 6
    productoRecursivo(5, -2);  => -10
    productoRecursivo(-5, 2);  => -10
    productoRecursivo(-5, -2); => 10
```

### Ejercicio 4

Generar un algoritmo recursivo que calcule el k-ésimo número de la serie de Fibonacci.

#### Declaración / Prototipo

```C
    int terminoSerieDeFibonacci(int n);
```

#### Casos de testeo

```C
    terminoSerieDeFibonacci(1); => 1
    terminoSerieDeFibonacci(6); => 8
```

### Ejercicio 5

Dados los números enteros m y n, construir una función recursiva que devuelva el resto de la división de ambos, calculando el mismo mediante restas sucesivas.

#### Declaración / Prototipo

```C
    int restoRecursivo(int dividendo, int divisor);
```

#### Casos de testeo

```C
    restoRecursivo(10, 2);   => 0
    restoRecursivo(22, 3);   => 1
    restoRecursivo(-22, 3);  => -1
    restoRecursivo(-22, -3); => 1
    restoRecursivo(22, -3);  => -1
```

### Ejercicio 6

Generar un algoritmo recursivo que le ponga los `.` de los miles a un String de números.

#### Declaración / Prototipo

```C
char *agregarSeparadorMiles(char *numero);
```

#### Casos de testeo

```C
    agregarSeparadorMiles("123456");    => "123.456"
    agregarSeparadorMiles ("12345678"); => "12.345.678"
```

### Ejercicio 7

Se conoce que la mafia china es muy organizada y protege mucho a sus miembros, cuando deciden asistir a una reunión se dispone de una cantidad de chinos que asisten, y ellos se ubican de forma que al mirarlos frontalmente generan cierto respeto y temor. A continuación, se tiene una serie de posibles reuniones y su nivel y la apariencia que se tiene del grupo que va a la reunión vistos frontalmente:

| Nivel reunión | Vista frontal de la delegación |
| :-----------: | :----------------------------: |
| 1             |             (-.-)              |
| 2             |          (-.(-.-).-)           |
| 3             |       (-.(-.(-.-).-).-)        |
| 4             |    (-.(-.(-.(-.-).-).-).-)     |

Considerando esta descripción, diseñar los procesos recursivos que permitan mostrar la apariencia del grupo de chinos que asisten a una reunión de nivel `n`.

#### Declaración / Prototipo

```C
    char* chinos(unsigned int nivel);
```

#### Casos de testeo

```C
    chinos(4) => "(-.(-.(-.(-.-).-).-).-)"
```

### Ejercicio 8

Se tiene una cadena que representa una onda digital de señales L (Low) y H (High). Se pide mostrar la onda que representa utilizando `_` y `|`.

#### Ejemplo

Si se tiene la cadena `HHHHLLLLHHHHHLLHHLLHH`, su onda digital se debe ver así:

```text
‾ ‾ ‾ ‾ | _ _ _ _ | ‾ ‾ ‾ ‾ | _ _ | ‾ ‾ | _ _ | ‾ ‾   
```

#### Declaración / Prototipo

```C
    char* ondaDigital(char *);
```

#### Casos de testeo

```C
    ondaDigital("HL");     => "‾ | _"
    ondaDigital("LH");     => "_ | ‾"
    ondaDigital("HLHL");   => "‾ | _ | ‾ | _"
    ondaDigital("HLLHHL"); => "‾ | _ _  | ‾ ‾ | _"
```

### Ejercicio 9

Escribir una función que implemente el método que se describe para saber si un número es divisible por `7`.

> **Algoritmo**:
>
> * Se separa la primera cifra de la derecha,
> * Se la multiplica por `2`, y
> * se resta este producto de lo que queda a la izquierda
> * así sucesivamente, hasta que el resultado obtenido sea un número menor a `70`.
>
> El número original será **múltiplo de 7** si el resultado da cero o múltiplo de `7`.

#### Ejemplo: **32291**

```text
    32291   ->  1x2=2.
    3229 - 2 =
    3227    ->  7x2=14.
    322 - 14 =
    308     ->  8x2=16
    30 - 16 =
    14      ->  Múltiplo de 7
```

#### Ejemplo: **110**

```text
    110     -> 0 x 2 = 0
    11 – 0 =
    11      -> No múltiplo de 7
```

#### Declaración / Prototipo

```C
    bool esDivisiblePor7(int n);
```

#### Casos de testeo

```C
    esDvisiblePor7(32291); => true
    esDivisiblePor7(110);  => false
```

### Ejercicio 10

Se dice que `n` es un ńumero que explosivo cuando éste explota en varios fragmentos más chicos que él, dada una bomba.

> **Algoritmo**:
> Si se tiene que `n` es el número y `b` la bomba, tales que `n` es mayor que `b`, se puede hacer que `n` explote en dos números `n1 = n / b` (división entera) y `n2 = n - (n / b)`.
>
> Pero `b` es una bomba que produce una reacción en cadena, si `n1` o `n2` son mayores que `b`, estos también explotan con la regla anterior, hasta que se encuentre que el número no es mayor que `b`; entonces se dice que ya no se puede explotar el número.

Escribe una función que retorne una lista con los pedazos del número `n`, dado que se tiene la bomba `b`.

#### Ejemplo

Llamado original con `n = 10` y `b = 3` el proceso sería en el siguiente orden:

* `n1 = 3` y  `n2 = 7` Como `n2` es mayor 3, explota.

* Llamado recursivo con `n = 7` y `b = 3`:
`n1 = 2` y  `n2 = 5` Como `n2` es mayor 3, explota.

* Llamado recursivo con `n = 5` y `b = 3`:
`n1 = 1` y  `n2 = 4` Como `n2` es mayor 3, explota.

* Llamado recursivo con `n = 4` y `b = 3`:
`n1 = 1` y  `n2 = 3` Como ambos son menores o iguales a 3, se terminan las explosiones.

**La lista resultante sería**:

* `[3, 7]` -> Arrancamos la lista con el `3` (n1 de la llamada original), y el `7` (n2) que explota.

* `[3, 2, 5]` -> Reemplazamos el `7` por el `2` (n1) y el `5` (n2) que explota.

* `[3, 2, 1, 4]` -> Reemplazamos el `5` por el `1` (n1) y el `4` (n2) que explota.

* `[3, 2, 1, 1, 3]` -> Reemplazamos el `4` por el `1` (n1) y el `3` (n2) que explota.

#### Declaración / Prototipo

```C
    int* explosion(int n, int b, int* size);
```

### Casos de testeo

```C
    explosion(10, 3 , &size); => {3, 2, 1, 1, 3}

    explosion(20, 5 , &size); => {4, 3, 2, 2, 1, 1, 1, 1, 5}
```
