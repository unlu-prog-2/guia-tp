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
Agregar un tercer parámetro para indicar si permite o no repeticiones.
* Sumatoria de los elementos del vector.
* Promedio del vector.
* Máximo valor del vector (debe además retornar la posición donde se ubica).
* Mínimo valor del vector (debe además retornar la posición donde se ubica).
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
* `Buscar` que recibe el valor a buscar y retorna la fila y la columna de la primera ocurrencia.


### Ejercicio 4
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
* La tarifa minima a abonar es de 1 hora, luego se fracciona el tiempo cada 10 minutos.
* Contemplar un valor fijo por media estadía y estadía completa.
  * Se paga estadía completa si el auto está más de 6 horas en el estacionamiento.
  * Se paga media estadía si el auto está más de 3 horas en el estacionamiento.
  * Se paga la tarifa por hora definida en otro caso.

Por ejemplo: 
* si el auto ingresa a las 08:00 y se retira a las 12:00 le corresponde "media estadía"
* si ingresa a las 10:00 y se retira a las 16:00 le corresponde "estadía completa". 
* sí ingresa 08:45 y se retira a las 10:15 debe abonar por 1 hs 30 minutos.
* en cambio si ingresa 10:30 y se retira 11:44 debe abonar 1 hs 20 minutos.


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
En una heladería se ofrecen conos con bochas de 25 gramos de 2 y 3 sabores distintos a escoger
entre chocolate, crema americana, frutilla y limón.

El congelador de helados almacena un balde por cada
sabor, cada balde con su cantidad de helado disponible.

Al congelador se le puede:

* Aumentar una cantidad de helado de un determinado sabor, 
* Consultar si alcanza el helado para crear un cono dados 2 o 3 sabores disponibles,
* Consultar las combinaciones bochas de helado disponibles para crear conos de ambos tipos.
* También se puede servir un helado siempre y cuando haya suficiente cantidad de helado de los sabores deseados.

Cree un TAD para representar un congelador de helados e implemente los métodos indicados.

### Ejercicio 9 (entregable)
Crear un TAD `CajaRegistradora` que tiene contenedores, uno para cada moneda y billete en circulación legal. Una caja permite:
* `Cargar`: lo cual incrementa un contenedor con la cantidad de billetes indicada.
* `DarVuelto`: dada una cantidad a cobrar y los billetes con los que se realizó el pago, devuelve el número de billetes de cada tipo que se debe retornar al cliente, utilizando los billetes de mayor valor siempre que haya disponibles e incrementando la cantidad de billetes que ingresaron por el pago.
* `Saldo`: devuelve el saldo total del cajero 
* `CerrarCaja`: retorna los billetes y monedas que quedaron al final del turno en la caja registradora.

### Ejercicio 10 (entregable)

Crear un TAD `TarjetaDeCredito` que tiene el número de tarjeta, la fecha de vencimiento y los límites de crédito en una cuota y en cuotas. Este TAD debe permitir:
* `ValidarNro`: Validar si el número de tarjeta (de 16 dígitos) usando el siguiente algoritmo:
  -	Duplicar el valor de uno de cada dos dígitos, empezando desde la derecha. Es decir, el último dígito no cambia; el penúltimo es duplicado; el anterior no cambia; y sigue así. Por ejemplo, [1,3,8,6] se vuelve [2,3,16,6].
  -	Sumar los dígitos de los valores duplicados y los dígitos no duplicados del número original. Por ejemplo, [2,3,16,6] se vuelve 2+3+1+6+6 = 18.
  -	Calcular el resto cuando esa suma es dividida por 10. En el ejemplo anterior, el resto sería 8.
  - Si el resultado es 0 entonces el número es válido.
* `EntidadEmisora`: El primer/os digito/s, a la izquierda, representa/n la entidad emisora, a saber:

<table border="2" align="center">
  <tr>  
  <th> Rangos de INN</th>
  <th> Emisora</th>
  </tr>
  <tr>
    <td>4</td>
    <td>Visa</td>
  </tr>
  <tr>
    <td>2021-2720; 51-55</td>
    <td>Mastercard</td>
  </tr>
   <tr>
    <td>34-37</td>
    <td>American Express</td>
  </tr>    
  <tr>
    <td>50, 56-58</td>
    <td>Maestro</td>
  </tr>
</table>

* `Comprar`: Se requiere validar la compra, a saber: 
  que el número sea correcto, que la tarjeta no se encuentre vencida y que le alcance el límite de crédito para realizar la compra. 
  
  Una vez aceptado el movimiento, se debe reducir el límite de crédito en una cuota teniendo en cuenta que si la tarjeta es una *Visa* o una *American Express* se descuenta el 80% del monto, en el resto de las tarjetas se descuenta el monto completo. 
  En cambio si se trata de una compra en cuotas, todas las tarjetas descuentan, en compras hasta 6 cuotas, el 90% del monto adeudado (cuotas de la 2da en adelante) al limite de compras en cuotas, y descuentan del límite de compras en una cuota el monto de la primera cuota. En compras de más de 6 cuotas es igual, salvo que descuentan sólo el 70% de las cuotas adeudas del limite de compra en cuotas.

* `MostrarLimites`: Informar los límites de compras disponibles.
