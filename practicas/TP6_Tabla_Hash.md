# Práctica 7: Tablas Hash

## Para empezar a trabajar

Construir el TAD de Tabla Hash correspondiente a las implementaciones de **Dispersión Abierta** [lista de colisiones" y "zona de overflow - ZO"] y de **Dispersión Cerrada** [Lineal y Cuadrática] de teniendo en cuenta:

- Definir las estructuras de datos en función a las especificaciones dadas en clase y documentadas en los PDF que se encuentran en el aula virtual de la asignatura.
- Se las debe implementar mediante objetos y respetar estrictamente los nombres y parámetros de cada una de las operaciones del TAD especificadas.
- Se lo debe probar y testear de forma tal que se pueda asegurar que el TAD funciona correctamente.

### Entendiendo como funcionan

Se tiene la entrada `(531, 230, 711, 317, 434, 865, 294)` y una función hash `h(x) = x mod 10`, expresar las tablas hash
correspondientes a:

- Tabla hash por encadenamiento.
- Tabla hash por recolocación lineal (`a = 1`).
- Tabla hash por recolocación cuadrática.

### Comparando tablas Hash

Sea `T` una tabla de hash de tamaño 10 y `h` la siguiente función de hash `h(k) = 4 + 3k mod 10`.

Se quieren insertar en `T` elementos con claves `(12, 13, 15, 5, 42, 8, 22, 91, 51, 21)` en ese mismo orden usando `h`.

- Determinar el resultado de insertar las claves en T si las colisiones se resuelven por encadenamiento.
- Determinar el resultado de insertar las claves en T si las colisiones se resuelven por inserción lineal.
- ¿Considera usted que la tabla T equipada con la función de hash h es buena como tabla de hash? Justifique claramente
  su respuesta con respecto a las condiciones que una función de hash debiese cumplir.

### Comparando Tablas Hash vs Árboles AVL

Desarrollar un algoritmo que dado un archivo que contendrá los datos de un producto (código de 7 dígitos, detalle, precio, stock) genere una tabla hash donde la clave será el código y se guardará como dato la posición física del registro para poder realizar accesos directos.

Generar una rutina que:

- mida el porcentaje de ocupación de la tabla.
- mida el porcentaje de claves en las `listas de colisiones` o `ZO` versus la cantidad de claves cargadas.
- compare los tiempos de accesos a las claves entre un árbol `AVL` y una `tabla hash`.

Se debe poder indicarle cuántas claves se deben generar (entre 1 y 5000), cuántas repeticiones se realizarán y cuál es el rango de las claves a generar. Luego se tomarán claves al azar dentro del mismo rango y se buscarán en ambas estructuras.

El proceso se repetirá `n` veces (repeticiones a ingresar por el operador).

> Documentar la conclusión final respecto a los tiempos de accesos de ambas estructuras.

### Comparando Tablas Hash vs Árboles B

REalizar las mismas mediciones, porcentuales y temporales, que en el ejercicio anterior para poder comparar las Tablas Hash vs. los Árboles B,

> Documentar la conclusión final respecto a los tiempos de accesos de ambas estructuras.
