# Práctica de TAD Tablas Hash

## Para empezar a trabajar

Construir el TAD de Tabla Hash correspondiente a las implementaciones de **Dispersión Abierta** [lista de colisiones y zona de overflow] de teniendo en cuenta:

- Definir las estructuras de datos en función a las especificaciones dadas en clase y documentadas en los PDF que se encuentran en el aula virtual de la asignatura.
- Se las debe implementar mediante objetos y respetar estrictamente los nombres y parámetros de cada una de las operaciones del TAD especificadas.
- Se lo debe probar y testear de forma tal que se pueda asegurar que el TAD funciona correctamente.

### Entendiendo como funcionan

Se tiene la entrada `(631, 130, 611, 417, 534, 965, 394)` y una función hash `h(x) = x mod 10`, expresar las tablas hash
correspondientes a:

- Tabla hash con lista de colisiones (usando el TAD).
- Tabla hash usando zona de overflow (usando el TAD).
- Tabla hash por recolocación cuadrática (en papel).

### ¿Qué estructura de Tabla Hash recomendarias?

- Si se pide desarrollar un algoritmo que dado un archivo que contendrá los datos de alumnos
(legajo, apellido, nombres, domicilio, TE). Genere una tabla hash donde la clave será el
legajo y se guardará como dato la posición física del registro para realizar accesos
directos. El “legajo" es un valor de 6 dígitos.

- Se desea poder implementar una solución para encontrar de forma rápida los datos de
las personas que a una fecha determinada se presentaron a vacunar contra el COVID.
Es decir dada una fecha determinada debería obtener quienes se vacunaron. De cada
persona se guarda básicamente el DNI, Apellido y Nombre.

### Comparando tablas Hash

Sea `T` una tabla de hash de tamaño 10 y `h` la siguiente función de hash `h(k) = (4 + 3k) mod 10`.

Se quieren insertar en `T` elementos con claves `(22, 23, 25, 15, 32, 18, 12, 19, 41, 31)` en ese mismo orden usando `h`.

- Determinar el resultado de insertar las claves en `T` si las colisiones se resuelven por lista de colisiones (usando el TAD).
- Determinar el resultado de insertar las claves en `T` si las colisiones se resuelven por zona de overflow (usando el TAD).
- Determinar el resultado de insertar las claves en `T` si las colisiones se resuelven por dispersión cerrada mediante exploración lineal (en papel).
- Determinar el resultado de insertar las claves en `T` si las colisiones se resuelven por dispersión cerrada mediante exploración cuadrática (en papel).
- ¿Considera usted que la tabla `T` equipada con la función de hash `h` es buena como tabla de hash? Justifique claramente su respuesta con respecto a las condiciones que una función de hash debiese cumplir.

### Comparando Tablas Hash vs Árboles AVL

El código a utilizar es provisto por la cátedra. La idea es realizar modificaciones pequeñas para poder realizar las mediciones necesarias.

Se entregan 4 archivos que contienen datos de un producto (código de 7 dígitos, detalle, precio, stock).

- productos_10.dat (contiene 10 registros)
- productos_100.dat (contiene 100 registros)
- productos_1000.dat (contiene 1000 registros)
- productos_10000.dat (contiene 10000 registros)

Son archivos binarios que contienen datos correspondientes a los productos que responden a la siguiente estructura:

```c
struct Registro {
    int codigo;
    char detalle[50];
    int precio;
    int stock;
};
```

La función `leerArchivoYCargarEstructuras` lee el archivo especificado por parámetro y, para cada registro leido del archivo, guardará tanto en la tabla hash como en el árbol AVL, el código del producto como clave y la posición física del registro adentro del archivo como dato.

Por lo tanto, ambas estructuras (la tabla hash y árbol AVL) actúan como índice en memoria para realizar búsquedas por código de producto y luego poder leer el registro desde el archivo de manera eficiente.

Una vez cargados esos índices, se procede a realizar una serie de búsquedas de códigos de productos generados al azar. Para ello se procede a generar códigos aleatorios y chequear a ver si se encuentran en la estructura de datos. En caso de que se encuentre, se lee el registro del archivo y se muestra por pantalla. De no encontrarse se vuelve a generar otro código aleatorio y se repite el proceso. El proceso termina al haber hecho exactamente la cantidad de búsquedas y lecturas que se especifican por parámetro.

Se pide realizar los siguientes experimentos modificando las variables del programa: `tamanoTablaHash`, `nombreArchivo` e `iteraciones`.
Una vez ejecutado, registrar en las siguientes tablas los tiempos de acceso promedio para cada estructura de datos. Y al finalizar,
responder las preguntas planteadas para cada experimento y para las conclusiones finales.

#### Archivo de 10 registros, realizando 500 repeticiones

| Tamaño Tabla Hash | TH c/colisiones | TH c/ZO            | Tiempo de acceso Árbol AVL |
|-------------------|-----------------|--------------------|----------------------------|
| 2                 |                 | ------- NO ------- |                            |
| 3                 |                 | ------- NO ------- |                            |
| 5                 |                 |                    |                            |
| 7                 |                 |                    |                            |
| 11                |                 |                    |                            |

#### Archivo de 100 registros, realizando 500 repeticiones

| Tamaño Tabla Hash | TH c/colisiones   | TH c/ZO            | Tiempo de acceso Árbol AVL |
|-------------------|-------------------|--------------------|----------------------------|
| 13                |                   | ------- NO ------- |                            |
| 29                |                   | ------- NO ------- |                            |
| 43                |                   | ------- NO ------- |                            |
| 67                |                   |                    |                            |
| 101               |                   |                    |                            |

#### Archivo de 1000 registros, realizando 50000 repeticiones

| Tamaño Tabla Hash | TH c/colisiones | TH c/ZO            | Tiempo de acceso Árbol AVL |
|-------------------|-----------------|--------------------|----------------------------|
| 113               |                 | ------- NO ------- |                            |
| 359               |                 | ------- NO ------- |                            |
| 727               |                 |                    |                            |
| 1009              |                 |                    |                            |
| 1451              |                 |                    |                            |

#### Archivo de 10000 registros, realizando 50000 repeticiones

| Tamaño Tabla Hash | TH c/colisiones | TH c/ZO            | Tiempo de acceso Árbol AVL |
|-------------------|-----------------|--------------------|----------------------------|
| 1433              |                 | ------- NO ------- |                            |
| 3529              |                 | ------- NO ------- |                            |
| 7297              |                 |                    |                            |
| 10093             |                 |                    |                            |
| 13873             |                 |                    |                            |

#### Preguntas

Para cada uno de los archivos anteriores, responder y justificar las siguientes preguntas:

- ¿Cómo afecta, en cada caso, el tamaño de la tabla hash? ¿Se comporta mejor cuando falta espacio o cuando sobra? ¿Es mejor que sobre mucho o que sobre poco? ¿Por qué?
- ¿Qué funciona mejor, la tabla hash con lista de colisiones o la tabla hash con zona de overflow? ¿Por qué?
- ¿Qué funciona mejor, la tabla hash con lista de colisiones o el árbol AVL? ¿Por qué?
- ¿Qué funciona mejor, la tabla hash con zona de overflow o el árbol AVL? ¿Por qué?
- ¿Por qué hay celdas pre-completadas con `NO` en el caso de la tabla hash con zona de overflow?

#### Conclusiones generales

- ¿Cómo afecta los tiempos el tamaño del archivo (cantidad de registros)? ¿Y la cantidad de repeticiones de búsqueda?
- ¿Cómo se puede explicar el hecho de que se tarde menos en buscar cuando hay muchos registros que cuando hay pocos?
- Mirando el código, ¿en qué se gasta la mayor parte del tiempo?
- Para este problema, ¿habrá alguna función de hash mejor que la función módulo? ¿Por qué?
