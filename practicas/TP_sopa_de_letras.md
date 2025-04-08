# Trabajo Práctico 1: Sopa de Letras

## Objetivo
Implementar un programa que resuelva sopas de letras, encontrando palabras en una grilla de caracteres en todas las direcciones posibles (horizontal, vertical y diagonal).

## Descripción
El programa debe leer una sopa de letras desde un archivo de entrada, buscar las palabras especificadas en todas las direcciones posibles, y escribir los resultados en un archivo de salida.

### Formato de entrada
El archivo de entrada contendrá:
1. La grilla de la sopa de letras, donde cada línea representa una fila de la grilla.
2. Una línea en blanco (actuando como separador).
3. La lista de palabras a buscar, una por línea.

### Formato de salida
Para cada `palabra` buscada, el programa debe escribir en el archivo de salida:
- Si la palabra fue encontrada: `palabra: (fila_inicio,columna_inicio) -> (fila_fin,columna_fin)`
- Si la palabra no fue encontrada: `palabra: No encontrada`

Las coordenadas deben ser números naturales (no incluye el cero), donde:
- La primera fila es 1.
- La primera columna es 1.

### Ejemplo
**Archivo de entrada:**
```
XHOLA
MUNDO
LMSPG
LOEKD

HOLA
MUNDO
HUMO
NOTA
```

**Archivo de salida esperado:**
```
HOLA: (1,2) -> (1,5)
MUNDO: (2,1) -> (2,5)
HUMO: (1,2) -> (4,2)
NOTA: No encontrada
```

## Requisitos
1. El programa debe poder leer la grilla y las palabras desde un archivo
2. Debe buscar las palabras en todas las direcciones posibles:
   - Horizontal (izquierda a derecha o derecha a izquierda)
   - Vertical (arriba a abajo o abajo a arriba)
   - Diagonal (en todas las direcciones)
3. Debe manejar correctamente los casos donde las palabras no se encuentran
4. El programa debe ser eficiente y manejar correctamente la memoria

## Estructura del código
Se recomienda implementar las siguientes estructuras y funciones:

```c
#define TAMANIO_MAXIMO_GRILLA 100
#define TAMANIO_MAXIMO_PALABRA 50
#define MAXIMO_PALABRAS 100

struct Posicion {
    unsigned int fila;
    unsigned int columna;
};

struct ResultadoPalabra {
    char palabra[TAMANIO_MAXIMO_PALABRA];
    bool encontrada;
    struct Posicion inicio;
    struct Posicion fin;
};

struct SopaDeLetras {
    char grilla[TAMANIO_MAXIMO_GRILLA][TAMANIO_MAXIMO_GRILLA];
    int filas;
    int columnas;
    char palabras[MAXIMO_PALABRAS][TAMANIO_MAXIMO_PALABRA];
    int cantidad_palabras;
};
```

## Comparación de archivos
A la hora de escribir las aserciones, el archivo de salida producido tiene que ser igual a los provistos como ejemplo. Para ello, pueden usar la siguiente función para compararlos.
```c
bool file_eq(const char *archivo_esperado, const char *archivo_generado) {
    FILE *esperado = fopen(archivo_esperado, "r");
    FILE *generado = fopen(archivo_generado, "r");

    if (!esperado || !generado) {
        if (esperado) fclose(esperado);
        if (generado) fclose(generado);
        return false;
    }

    char linea_esperada[256];
    char linea_generada[256];
    bool son_iguales = true;

    while (fgets(linea_esperada, sizeof(linea_esperada), esperado) != NULL) {
        if (fgets(linea_generada, sizeof(linea_generada), generado) == NULL) {
            son_iguales = false;
            break;
        }

        if (strcmp(linea_esperada, linea_generada) != 0) {
            son_iguales = false;
            break;
        }
    }
    // Si hay diferencia, mostrar las líneas que no coinciden
    if (!son_iguales) {
        printf("Los archivos difieren.\n");
        printf("Línea esperada: %s", linea_esperada);
        printf("Línea generada: %s", linea_generada);
    }

    // Verificar que no queden líneas adicionales en el archivo generado
    if (fgets(linea_generada, sizeof(linea_generada), generado) != NULL) {
        son_iguales = false;
    }

    fclose(esperado);
    fclose(generado);
    return son_iguales;
}
```

Un ejemplo de casos de test podría ser:
```c
int main() {
    imprimir_titulo("TP 1 - Sopa de Letras");

    resolver_sopa_de_letras("archivos/prueba1_entrada.txt", "archivos/prueba1_salida.txt");
    assert(file_eq("archivos/prueba1_salida_esperada.txt", "archivos/prueba1_salida.txt"));

    resolver_sopa_de_letras("archivos/prueba2_entrada.txt", "archivos/prueba2_salida.txt");
    assert(file_eq("archivos/prueba2_salida_esperada.txt", "archivos/prueba2_salida.txt"));

    return 0;
}
```

## Archivos de prueba
Se proporcionarán archivos de prueba con diferentes casos:
- Grillas de diferentes tamaños.
- Palabras en diferentes direcciones.
- Palabras que no se encuentran.

### Ejemplo 1 - Palabras variadas
* [Archivo de entrada](archivos/prueba1_entrada.txt)
* [Archivo de salida esperado](archivos/prueba1_salida_esperada.txt)

### Ejemplo 2 - Temática jugadores de fútbol
![Ejemplo 2](archivos/prueba2.png)
* [Archivo de entrada](archivos/prueba2_entrada.txt)
* [Archivo de salida esperado](archivos/prueba2_salida_esperada.txt)

Los archivos deben ser colocados adentro de la práctica de recursividad, en la carpeta `archivos`.
Y deben agregar el siguiente fragmento, adentro del archivo CMakeLists.txt, debajo de `enable_testing()`:
```cmake
# Copiar los archivos de datos
file(GLOB DATA_FILES "archivos/*.txt")
foreach (DATA_FILE ${DATA_FILES})
    get_filename_component(FILE_NAME ${DATA_FILE} NAME)
    configure_file(${DATA_FILE} archivos/${FILE_NAME} COPYONLY)
endforeach ()
```

## Evaluación
El trabajo será evaluado según los siguientes criterios:
1. Correctitud: El programa debe funcionar correctamente "por lo menos" con los archivos de prueba proporcionados.
2. Estructura del código: Organización, legibilidad y modularidad.
3. Manejo de memoria: Uso correcto de memoria dinámica.
4. Eficiencia: El programa debe resolver el problema de manera eficiente.

## Entrega
- El código fuente del programa adentro de la práctica de recursividad.
- Crear un archivo nuevo: `test_tp1_sopa_de_letras.c` y agregar todo el código ahí adentro.
- Comentarios explicativos en el código, solo en las partes que necesiten aclaración.
- Tiene que correr bien dentro de GitHub Actions y tiene que tener el tilde verde ✅ indicando que pasan todos los tests.

## Fecha de entrega
Según lo indicado en la guía de trabajos prácticos.

## Notas
- Se recomienda comenzar con casos simples y luego generalizar.
- Es importante probar el programa con diferentes casos de entrada.
- El manejo de archivos debe ser robusto, verificando posibles errores. 
