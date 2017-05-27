# Curso Acecom C++ Orientado a Objetos
# Objetivo del Curso 

Tengan los conceptos claros acerca del paradigma de programacion orientada a objetos y todos los conceptos de c++.
# Metas 
Aprender entre todos para tener una proyeccion distinta.

Trabajar en equipo y compartir ideas entre nosotros.


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
## Definición de variable, inicialización y asignación
 las variables son nombres para un trozo de memoria que se puede utilizar para almacenar información, se utiliza un tipo de datos para decirnos cómo interpretar los contenidos de la memoria de una manera significativa. 
### tipos de datos fundamentales

![ScreenShot](https://raw.github.com/BitzerAr/Acecom/master/fotos/tipo.png)

### La definición de una variable
```c++
bool bValue;
char chValue;
int nValue;
float fValue;
double dValue;
```
### Inicializacion de una variable
Cuando se define una variable, se puede dar inmediatamente esa variable un valor.
```c++
int valor = 5;
```
### Asignacion de variable
uando se da una variable un valor después de que se ha definido.
```c++
int valor;
valor = 5;
```
## Tamaño de variables y el operador sizeof
La cantidad de memoria que utiliza una variable se basa en su tipo de datos.

Una variable con n bits puede contener 2^n valores posibles.

El tamaño de un determinado tipo de datos depende del compilador y / o de la arquitectura de la computadora
### Sizeof
El operador sizeof es un operador unitario que tiene o bien un tipo o una variable, y devuelve su tamaño en bytes.
## Enteros
![ScreenShot](https://raw.github.com/BitzerAr/Acecom/master/fotos/entero.png)

El rango de una variable de número entero se determina por dos factores: su tamaño (en bits), y su signo 
Definicion
```c++
char c;
short int si;
short s;     
int i;
long int li; 
long l;      
long long int lli; 
long long ll; 
```
## Float 
![ScreenShot](https://raw.github.com/BitzerAr/Acecom/master/fotos/float.png)

Grandes números o números con un componente fraccional.

```c++
float fvalor;
double dValor;
long double dValur2;
```
### NaN e Inf
 La primera es Inf , que representa el infinito.
 
 La segunda NaN , que significa “no es un número”
 
 ## Boolean
 Variables booleanas son variables que pueden tener sólo dos valores posibles: true (1), y falso (0).
```c++
bool b=true;
bool c;
c = false
```
## Char
char es un número entero (y por lo tanto sigue todas las reglas normales enteros), a pesar de eso se suelen trabajar con caracteres de una manera diferente que los números enteros normales.
```c++
char ch1 = 97;
char ch2 = 'a';
```
## Constantes
variables con valores que no se pueden cambiar.
### const
Constante debe ser una constante de tiempo de ejecución:
```c++
const double gravedad = 9.8 ;
```
### constexpr
Constante debe ser una constante de tiempo de compilación:
```c++
constexpr double gravedad = 9.8 ;
```
### Las constantes simbólicas
```c++
#define MAX_STUDENTS_PER_CLASS 30
```
## Operadores Aritmeticos
![ScreenShot](https://raw.github.com/BitzerAr/Acecom/master/fotos/operadores.png)

## operadores de asignación aritméticas
![ScreenShot](https://raw.github.com/BitzerAr/Acecom/master/fotos/asignacion.png)

## Operadores de incremento

```c++
int x = 5;
int y = x++; 
```
En primer lugar, el compilador hace una copia temporal de X que comienza con el mismo valor que x (5).

Entonces se incrementa el x original a partir de 5 a 6.

A continuación, el compilador evalúa la copia temporal, que evalúa a 5, y asigna ese valor a y.
```c++
int x = 5, y = 5;
cout << x << " " << y << endl;
cout << ++x << " " << --y << endl; // prefix
cout << x << " " << y << endl;
cout << x++ << " " << y-- << endl; // postfix
cout << x << " " << y << endl
```
## Operador condicional
x = (condición)? some_value: some_other_value;
```c++
valor = (x > y) ? x : y;
```
## Operadores Relacionales 
```c++
#include <cmath> // for fabs()
bool isAlmostEqual(double a, double b, double epsilon)
{
    return fabs(a - b) <= epsilon;
}
```
## Operadores lógicos
AND, OR y NOT
### Ley de Morgan
!(x && y)es equivalente !x || !y

## Static
```c++
#include <iostream>
 
void incrementAndPrint()
{
    int value = 1; 
    ++value;
    std::cout << value << std::endl;
} // value is destroyed here
 
int main()
{
    incrementAndPrint();
    incrementAndPrint();
    incrementAndPrint();
}
```
```c++
#include <iostream>
 
void incrementAndPrint()
{
    static int s_value = 1; // static duration via static keyword.  This line is only executed once.
    ++s_value;
    std::cout << s_value << std::endl;
} // s_value is not destroyed here, but becomes inaccessible
 
int main()
{
    incrementAndPrint();
    incrementAndPrint();
    incrementAndPrint();
}
```

## Namespace 
```c++
namespace Foo
{
    int operacion(int x, int y)
    {
        return x + y;
    }
}
```
```c++
namespace Goo
{
    int operacion(int x, int y)
    {
        return x - y;
    }
}
```
a cual de los dos llama?
```c++
int main()
{
    std::cout << operacion(4, 3); 
    return 0;
}
```
Corrección
```c++
int main(void)
{
    std::cout << Foo::operacion(4, 3);
    return 0;
}
```
## Using
using std::cout ->  le dice al compilador que vamos a utilizar el “cout” objeto desde el espacio de nombres std
```c++
#include <iostream>
 
int main()
{
   using std::cout; 
   cout << "Hello world!"; 
   return 0;
}
```
using namespace std; -> le dice al compilador que queremos utilizar todo en el espacio de nombres std.
```c++
#include <iostream>
 
int cout() // declares our own "cout" function
{
    return 5;
}
 
int main()
{
    using namespace std; // makes std::cout accessible as "cout"
    cout << "Hello, world!"; // uh oh!  Which cout do we want here?  The one in the std namespace or the one we defined above?
 
    return 0;
}
```
## Enumeraciones 
Un tipo enumerado (también llamado una enumeración ) es un tipo de datos en el que cada valor posible se define como una constante simbólica (llamado un empadronador ).

## IF 
if (expression)
    statement
or

if (expression)
    statement
else
    statement2
