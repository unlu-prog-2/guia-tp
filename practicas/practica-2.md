# Práctica 2: Recursividad

**En cada caso se debe implementar el TAD descripto y una aplicación que, utilizando el tipo abstracto de dato, permita
al usuario el ingreso de una o más instancias (según sea necesario), la aplicación de cualquiera de las operaciones y
luego la obtención del resultado.**


## Ejercicios de Práctica opcionales

### Ejercicio 1

Construir una función recursiva que retorne verdadero si una cadena de caracteres pasada como parámetro es un
palíndromo. Ej. “neuquen” ya que se lee igual de atrás hacia adelante.

### Ejercicio 2

Construir un algoritmo recursivo que permita determinar el máximo común divisor.

### Ejercicio 3

Dados dos números enteros m y n, construir una función recursiva que devuelva el producto de ambos, calculando el mismo
como sumas sucesivas. Esto es: m*n=m+m+...+m, n veces.

### Ejercicio 4

Generar un algoritmo recursivo que calcule el k-ésimo número de la serie de Fibonacci.

### Ejercicio 5

Dados los números enteros m y n, construir una función recursiva que devuelva el cociente de ambos, calculando el mismo
mediante restas sucesivas. Se deberá tener en cuenta que en el caso de que la división no sea exacta, se devolverán dos
cifras decimales.

### Ejercicio 6

Generar un algoritmo recursivo que le ponga los “.” de los miles a un String de números.

### Ejercicio 7

Se conoce que la mafia china es muy organizada y protege mucho a sus miembros, cuando deciden asistir a una reunión se
dispone de una cantidad de chinos que asisten, y ellos se ubican de forma que al mirarlos frontalmente generan cierto
respeto y temor.

A continuación, se tiene una serie de posibles reuniones y su nivel y la apariencia que se tiene del grupo que va a la
reunión vistos frontalmente:

```text
Nivel reunión  Vista frontal de la delegación
      1                  (-.-) 
      2               (-.(-.-).-) 
      3            (-.(-.(-.-).-).-) 
      4         (-.(-.(-.(-.-).-).-).-) 
```

Considerando esta descripción, diseñar los procesos recursivos que permitan mostrar la apariencia del grupo de chinos
que asisten a una reunión de nivel n.

### Ejercicio 8

Se tiene una cadena que representa una onda digital de señales L (Low) y H (High). Se pide mostrar la onda que
representa utilizando `_` y `|`.

Por ejemplo, si se tiene la cadena `HHHHLLLLHHHHHLLHHLLHH`, su onda digital se puede ver algo así:

```text
_ _ _ _            _ _ _ _ _         _ _         _ _ 
       | _ _ _ _ |           | _ _ |     | _ _ |    
```

### Ejercicio 9

En el juego de Snake, una serpiente recorre una grilla para comer manzanas y así poder crecer. La serpiente siempre se
mueve a los cuadros adyacentes (nunca en diagonal) y no puede chocarse con sí misma ni rozarse, es decir, un cuadro que
contiene una parte de la serpiente sólo puede estar adyacente a, como máximo, dos otras partes.

Si se tiene una matriz que representa a la serpiente en la grilla, ¿cómo podría calcularse su longitud y el recorrido
que hizo?

Por ejemplo:
<table>
    <tr><th> </th><th>A</th><th>B</th><th>C</th><th>D</th><th>E</th><th>F</th><th>G</th><th>H</th><th>I</th><th>J</th></tr>
    <tr><th>1</th><td> </td><td> </td><td> </td><td> </td><td> </td><td> </td><td> </td><td> </td><td> </td><td>&nbsp;</td></tr>
    <tr><th>2</th><td> </td><td>S</td><td> </td><td> </td><td> </td><td> </td><td> </td><td> </td><td> </td><td>&nbsp;</td></tr>
    <tr><th>3</th><td> </td><td>S</td><td>S</td><td> </td><td> </td><td> </td><td> </td><td> </td><td> </td><td>&nbsp;</td></tr>
    <tr><th>4</th><td> </td><td> </td><td>S</td><td> </td><td> </td><td> </td><td> </td><td> </td><td> </td><td>&nbsp;</td></tr>
    <tr><th>5</th><td> </td><td> </td><td>S</td><td>S</td><td>S</td><td>S</td><td>S</td><td>S</td><td> </td><td>&nbsp;</td></tr>
    <tr><th>6</th><td> </td><td> </td><td> </td><td> </td><td> </td><td> </td><td> </td><td>S</td><td> </td><td>&nbsp;</td></tr>
    <tr><th>7</th><td> </td><td> </td><td> </td><td> </td><td> </td><td> </td><td> </td><td>S</td><td> </td><td>&nbsp;</td></tr>
    <tr><th>8</th><td> </td><td> </td><td> </td><td> </td><td> </td><td>C</td><td>S</td><td>S</td><td> </td><td>&nbsp;</td></tr>
    <tr><th>9</th><td> </td><td> </td><td> </td><td> </td><td> </td><td> </td><td> </td><td> </td><td> </td><td>&nbsp;</td></tr>
    <tr><th>10</th><td> </td><td> </td><td> </td><td> </td><td> </td><td> </td><td> </td><td> </td><td> </td><td>&nbsp;</td></tr>
</table>

La serpiente, cuya cabeza es `C`, empezó en `(2,B)` y recorrió `(3,B)`, `(3,C)`, `(4,C)`, `...` , `(8,F)`. Su longitud
es `15`.

## Ejercicios para entregar

### Ejercicio 10

En la química orgánica se tienen cadenas de Carbono e Hidrógeno juntos, que forman distintas clases de alcanos; que se
diferencian unos de otros por la cantidad de carbonos que existen. La forma de encontrar además la nominación correcta
es considerando la cadena lineal más larga que se pueda tener, la misma que da la nominación básica y encima de esa se
obtienen otras más, que se basan en las ramificaciones existentes sobre la cadena lineal principal. Lo importante por el
momento es identificar la cadena lineal de carbono más larga que se pueda hallar en una composición. Se pide, dada una
composición, representada en una matriz de símbolos {C,.}, encontrar la cadena lineal más larga de carbonos; para ello
debes plantear un algoritmo recursivo.

Por ejemplo, se tiene la composición:

<table>
    <tr><td>C</td><td>.</td><td>.</td><td>.</td><td>.</td><td>.</td><td>.</td><td>.</td><td>.</td><td>.</td><td>.</td><td>.</td><td>.</td></tr>
    <tr><td>C</td><td>C</td><td>.</td><td>C</td><td>.</td><td>.</td><td>.</td><td>.</td><td>.</td><td>.</td><td>.</td><td>.</td><td>.</td></tr>
    <tr><td>.</td><td>C</td><td>.</td><td>C</td><td>.</td><td>.</td><td>.</td><td>.</td><td>.</td><td>C</td><td>.</td><td>.</td><td>.</td></tr>
    <tr><td>.</td><td>C</td><td>.</td><td>C</td><td>.</td><td>.</td><td>.</td><td>.</td><td>.</td><td>C</td><td>.</td><td>.</td><td>.</td></tr>
    <tr><td>.</td><td>C</td><td>C</td><td>C</td><td>C</td><td>C</td><td>C</td><td>C</td><td>C</td><td>C</td><td>.</td><td>.</td><td>.</td></tr>
    <tr><td>.</td><td>C</td><td>.</td><td>.</td><td>.</td><td>.</td><td>.</td><td>.</td><td>.</td><td>.</td><td>.</td><td>.</td><td>.</td></tr>
    <tr><td>.</td><td>C</td><td>.</td><td>.</td><td>.</td><td>.</td><td>.</td><td>.</td><td>.</td><td>.</td><td>.</td><td>.</td><td>.</td></tr>
</table>


### Ejercicio 11

Uno de los parámetros que utiliza el gobierno para tomar decisiones sobre la ASPO / DISPO durante la pandemia del CODIV 19 es la cantidad de días transcurridos para que se dupliquen la cantidad de casos.

Una simplificación de este cálculo se puede hacer tomando la cantidad de contagiados totales a un cierto día (P<sub>0</sub>) y la cantidad de contagiados durante ese día (c<sub>n</sub>) y el anterior (c<sub>n-1</sub>n). 

Siguiendo la siguiente fórmula:
> P<sub>n</sub> = P<sub>0</sub> . (c<sub>n</sub>/c<sub>n-1</sub>)<sup>n</sup> 

Realizar una función recursiva que retorne una lista con las cantidades de contagiados totales por día hasta que esa cantidad duplique a la población inicial ingresada.

> Nota 1: El cálculo del total de contagiados debe ser recursivo.  
> Nota 2: _No se puede usar la función potencia._


### Ejercicio 12

Definir una función recursiva que dado un conjunto devuelva una lista con los subconjuntos
del mismo tales que la suma de los elementos de cada subconjunto sumen una cantidad dada.

Por ejemplo: 

Dado el conjunto `A = {10, 3, 1, 7, 4, 2}` 

La lista de los conjuntos que sumen `7` sería: `R = [{3, 4}, {1, 4, 2}, {7}]`


### Ejercicio 13

Escribir una función que implemente el método que se describe para saber si un número es divisible por `7`. 

>Se separa la primera cifra de la derecha, se la multiplica por 2, y se resta este producto de lo que queda a la izquierda y así sucesivamente, hasta que el resultado obtenido sea un número menor a 70. 
El número original será multiplo de 7 si el resultado da cero o múltiplo de 7.

Por ejemplo:
```
32291   ->  1x2=2.
3229 - 2 =
3227    ->  7x2=14.
322 - 14 =
308     ->  8x2=16
30 - 16 =
14      ->  Múltiplo de 7`
```

### Ejercicio 14

Se dice que `n` es un ńumero que explosivo cuando éste explota en varios fragmentos más chicos que él, dada una bomba. 

Si se tiene que `n` es el número y `b` la bomba, tales que `n` es mayor que `b`, se puede hacer que `n` explote en dos números n<sub>1</sub> = n / b (división entera) y n<sub>2</sub> = n - (n / b).

Pero `b` es una bomba que produce una reacción en cadena, si n<sub>1</sub> o n<sub>2</sub> son mayores que `b`, estos también explotan con la regla anterior, hasta que se encuentre que el número no es mayor que `b`; entonces se dice que ya no se puede explotar el número.

Escribe una función que retorne una lista con los pedazos del número `n`, dado que se tiene la bomba `b`.

Por ejemplo:

```
Número: 10
Bomba: 3
Resultado: [3 2 1 1 3]
```
```
Número: 20
Bomba: 5
Resultado: [4 3 2 2 1 1 1 1 5]
```
