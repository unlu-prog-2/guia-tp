### Ejercicio Importado de Recursividad

En el juego de Snake, una serpiente recorre una grilla para comer manzanas y así poder crecer. La serpiente siempre se mueve a los cuadros adyacentes (nunca en diagonal) y no puede chocarse con sí misma ni rozarse, es decir, un cuadro que contiene una parte de la serpiente sólo puede estar adyacente a, como máximo, dos otras partes.

Si se tiene una matríz que representa a la serpiente en la grilla, ¿cómo podría calcularse su longitud y el recorrido que hizo?

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

```C
struct Casilla {
    int fila, columna;
}

struct Vivora {
    struct Casilla Cabeza;
    struct Casilla *Cuerpo;
    
}
```

### Ejercicio Importado de Recursividad

Definir una función recursiva que dado un conjunto devuelva una lista con los subconjuntos del mismo tales que la suma de los elementos de cada subconjunto
sumen una cantidad dada. Por ejemplo: Dado el conjunto A = {10, 3, 1, 7, 4, 2}. La
lista de los conjuntos que sumen 7 sería: R = [{3, 4}, {1, 4, 2}, {7}]
Ejemplos:
```c
subconjuntosQueSumanN ({10, 3, 1, 7, 4, 2}, 7) => { {3, 4}, {1, 4, 2}, {7} }
subconjuntosQueSumanN ({10, 3, 1, 7, 4, 2}, 10) => { {10}, {3,7}, {3, 1, 4, 2}, {1, 7, 2} }
```

### Ejercicio Importado de Recursividad

En la guerra de los “UNLuBots” se han diseñado robots que permiten explorar caminos seguros en campos minados. Los humanos deben caminar por este campo minado buscando documentos secretos que están ubicados en algún lugar del campo. La misión de estos robots es indicar cuál es el camino más seguro, además de informar en qué posiciones están las minas para que los exploradores humanos no las pisen y puedan cumplir con su objetivo.

En este campo minado existen alambres de puas que no pueden ser sobrepasados, espacios seguros de camino, minas, el lugar donde están los exploradores humanos y el lugar donde se encuentran los documentos secretos.

Por ejemplo:
<table align="center">
    <tr>
        <td>P</td>
        <td>P</td>
        <td>P</td>
        <td>P</td>
        <td>P</td>
        <td>M</td>
        <td>P</td>
        <td>P</td>
        <td>M</td>
        <td>M</td>
    </tr>  
    <tr>
        <td>P</td>
        <td>E</td>
        <td>S</td>
        <td>S</td>
        <td>S</td>
        <td>S</td>
        <td>M</td>
        <td>S</td>
        <td>S</td>
        <td>P</td>
    </tr>
    <tr>
        <td>S</td>
        <td>S</td>
        <td>S</td>
        <td>P</td>
        <td>P</td>
        <td>P</td>
        <td>P</td>
        <td>S</td>
        <td>S</td>
        <td>S</td>
    </tr>
    <tr>
        <td>S</td>
        <td>M</td>
        <td>S</td>
        <td>S</td>
        <td>P</td>
        <td>P</td>
        <td>P</td>
        <td>M</td>
        <td>S</td>
        <td>M</td>
    </tr>  
    <tr>
        <td>S</td>
        <td>S</td>
        <td>S</td>
        <td>S</td>
        <td>S</td>
        <td>D</td>
        <td>S</td>
        <td>S</td>
        <td>M</td>
        <td>S</td>
    </tr>    
    <tr>
        <td>P</td>
        <td>P</td>
        <td>P</td>
        <td>S</td>
        <td>S</td>
        <td>S</td>
        <td>S</td>
        <td>M</td>
        <td>S</td>
        <td>S</td>
    </tr>
    <tr>
        <td>S</td>
        <td>S</td>
        <td>M</td>
        <td>S</td>
        <td>M</td>
        <td>S</td>
        <td>M</td>
        <td>S</td>
        <td>M</td>
        <td>S</td>
    </tr>
</table>

Donde `E` representa la posición en la que están los exploradores , `P` identifica la existencia de puas, `M` indica la existencia de una mina y `D` indica el lugar donde están los documentos secretos.

Los robots sólo se mueven en línea recta, es decir jamás diagonal, considerando estas condiciones encuentra el camino más seguro de exploración.

Tomando en cuenta el ejemplo anterior, el camino más seguro sería:

> (R, S); (D, S); (D, S); (D, S); (R, S); (R, S); (R, D)

En este caso se ha encontrado un camino sin minas, pero en caso de que no exista tal camino, se debe devolver el camino que tiene menos minas e informar dónde están para que los exploradores tengan cuidado.

Para aclarar, en el camino se tiene una lista de pasos que deben dar, cada uno de estos pasos es de la forma `(DIRECCION, SITUACION)`, por ejemplo `(R,S)` dice que el movimiento es a la *derecha=*`RIGHT` y la situacion es *segura=*`S`. 

Para completar la dirección puede ser: `R`*=derecha*, `L`*=izquierda*, `D`*=abajo*, `U`*=arriba*; la situación puede ser: `M`*=mina*, `D`*=documento*, `S`*=segura*

Realizar el (los) procesos recursivos necesarios, para que, dado un campo minado, la ubicación de los exploradores y la ubicación de los documentos; se encuentre el camino “más” seguro de exploración.
