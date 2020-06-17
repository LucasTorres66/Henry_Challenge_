# Henry_Challenge_
Los ejercicios fueron realizados en distintas funciones para facilitar su correcion.( Ejercicio_1() ,Ejercicio_2() , Ejercicio_3() ).
Cuenta con un menu de opciones, Dicho menu consta de 4 opciones 1-Ejercicio_1 / 2-Ejercicio_2 / 3-Ejercicio_3 / 4-Salir.

Ejercicio_1 : 
[PASO 1 ] : Lo primero que hago es crear una Variable de tipo INT llamada num y le asigno el valor 100 (Numero maximo de iteraciones).

[PASO 2 ] : Creo una variable de tipo INT llamada " i " el Contador dentro de la iteracion.

[PASO 3 ] : Creo un ciclo for  que comienza en 0 y finaliza en 100, dentro de esto pregunto, si en la division de i  / 3  y i / 5 tiene como resto (%)== 0 imprimir " FizzBuzz"  
si no, si en la division de i/3 tiene como resto (%)==0 imprimir "Fizz" si no, si en la division de i/5 tiene como resto(%)==0 imprimir "Buzz",Si no imprimir " i "(Numero de la iteracion ).


Ejercicio_2:

[PASO 1 ] : Creo una variable de tipo INT y la llamo num , le pregunto al usuario cuantos numeros desea ingresar y se lo asigno a la variable num.

[PASO 2 ] : Creo un Array de numeros de tipo INT, (La cantidad de numeros de array depende de la variable num ), y creo dos variables de tipo int y las llamo Max y Min.

[PASO 3 ] : Creo un ciclo for para cargar los numeros que ingrese el usuario.

[PASO 4 ] : Creo un ciclo for y dentro de este pregunto si el Array en la poscicion i es mayor a max , a max asignale el valor del Array en la poscicion i, y dentro del mismo a min le asigno el mismo valor

[PASO 5 ] : Creo un ciclo for y dentro de este pregunto si el Array en la poscicion i es menor a min , a min asignale el valor del Array en la poscicion i.

[PASO 6 ] : Imprimir las variables max y min .


Ejercicio_3:
Para este ejercicio no se me ocurrio una forma de optimizarlo, utilize valores dados como ejemplo en la ejercitacion [1,2,3,4,5].

[PASO 1 ] : Creo un Array de tipo int y le asigno los valores[ 1 , 2 , 3 , 4 , 5 ].

[PASO 2 ] : Creo una variable de tipo int y le asigno el valor que ingrese el usuario

[PASO 3 ] : Creo un Flag y lo inicializo en 0, esto me va a servir para saber si entro dentro de algun IF , en caso de no hacerlo quiere decir q es FALSO 

[PASO 4 ] : Pregunto si Array en la poscicion 0 + Array en la poscicion 1 == al numero que ingrese en usuario, imprimir "Verdadero ... " y a flag le asigno el valor de 1.
Realizo esta misma condicion sustituyendo las posiciones del array ( pos 1+2, pos 2+3, pos 3+4).

[PASO 5 ] : Pregunto si flag es == a 0 (quiere decir q nunca entro dentro de un if ), imprimir "Falso ... ". 
