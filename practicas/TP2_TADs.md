# Práctica 1: Introducción a los TAD

En cada caso se debe implementar el TAD descripto y una aplicación que, utilizando el tipo abstracto de dato, permita al usuario el ingreso de una o más instancias (según sea
necesario), la aplicación de cualquiera de las operaciones y luego la obtención del resultado.

## Ejercicio 1

Crear un TAD `NumeroRacional`.

```c
    struct NumeroRacional {
        int numerador;
        int denominador;
    };
```

El TAD debe disponer de las siguientes operaciones:

```c
bool nr_inicializar(int numerador, int denominador, struct NumeroRacional *numeroRacional);
void nr_simplificar(struct NumeroRacional *numeroRacional);
struct NumeroRacional nr_sumar(struct NumeroRacional f1, struct NumeroRacional f2);
struct NumeroRacional nr_restar(struct NumeroRacional f1, struct NumeroRacional f2);
struct NumeroRacional nr_multiplicar(struct NumeroRacional f1, struct NumeroRacional f2);
struct NumeroRacional nr_dividir(struct NumeroRacional f1, struct NumeroRacional f2);

enum COMPARACION {
    MAYOR, MENOR, IGUAL
};
enum COMPARACION nr_comparar(struct NumeroRacional f1, struct NumeroRacional f2);

char *comparacion_to_string(enum COMPARACION comparacion);
char *nr_to_string(struct NumeroRacional numeroRacional);
```

### Casos de testeo

```c

struct NRacional f1, f2, f3;

nr_inicializar(2, 3, &f1);    // true
nr_inicializar(4, 5, &f2);    // true
nr_inicializar(2, 0, &f3);    // false
nr_inicializar(-4, 6, &f3);   // true

nr_simplificar(f1);           // {2/3}
nr_simplificar(f3);           // {-2/3}

nr_sumar(f1, f2);             // {22/15}

nr_restar(f1, f2);            // {-2/15}

nr_multiplicar(f1, f2);       // {8/15}

nr_dividir(f1, f2);           // {5/6}
nr_dividir(f2, f3);           // {-6/5}

nr_comparar(f1, f2);          // MENOR
```

## Ejercicio 1 bis. Pensemos distinto

Realizar otra implementación del TAD `NumeroRacional`, usando la estructura de un numero racional como una fracción mixta, pero que siga siendo compatible con el TAD anterior, de manera que la implementación utilizada sea transparente al usuario.

* **Fraccion Mixta:** El número racional se compone como la suma de una parte entera y una fracción pura (aquella que el denominador es menor que el numerador).

  * **34/15** es impropia y sería equivalente a la fracción mixta 2 4/15, donde 2 sería la `parte entera`, 4 es el `numerador` y 15 el `denominador`.

  * **-21/4** es impropia y sería equivalente a la fracción mixta -5 -1/4, donde -5 sería la `parte entera`, -1 es el `numerador` y 4 el `denominador`.

```c
    struct NumeroRacional {
        int parteEntera;
        int numerador;
        int denominador;
    };
```

## Ejercicio 2

Crear un TAD Fecha, compuesta de día, mes y año.

```c
    struct Fecha {
// A definir por el desarrollador
    };
```

El TAD debe disponer de las siguientes operaciones:

```c

unsigned short fecha_dia(struct Fecha f);

unsigned short fecha_mes(struct Fecha f);

unsigned int fecha_anio(struct Fecha f);

bool fecha_inicilizar(unsigned short dia, unsigned short mes, unsigned int anio, struct Fecha f);

struct Fecha fecha_sumarDias(struct fecha f, int dias);

int fecha_distanciaEnDias(struct fecha f1, struct fecha f2);

enum COMPARAR_FECHA {
    ANTERIOR, POSTERIOR, IGUAL
}

enum COMPARAR_FECHA fecha_comparar(struct fecha f1, struct fecha f2);

bool fecha_enBisiesto(struct fecha f);

char* fecha_nombreMes(struct fecha f);
```

### Casos de testeo

```c
struct Fecha f1, f2, f3;

fecha_inicializar(20,1,2023, f1); => True

fecha_dia(f1); => 20
fecha_mes(f1); => 1
anio(f1); => 2023

fecha_inicializar(30,1,2023, f2); => True
fecha_inicializar(30,2,2023, f3); => False
fecha_inicializar(29,2,2024, f3); => True

fecha_sumarDias(f1, 13) => {2,2,2023}
fecha_distanciaEnDias(f1,f2); => 10

fecha_comparar(f3, f2); => POSTERIOR

fecha_enBisiesto(f1); => False
fecha_enBisiesto(f3); => True

fecha_nombreMes(f1); => "Enero"

```

## Pensemos distinto

Crear un TAD Fecha, donde todos los cálculos se realicen utilizando días julianos, pero que siga siendo compatible con el TAD anterior, de manera que la implementación utilizada sea transparente al usuario.

## Ejercicio 3

Crear un TAD `CajaRegistradora` que tiene contenedores, uno para cada moneda y billete en circulación legal.

```c
    struct Contenedor {
        float denominacion;
        unsigned int cantidad;
    };

    struct CajaRegistradora {
        struct Contenedor contenedores[];
    };
```

El TAD debe disponer de las siguientes operaciones:

```c
struct CajaRegistradora cr_inicializar();

struct Contenedor contenedor_inicializar(float denominacion, unsigned int cantidad);

```

* `Cargar`: lo cual incrementa un contenedor con la cantidad de billetes indicada.
* `DarVuelto`: dada una cantidad a cobrar y los billetes con los que se realizó el pago, devuelve el número de billetes de cada tipo que se debe retornar al cliente, utilizando los billetes de mayor valor siempre que haya disponibles e incrementando la cantidad de billetes que ingresaron por el pago y decrementando los dados de vuelto.
* `Saldo`: devuelve el saldo total del cajero.
* `CerrarCaja`: retorna un string con el detalle de los billetes y monedas que quedaron al final del turno en la caja registradora.

```c
struct contenedor contenedor_inicializar(float denominacion, unsigned int cantidad);

void cr_cargar(Contenedor cont, CajaRegistradora caja);

struct CajaRegistradora cr_darVuelto(float cantidadACobrar, struct CajaRegistradora billetesDados, struct CajaRegistradora cajaActual);

double cr_saldo(struct CajaRegistradora caja);

char* cr_cerrarCaja(struct CajaRegistradora caja);
```

<!-- ## Ejercicio 4

Crear un TAD `TarjetaDeCredito` que tiene el número de tarjeta, la fecha de vencimiento y los límites de crédito en una cuota y en cuotas. Este TAD debe permitir:

* `ValidarNro`: Validar si el número de tarjeta (de 16 dígitos) usando el siguiente algoritmo:
  * Duplicar el valor de uno de cada dos dígitos, empezando desde la derecha. Es decir, el último dígito no cambia; el penúltimo es duplicado; el anterior no cambia; y sigue así. Por ejemplo, [1,3,8,6] se vuelve [2,3,16,6].
  * Sumar los dígitos de los valores duplicados y los dígitos no duplicados del número original. Por ejemplo, [2,3,16,6] se vuelve 2+3+1+6+6 = 18.
  * Calcular el resto cuando esa suma es dividida por 10. En el ejemplo anterior, el resto sería 8.
  * Si el resultado es 0 entonces el número es válido.
* `EntidadEmisora`: El primer/os digito/s, a la izquierda, representa/n la entidad emisora, a saber:

| Rangos de INN    | Emisora            |
| :--:             | :--:               |
| 4                | *Visa*             |
| 2021-2720; 51-55 | *Mastercard*       |
| 34-37            | *American Express* |
| 50, 56-58        | *Maestro*          |

* `Comprar`: Se requiere validar la compra, a saber:
  * que el número sea correcto, que la tarjeta no se encuentre vencida y que le alcance el límite de crédito para realizar la compra.
  * Una vez aceptado el movimiento, se debe reducir el límite de crédito en una cuota teniendo en cuenta que si la tarjeta es una *Visa* o una *American Express* se descuenta el 80% del monto, en el resto de las tarjetas se descuenta el monto completo.
  * En cambio, si se trata de una compra en cuotas, todas las tarjetas descuentan, en compras hasta 6 cuotas, el 90% del monto adeudado (cuotas de la 2ª en adelante) al límite de compras en cuotas, y descuentan del límite de compras en una cuota el monto de la primera cuota. En compras de más de 6 cuotas es igual, salvo que descuentan solo el 70% de las cuotas adeudas del límite de compra en cuotas.
* `MostrarLimites`: Informar los límites de compras disponibles. -->
