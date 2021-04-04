# Práctica 2: Recursividad

**En cada caso se debe implementar el TAD descripto y una aplicación que, utilizando el tipo abstracto de dato, permita
al usuario el ingreso de una o más instancias (según sea necesario), la aplicación de cualquiera de las operaciones y
luego la obtención del resultado.**

### Ejercicio 1

Construir una función recursiva que retorne verdadero si una cadena de caracteres pasada como parámetro es un
palíndromo. Ej. “neuquen” ya que se lee igual de atrás hacia adelante.

### Ejercicio 2

Construir un algoritmo recursivo que permita determinar el mínimo común divisor.

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
