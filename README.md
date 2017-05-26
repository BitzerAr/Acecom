# Curso Acecom C++ Orientado a Objetos
# Objetivo del Curso 

Tengan los conceptos claros acerca del paradigma de programacion orientada a objetos

# Metas 
Todos tengan la base para p

## A darle con todo al curso

Un programa de computadora es una secuencia de instrucciones que le indican a la computadora qué hacer.

Una declaración en C++ es la unidad más pequeña del lenguaje es análogo a una frase en el lenguaje humano. Escribimos frases con el fin de transmitir una idea.

Todas las variables en un programa deben ser declaradas antes de ser utilizados.

Una biblioteca es una colección de código precompilado (por ejemplo, funciones) que ha sido “empaquetados” para su reutilización en muchos programas diferentes. 

Biblioteca estándar de C ++ es la biblioteca iostream, que contiene la funcionalidad para escribir en la pantalla y conseguir la entrada de un usuario de la consola.

### Clasico hola mundo
std::cout utilizar para texto de salida de la consola con el operador de salida (<<)
```c++
#include <iostream>  //Directivas del preprocesador
 
int main()
{
   std::cout << "Hello world!";  //<< operador de salida 
   return 0;    // instrucción de retorno 
}

```
NOTA: El return 0,es un valor que se le da al sistema operativo, llamado un código de estado , y le dice al sistema operativo (y cualquier otro programa que llame a este) si el programa se ha ejecutado correctamente o no. Un valor de retorno 0 significa exito.


El operador de salida (<<) se puede utilizar varias veces
```c++
#include <iostream>
 
int main()
{
    int x = 4;
    std::cout << "x is equal to: " << x;
    return 0;
}
```
std :: endl uso del salto de linea
```c++
#include <iostream>
int main(){
    std::cout << "hola" <<std::endl<<mundo;
    return 0;
}
```
 std :: cin lee la entrada del usuario en la consola utilizando el operador de entrada ( >>)
```c++
#include <iostream>
 
int main()
{
    std::cout << "Ingrese numero : "; 
    int x; 
    std::cin >> x; 
    std::cout << "Valor ingresado " << x << std::endl;
    return 0;
}
```
