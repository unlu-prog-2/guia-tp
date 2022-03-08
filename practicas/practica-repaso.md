# Práctica de repaso e introducción a Delphi

## Actividades de Aprendizaje

### Ejercicio 1
Dado un vector de números enteros generados en forma automática (al azar) obtener las
siguientes medidas estadísticas:

* Media (Promedio)
* Mediana (Elemento de la mitad)
* Moda (Elemento que más se repite)
* Mínimo valor del vector
* Máximo valor del vector

Ejemplo:
<table border="2px">
    <tr>
        <td>2</td>
        <td>4</td>
        <td>4</td>
        <td>4</td>
        <td>5</td>
        <td>6</td>
        <td>8</td>
        <td>9</td>
        <td>10</td>
    </tr>
</table>

```text
Media: 5,77
Mediana: 5
Moda: 4
Mínimo: 2
Máximo: 10
```


### Ejercicio 2
Generar un programa que dada una cadena de máximo 40 caracteres:

1. Genere una nueva cadena sólo con los caracteres en mayúsculas.
2. Genere una nueva cadena sólo con los caracteres en minúsculas.
3. Genere una nueva cadena que elimine todos los espacios.
4. Con la cadena sin espacios genere una nueva cadena, pero invertida.
5. Muestre la cantidad de caracteres que tiene la frase.
6. Muestre la cantidad de ocurrencias de cada consonante de la cadena original.

Ejemplo

```text
Frase Original: “Hola Mundo Cruel y Despiadado”
1. H M C D
2. ola undo ruel y espiadado
3. HolaMundocruelyDespiadado
4. odadaipseDyleurCodnuMaloH
5. TU FRASE TIENE 29 caracteres
6. H=1 l=2 M=1 n=1 d=3 ...
```


### Ejercicio 3
Generar un archivo de texto (TXT) con el Block de Notas o similar. En el archivo no deben
existir caracteres como puntos, comas, puntos y comas, dos puntos, etc.

1. Realizar una rutina que lea el archivo de texto y lo cargue a un control “memo”
pasando todas las palabras a minúsculas.


2. Cargar un vector de String con todas las palabras distintas del archivo. Realizar el
parsing o split (división palabra por palabra) de cada línea por espacios.


### Ejercicio 4
Generar un programa que permita armar un Cuadrado Latino, una matriz cuadrada de `n` x `n` 
con números generados aleatoriamente entre el `1` y `n`<sup>`2`</sup> (no repetidos).

Ejemplo: Un cuadrado latino de grado 4 es una matriz donde `n=4`

Matrix 4 x 4
<table border="2">
    <tr><td>5</td><td>7</td><td>1</td><td>15</td></tr>
    <tr><td>12</td><td>11</td><td>2</td><td>14</td></tr>
    <tr><td>9</td><td>16</td><td>8</td><td>4</td></tr>
    <tr><td>3</td><td>10</td><td>13</td><td>6</td></tr>
</table>


### Ejercicio 5
Generar un programa que resuelva sopas de letras. Debe permitirle al usuario:

1. Cargar la grilla de letras completa en una matriz y mostrarla.
2. Cargar en un vector, una por una, las palabras a buscar y también mostrarla.
3. Disponer la resolución de la sopa (una vez cargadas la grilla y las palabras). La
aplicación listará, para cada palabra las celdas de la grilla que ocupa.


### Ejercicio 6
Generar un programa que permita ingresar un número en cualquiera de los siguientes
sistemas numéricos: binario, octal, decimal y hexadecimal, y lo convierta a cualquiera de
los otros tres sistemas numéricos.


### Ejercicio 7
Generar un ABM (alta, baja y modificación) para cargar datos de un cliente.

Los campos del archivo son Codigo de tipo `longint`, Razon_Social de tipo `String[50]`, 
Domicilio de tipo `String[50]`, Localidad de `String[30]`, TE de `BigInt` y Mail
de `String[100]`.

Se pide además realizar una consulta donde se pueda filtrar por la “Razon_Social”.
El Código identificará la posición del registro del cliente en el archivo. 
Es decir, el código 250 estará almacenado en la posición 250 del archivo. Contemplar 
un total máximo de 1000 clientes.


### Ejercicio 8
Dado un archivo de texto que contiene datos de facturas, se pide obtener los totales por
año/mes en forma de grilla como se muestra debajo.

El archivo contiene los siguientes datos: `NroFactura;Fecha;Importe`.
El separador de campos es un `;`. Debajo se muestra un pequeño ejemplo.
```text
1000;10/01/2019;500.25
1000;11/01/2019;50.10
1001;11/01/2020;1200.50
1002;01/02/2021;950.75
1003;03/03/2021;480.90
```

<table border="2">
    <tr><th>Año / mes</th><th>1</th><th>2</th><th>3</th><th>...</th><th>Total</th></tr>
    <tr><td>2019</td><td>550.35</td><td></td><td></td><td></td><td> 550.35</td></tr>
    <tr><td>2020</td><td>1200.50</td><td></td><td></td><td></td><td>1200.50</td></tr>
    <tr><td>2021</td><td></td><td>970.75</td><td>480.90</td><td></td><td>1451.65</td></tr>
</table>


### Ejercicio 9
Dado un vector de 1000 elementos números generados en forma aleatoria
entre 1 y 10000.
Se pide realizar 3 procesos de ordenamiento diferente y comparar 
las diferencias de tiempos de procesamiento (sugeridos, burbuja,
burbuja mejorado, Qsort o selección).


### Ejercicio 10
Dada una matriz de `N` x `N` (cuadrada) se pide realizar un proceso que
muestre las ambas diagonales en el mismo recorrido.


### Ejercicio 11

Dado un archivo de texto que contiene datos de minutos trabajos por personal
de una consultora de sistemas informáticos a diferentes clientes, se pide
obtener los totales por cliente/año en forma de grilla como se muestra debajo.

El archivo contiene los siguientes datos: “Cliente Año Mes Minutos_Trabajados”. El separador de campos es un “Tabulador”.

A continuación se muestra un pequeño ejemplo. Si el tuviera el siguiente contenido:
```text
Cliente Anio    Mes Minutos_Trabajados
2019    1000    50  1001
1000    2019    01  50
1001    2020    02  120
1001    2021    03  96
1001    2022    01  48
```

La tabla a producir por el programa debería ser:

| Clientes / Años | 2019 | 2020 | 2021 | 2022 |
|-----------------|------|------|------|------|
| 1000            | 50   |      |      |      |
| 1001            |      | 120  | 95   | 48   |

Se adjunta un TXT con estos datos según lo especificado a procesar con el nombre
[practica-0-ejercicio-11.txt](archivos/practica-0-ejercicio-11.txt) que contiene aprox. unas 400.000 filas a procesar.
