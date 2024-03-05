# Práctica 4: Colas

## Actividades de Aprendizaje

### Implementación de los TAD

Construir el TAD de listas correspondientes a las implementaciones de **"Arreglos"** y **"Punteros"** teniendo en cuenta:

    a. Usar los `.h` definidos por la cátedra.

    b. Se los debe implementar cada uno en un `.c` diferente. Es decir un archivo para cada implementación.

    c. Se los debe probar y testear de forma tal que se pueda asegurar que el TAD funciona correctamente.

### Ejercicios a resolver con los TAD

> Los siguientes ejercicios siguientes deben ser implementados y resueltos en forma genérica, esto significa que se debería poder referenciar cualquiera de las implementaciones de lista (*arreglos o punteros*) y los mismos deben seguir en funcionamiento sin problemas.
>
> Implementar todos los ejercicios que puedan de **forma iterativa y de forma recursiva** para poder analizar la diferencia en la **complejidad algorítmica** en cada caso.
>
> En todos los casos es imprescindible no perder la cola con los datos originales.

#### Buscar elemento

Dada una cola y una clave, buscar la clave y determinar si existe en la Cola.

    ```c
        bool buscarElemento(Cola c, TipoElemento e);
    ```

Casos de prueba

    ```c
        Cola c = (1, 6, 3, 7, 4, 8, 3);
        buscarElemento(c,  1); // true
        buscarElemento(c, 13); // false
    ```

#### Colarse

Dada una cola, colocar en una posición ordinal determinada, recibida por parámetro, un
nuevo elemento (insertar un elemento nuevo).

    ```c
        void insertarElemento(Cola c, TipoElemento e, int pos);
    ```

Casos de prueba

    ```c
        Cola c = (1, 6, 3, 7, 4, 8, 3);
        insertarElemento(c, 5, 20);  // (1, 6, 3, 7, 20, 4, 8, 3)
        insertarElemento(c, 1, 30);  // (30, 1, 6, 3, 7, 20, 4, 8, 3)
    ```

#### Eliminar elemento

Eliminar de una cola todas las ocurrencias de un elemento dado encontrado por la clave.

    ```c
        void eliminarElemento(Cola c, int clave);
    ```

Casos de prueba

    ```c
        Cola c = (1, 6, 3, 7, 4, 8, 3);
        eliminarElemento(c, 3);  // (1, 6, 7, 4, 8)
        eliminarElemento(c, 1);  // (6, 7, 4, 8)
    ```

#### Contar elementos

Contar los elementos de la cola.

    ```c
        int tamanoCola(Cola c);
    ```

Casos de prueba

    ```c
        Cola c = (1, 6, 3, 7, 4, 8, 3);
        tamanoCola(c);  // 7
    ```

#### Duplicado

Realizar una función que realice una copia de una cola.

    ```c
        Cola copia(Cola c);
    ```

Casos de prueba

    ```c
        Cola c = (1, 6, 3, 7, 4, 8, 3);
        copia(c);  // (1, 6, 3, 7, 4, 8, 3)
    ```

#### Invertir

Invertir el contenido de una cola sin destruir la cola original.

    ```c
        Cola invertir(Cola c);
    ```

Casos de prueba

    ```c
        Cola c = (1, 6, 3, 7, 4, 8, 3);
        invertir(c);  // (3, 8, 4, 7, 3, 6, 1)
    ```

#### Comparar colas

Dadas dos colas, determinar si sus contenidos son iguales tanto en posición como en
datos (solo comparar por la clave), sin destruirlas.
> Utilizar para la resolución del problema una sola cola auxiliar.

    ```c
        bool comparar(Cola c1, Cola c2);
    ```

Casos de prueba

    ```c
        Cola c1 = (1, 6, 3, 7, 4, 8, 3);
        Cola c2 = (1, 6, 3, 7, 4, 8, 3);
        Cola c3 = (1, 6, 3, 7, 4, 8);
        Cola c4 = (6, 1, 3, 7, 4, 8, 5);
        comparar(c1, c2);  // true
        comparar(c1, c3);  // false
        comparar(c1, c4);  // false
    ```

#### Mismos elementos

Dadas 2 colas se pide determinar si ambas contienen los mismos elementos. Se considera que contendrán los mismos elementos sin importar su posición o las repeticiones.

    ```c
        bool mismosElementos(Cola c1, Cola c2);
    ```

Casos de prueba

    ```c
        Cola c1 = (1, 6, 3, 7, 4, 8, 3);
        Cola c2 = (6, 6, 3, 6, 1, 7, 4, 8, 3);
        Cola c3 = (6, 3, 7, 4, 8);
        mismosElementos(c1, c2);  // true
        mismosElementos(c2, c1);  // true
        mismosElementos(c1, c3);  // false
        mismosElementos(c3, c1);  // false
    ```

#### Únicos

Dada una cola de números enteros, no ordenada, construir un algoritmo que permita
pasar a otra cola todos los elementos que no se repiten en la primera, sin destruir el
contenido de la cola original y dejándola en su estado inicial.

    ```c
        Cola unicos(Cola c);
    ```

Casos de prueba

    ```c
        Cola c = (1, 6, 3, 7, 4, 8, 3);
        unicos(c);  // (1, 6, 7, 4, 8)
        Cola c1 = (12, 6, 8, 5, 8, 12, 12);
        unicos(c);  // (6, 5)
    ```

#### Divisores

Dada una cola de valores enteros no repetidos y mayores o iguales a 2, obtener todos
los valores que son Divisores Totales o parciales. Se dice que un valor es Divisor Total si permite dividir a todos los demás valores de la cola en forma exacta. Se dice que un divisor es parcial si al menos puede dividir en forma exacta al menos al 50% de la cola (es decir a la mitad de los elementos). Determinar la complejidad algorítmica de la solución.
Ejemplo: si “C” contiene (8, 12, 2, 6, 4) se dice que “2” es el divisor total de la cola porque divide al resto en forma exacta. Y “4” es divisor parcial por divide a 8,12 y el mismo.

    ```c
        struct Divisores {
            int total;
            Lista parciales;
        };

        struct Divisores *buscaDivisores(Cola c);
    ```

Casos de prueba

    ```c
        Cola c1 = (8, 12, 2, 6, 4);
        buscaDivisores(c1);  // total: 2, parciales: (4)
        Cola c2 = (8, 12, 2, 24, 6, 4);
        buscaDivisores(c2);  // total: 2, parciales: (6, 4)
    ```

#### Repetidos

Dada una pila y una cola retornar en una lista todos los valores comunes a ambas y en qué posición ordinal se encontró cada uno en su estructura. No se deben destruir las estructuras originales.

    ```c
        struct Repetido {
            int clave;
            int posicionEnPila;
            int posicionEnCola;
        };

        Lista buscaRepetidos(Pila p, Cola c);
    ```

Casos de prueba

    ```c
        Pila p = (2, 5, 8, 19, 3, 4);
        Cola c = (4, 18, 12, 5, 6);
        buscaRepetidos(c);  // [
                            //   { clave: 5, posicionEnPila: 2, posicionEnCola: 4 },
                            //   { clave: 4, posicionEnPila: 6, posicionEnCola: 1 }
                            // ]
    ```

#### Atención al cliente

Un negocio tiene 3 ventanillas para atender a sus clientes. Los clientes forman cola en
cada ventanilla.

Un día, dos de los tres empleados que atienden las ventanillas no
pueden asistir al trabajo, quedando uno solo para atender a las tres colas. Este
empleado decide que, a medida que lleguen los clientes, atenderá por cierta cantidad
de minutos (que denominaremos Q) a cada cola, paseándose por todas las colas
equitativamente.

Se pide que implemente un algoritmo que modele esta situación y devuelva como resultado
el orden en que fueron atendidos los clientes.

##### Ejemplo

El algoritmo recibe un Q de tiempo que atenderá a cada cola y las tres colas cargadas con clientes, donde cada cliente es la cantidad de tiempo que se necesita para atenderlo.

    ```c
        int q = 10;
        Cola c1 = (40, 20, 30);
        Cola c2 = (20, 10);
        Cola c3 = (10, 10, 10);
        
        procesar(q, c1, c2, c3); // [
                                //    "Cliente 1 Cola 3",
                                //    "Cliente 1 Cola 2",
                                //    "Cliente 2 Cola 3",
                                //    "Cliente 2 Cola 2",
                                //    "Cliente 3 Cola 3",
                                //    "Cliente 1 Cola 1",
                                //    "Cliente 2 Cola 1",
                                //    "Cliente 3 Cola 1"
                                // ]
    ```
