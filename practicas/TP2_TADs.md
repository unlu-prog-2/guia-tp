# Práctica 1: Introducción a los TAD

**En cada caso se debe implementar el TAD descripto y una aplicación que, utilizando el tipo abstracto de dato, permita al usuario el ingreso de una o más instancias (según sea
necesario), la aplicación de cualquiera de las operaciones y luego la obtención del resultado.**

## Ejercicio 1

Crear un TAD `NRacional`.

```C
    struct NRacional {
        int numerador;
        unsigned int denominador;
    };
```

El TAD debe disponer de las siguientes operaciones:

```C
bool nRacional_inicializar(int numerador, unsigned int denominador, struct NRacional f);

struct nRacional nRacional_simplificar(struct NRacional f1);

struct nRacional nRacional_sumar(struct NRacional f1, struct NRacional f2);

struct nRacional nRacional_restar(struct NRacional f1, struct NRacional f2);

struct nRacional nRacional_multiplicar(struct NRacional f1, struct NRacional f2);

struct nRacional nRacional_dividir(struct NRacional f1, struct NRacional f2);

struct nRacional nRacional_potencia(struct NRacional f1, struct NRacional f2);

enum COMPARACION {
    MAYOR, MENOR, IGUAL
};

enum COMPARACION nRacional_comparar(struct NRacional f1, struct NRacional f2);
```

### Casos de testeo

```C

struct NRacional f1, f2, f3;

nRacional_inicializar(2, 3, f1) => True
nRacional_inicializar(4, 5, f2) => True
nRacional_inicializar(2, 0, f3) => False
nRacional_inicializar(-4, 6, f3) => False

nRacional_simplificar(f1); => {2, 3}
nRacional_simplificar(f3); => {-2, 3}

nRacional_sumar(f1, f2); => {22, 15}

nRacional_restar(f1, f2); => {-2, 15}

nRacional_multiplicar(f1, f2); => {8, 15}

nRacional_dividir(f1, f2); => {5, 6}
nRacional_dividir(f2, f3); => {-6, 5}

nRacional_potencia(f1, 2); => {4, 9}

nRacional_comparar(f1, f2); => MENOR
```

## Ejercicio 2

Crear un TAD Fecha, compuesta de día, mes y año.

```C
    struct Fecha {
        unsigned short dia, mes;
        unsigned long anio;
    };
```

El TAD debe disponer de las siguientes operaciones:

```C
bool fecha_inicilizar(unsigned short dia, unsigned short mes, unsigned long anio, struct Fecha f);

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

```C
struct Fecha fecha1, fecha2, fecha3;

fecha_inicializar(20,1,2023, f1); => True
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

## Ejercicio 3

Crear un TAD `CajaRegistradora` que tiene contenedores, uno para cada moneda y billete en circulación legal.

```C
    struct Contenedor {
        float denominacion;
        unsigned int cantidad;
    };

    struct CajaRegistradora {
        struct Contenedor contenedores[];
    };
```

El TAD debe disponer de las siguientes operaciones:

```C
struct contenedor contenedor_inicializar(float denominacion, unsigned int cantidad);

struct contenedor contenedor_inicializar(float denominacion, unsigned int cantidad);
```

* `Cargar`: lo cual incrementa un contenedor con la cantidad de billetes indicada.
* `DarVuelto`: dada una cantidad a cobrar y los billetes con los que se realizó el pago, devuelve el número de billetes de cada tipo que se debe retornar al cliente, utilizando los billetes de mayor valor siempre que haya disponibles e incrementando la cantidad de billetes que ingresaron por el pago.
* `Saldo`: devuelve el saldo total del cajero.
* `CerrarCaja`: retorna los billetes y monedas que quedaron al final del turno en la caja registradora.

## Ejercicio 4

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
* `MostrarLimites`: Informar los límites de compras disponibles.
