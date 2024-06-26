# Práctica 8: Conjuntos

**En cada caso se debe implementar el TAD descripto y una aplicación que, utilizando el tipo abstracto de dato, permita
al usuario el ingreso de una o más instancias (según sea necesario), la a0plicación de cualquiera de las operaciones y
luego la obtención del resultado.**

## Para empezar a trabajar

Construir el TAD de conjuntos correspondiente a la implementación de “lista” teniendo en cuenta:

- Definir las estructuras de datos en función a las especificaciones dadas en clase y documentadas en los PDF que se
  encuentran en el aula virtual de la asignatura.
- Se las debe implementar mediante objetos y respetar estrictamente los nombres y parámetros de cada una de las
  operaciones del TAD especificadas.
- Se lo debe probar y testear de forma tal que se pueda asegurar que el TAD funciona correctamente.

### Operaciones Básicas

Desarrollar un algoritmo que:

- dados un conjunto y un elemento numérico verifique si el elemento pertenece al conjunto.
- dados dos conjuntos de elementos numéricos verifique:
  - las operaciones de Unión, Intersección, Diferencia y Diferencia Simétrica.
    >
    > #### Unión
    >
    > $\forall x \in A \cup B \Leftrightarrow x \in A \vee x \in B$.
    >
    > #### Intersección
    >
    > $\forall x \in A \cap B \Leftrightarrow x \in A \wedge x \in B$.
    >
    > #### Diferencia
    >
    > $\forall x \in A \setminus B \Leftrightarrow x \in A \wedge x \notin B$.
    >
    > #### Diferencia Simétrica
    >
    > $\forall x \in A \bigtriangleup B \Leftrightarrow x \in (A \setminus B) \cup x \in (B \setminus A)$.
    >
    > &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
    > $\Leftrightarrow (x \in A \wedge x \notin B) \vee (x \in B \wedge x \notin A)$.

  - si el primero está incluido o si son iguales

    >
    > #### Inclusión
    >
    > $A \subseteq B \Leftrightarrow \forall x \in \Rightarrow x \in B$.
    >
    > #### Igualdad
    >
    > $A = B \Leftrightarrow [\forall x, x\in A \Leftrightarrow x \in B]$
    >
    > &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
    > $\Leftrightarrow[(\forall x \in A \Rightarrow x \in B) \wedge (\forall x \in B \Rightarrow x \in A)]$.

### Uniones e Intersecciones Generales

Desarrollar un algoritmo que dada una `colección` de conjuntos de elementos tipo numérico (int)
realice las operaciones de Unión e Intersección.

### Propiedad Transitiva

Desarrollar un algoritmo que dado tres conjuntos puedan demostrar la propiedad de la
transitividad: “si A es subconjunto de B y B a su vez es subconjunto de C, entonces A
es subconjunto de C”.

### Subconjunto Parcial

Dados 3 conjuntos determinar si alguno es un subconjunto parcial o total del otro. Se considera un subconjunto parcial cuando al menos la mitad de los elementos de uno están en el otro. Determinar la complejidad algorítmica.

> ****Ejemplo: si A = (3, 4, 5) y B = (1,2,3,4,5,6,7,8,9) y C = (2,4,6,8,7) entonces a “A” es un subconjunto total “B” porque todos los elementos de “A” están en “B”, “C” es un subconjunto total de “B” porque todos los elementos de “C” están en “B”. A su vez “B” es un subconjunto parcial de “C” porque al menos la mitad de los elementos de “B” están en “C”.

### Clasificación de elementos

Desarrollar un algoritmo que, dado una lista de elementos de tipo numérico que representan los códigos ASCII de las letras que forman una palabra, cree dos conjuntos, uno con las vocales y otro con las consonantes.
