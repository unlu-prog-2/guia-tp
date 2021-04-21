# Práctica 1: Introducción a los TAD

**En cada caso se debe implementar el TAD descripto y una aplicación que, utilizando el tipo
abstracto de dato, permita al usuario el ingreso de una o más instancias (según sea
necesario), la aplicación de cualquiera de las operaciones y luego la obtención del resultado.**


### Ejercicio 1
Crear un TAD `NúmeroRacional`. El TAD debe disponer de las siguientes operaciones:
* `sumar`
* `restar`
* `multiplicar`
* `dividir`
* `potencia` (para calcular potencias enteras)
* `comparar` (que compara 2 `NúmeroRacional`) y debe retornar [`MAYOR`, `MENOR`, `IGUAL`] según corresponda.


### Ejercicio 2
Crear un TAD Vector que represente un vector de `n` elementos enteros. El TAD debe
disponer de las siguientes operaciones:

* Cargar Aleatorio dentro de un rango `[Desde, Hasta]` especificado como parámetro.
No deben existir valores repetidos.
* Sumatoria de los elementos del vector.
* Máximo valor del vector (debe además retornar la posición donde se ubica).
* Mínimo valor del vector (debe además retornar la posición donde se ubica).
* Promedio del vector.
* Devolución de un `string` con los elementos intercalados con un separador pasado
como parámetro.
* Multiplicar el valor de cada posición por un escalar. Por ejemplo `n * []`.  Si es `n=2`, el valor de cada posición será multiplicado por `2`.
* Permitir sumar este vector con otro igual que sea recibido por parámetro.  La suma se realizar posición a posición.


### Ejercicio 3
Crear un TAD `Matriz` que represente una matriz cuadrada de `n x n`. El TAD debe disponer de
las siguientes operaciones:
* `Sumar`.
* `Multiplicar`.
* `DiagonalPrincipal` y `DiagonalOpuesta` que retornan como vectores del [punto 2](#ejercicio-2).
* `MaximaFila` y `MaximaColumna` que retornan cuál es la fila y columna cuya sumatoria
es la mayor.
* `MultiplicarEscalar` para multiplicar la matriz por un escalar.  Por ej. `n * MA[]`.  Cada posición de la matriz es multiplicada por `n`.


### Ejercicio 4 (entregable)
Crear un TAD `Binario` que represente un número binario. El TAD debe disponer de las
siguientes operaciones:

* Sumar dos números binarios.
* Restar dos números binarios (con complemento a 2).
* Convertir un número binario a un número decimal y viceversa.
* Resolver la Operación Binaria `AND`, `OR` y `XOR`.


### Ejercicio 5
Crear un TAD Fecha, compuesta de día, mes y año, que defina las siguientes operaciones:

* Verificar que la fecha sea correcta (por ejemplo, `30/2/2019` es incorrecta).
* Sumar o restar varios días a una fecha.
* Calcular la diferencia de días entre dos fechas.
* Comparar una fecha con otra y retornar: `[ANTERIOR, POSTERIOR, IGUAL]`.
* Retornar si la fecha corresponde a un año bisiesto.

### Ejercicio 6 (entregable)
Crear un TAD “Estacionamiento” en el cual se digan el número de autos ingresados, el
horario de entrada, el de salida y cuánto es la tarifa por hora a pagar.

* Se pide saber cuánto debe abonar ese vehículo al momento de su retiro.
* Contemplar un valor fijo por media estadía y estadía completa.
  * Se paga estadía completa si el auto está más de 6 horas en el estacionamiento.
  * Se paga media estadía si el auto está más de 3 horas en el estacionamiento.
  * Se paga la tarifa por hora definida en otro caso.

Por ejemplo: 
* si el auto ingresa a las 08:00 y se retira a las 12:00 le corresponde “media estadía”
* si ingresa a las 10:00 y se retira a las 16:00 le corresponde “estadía completa”. 
* en cambio sí ingresa 08:45 y se retira a las 10:15 debe abonar por 1 hs 30 minutos.


### Ejercicio 7 (entregable)
Del punto anterior se desea:

* dejar registro físico en archivo de los vehículos que ingresan
al estacionamiento.  Agregar operaciones para poder dejar en un archivo binario secuencial 
el registro de cada vehículo, horario de ingreso, horario de egreso, la tarifa aplicada 
(si es por hora, media estadía o estadía completa) y el importe cobrado.

* además se desea dada una fecha determinada poder saber cuánto se percibió por hora, media
estadía y estadía completa.

* otra operación que se debe agregar es dado un rango de fechas poder determinar cuánto fue
lo recaudado día x día (o fecha por fecha).
  

### Ejercicio 8
En una heladería se ofrecen conos con bochas de 25 gramos de 3 sabores distintos a escoger
entre chocolate, vainilla, frutilla y limón.

El congelador de helados almacena un balde por cada
sabor, cada balde con su cantidad de helado disponible.

Al congelador se le puede:

* Aumentar una cantidad de helado de un determinado sabor, 
* Consultar si alcanza el helado para crear un cono dados tres sabores disponibles,
* Consultar las combinaciones de bochas de helado disponibles para crear conos.
* También se puede servir un helado siempre y cuando haya suficiente cantidad de helado de los sabores deseados.

Cree un TAD para representar un congelador de helados e implemente los métodos indicados.

### Ejercicio 9 (entregable)
Crear un TAD `CajaRegistradora` que tiene contenedores, uno para cada moneda y billete en circulación legal. Una caja permite:
* `Cargar`: lo cual incrementa un contenedor con la cantidad de billetes indicada.
* `DarVuelto`: dada una cantidad a cobrar y los billetes con los que se realizó el pago, devuelve el número de billetes de cada tipo que se debe retornar al cliente, utilizando los billetes de mayor valor siempre que haya disponibles e incrementando la cantidad de billetes que ingresaron por el pago.
* `EstadoYSaldo`: devuelve el saldo total del cajero y la disponibilidad de cada tipo de
billete.
