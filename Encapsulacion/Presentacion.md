Programación Orientada a Objetos
--------------------------------
## Que son los Objetos?
Es un trozo de memoria que se puede utilizar para almacenar valores, los objetos tienen dos componentes principales a ellos:
 * Una lista de propiedades;
 * Acciones que puede realizar;

La programación orientada a objetos (POO) nos proporciona la capacidad de crear objetos que unir ambas propiedades y comportamientos en un paquete reutilizable autónomo.

### Example
Diseñar un videojuego 
¿Cuales vendrian a ser el objeto, sus propiedades y acciones.

## Clases
En C ++, las clases son muy similares a los datos de sólo estructuras, excepto que las clases proporcionan mucha más potencia y flexibilidad.
```c++
struct Date{
  int year;
  int mount;
  int day;
};
Class Date{
  public :
     int year;
     int mount;
     int day;
};
```
Cuando definimos variables de una clase se le llama instancia de clase o lo que se conoce como objeto, crear estas instancias se asigna memoria para este.

## Metodos 
Las clases también pueden contener funciones! Las funciones definidas dentro de una clase se denominan Metodos ( tambien llamadas funciones miembro).
```c++
#include<iostream>
using namespace std;
class Pacman{
  public :
     int width;
     int height;
     strin color;
  void print(){
    cout << "W : " << width << endl;
    cout << "H : " << height << endl;
    cout << "C : " << color << endl;
  }
};
int main(){
  Pacman pacman1 {120, 80 ,"rojo"};
  pacman1.print();
  return 0;
}
```
 Todas las llamadas al método deben estar asociados a un objeto de la clase. 
 
 ### Public
 Los miembros públicos son miembros de una estructura o clase que se puede acceder desde fuera de la estructura o clase, en una estructura todos sus miembros son públicos por defecto.
 
 ### Private
  Los miembros privados son miembros de una clase que sólo se puede acceder por otros miembros de la clase.
  
  ### Especificadores de Acceso
  Las clases pueden utilizan múltiples especificadores de acceso para establecer los niveles de acceso de cada uno de sus miembros.
  ```c++
#include<iostream>
using namespace std;
class Pacman{
  
     int w_width;
     int h_height;
     strin c_color;
  public :
    void setPacman(int width , int height , string color){
      w_width = width;
      h_height = height;
      c_color = color;
    }
    void print(){
      cout << "W : " << width << endl;
      cout << "H : " << height << endl;
      cout << "C : " << color << endl;
    }
};
int main(){
  Pacman pacman1;
  pacman1.setPacman(120, 80 ,"rojo");
  pacman1.print();
  return 0;
}
```
## Encapsulación
Encapsulación (también llamado ocultación de la información ) es el proceso de mantener los detalles acerca de cómo un objeto se implementa, escondido de los usuarios del objeto.

Clases encapsulados son más fáciles de usar y reducen la complejidad de sus programas
 
Ayudan a proteger sus datos y evitar el mal uso 
```c++
class IntArray
{
public:
    int m_array[10];
};
int main()
{
    IntArray array;
    array.m_array[16] = 2; 
}
```
Sin embargo, si hacemo la matriz privada, podemos obligar al usuario a utilizar una función que valida que el índice es válido en primer lugar.
### Funciones de acceso
Es una función pública cuyo trabajo consiste en recuperar o cambiar el valor de una variable miembro privada.

Las funciones de acceso se llaman getters y setters;
   * Los getters son funciones que devuelven el valor de una variable privada.
   * Los setters son funciones que establece el valor de una variable miembro privada.
   
```c++
class Pacman{
  private :
     int w_width;
     int h_height;
     strin c_color;
  public :
    void setPacman(int width , int height , string color){
      w_width = width;
      h_height = height;
      c_color = color;
    }
    int getWith(){
      return w_width;
    }
};
```
## Constructores
Una forma de inicializar una clase con variables privadas.

Los constructores se utilizan normalmente para inicializar variables miembro de la clase

Los constructores tienen reglas específicas para el momento en que deben ser nombrado:
  *  Constructores siempre deben tener el mismo nombre que la clase
  * Los constructores no tienen ningún tipo de retorno
  
### Constructores por defecto
Un constructor que no toma ningún parámetro (o tiene parámetros que todos tienen valores por defecto) se llama un constructor por defecto.
```c++
class Example{
  private :
    int m_var1;
    float m_var2;
  public :
    Example(){
      m_var1 = 1;
      m_var2 = 2;
    }
    int getMayor(){
      if( m_var1 > m_var2 )
        return m_var1;
      else
        return m_var2;
    }
};
```
### Inicialización constructores con parámetros
 Los constructores también se pueden declarar con parámetros.
 ```c++
class Example{
  private :
    int m_var1;
    float m_var2;
  public :
    Example(){
      m_var1 = 1;
      m_var2 = 2;
    }
    Example( int var1, int var2 ){
      m_var1 = var1;
      m_var2 = var2;
    }
    int getMayor(){
      if( m_var1 > m_var2 )
        return m_var1;
      else
        return m_var2;
    }
    
};
```
#### NOTA
Si la clase no tiene otros constructores, C ++ creará automáticamente un constructor por defecto en blanco para usted,  lo utiliza para asignar un objeto de su clase.

## Clases que contienen clases
Una clase puede contener otras clases como variables miembro

## Asignacion e Inicializacion
```c++
class Example
{
private:
    int m_var1;
    double m_var2;
    char m_var3;
 
public:
    Example()
    {
        // These are all assignments, not initializations
        m_var1 = 1;
        m_vare2 = 2.2;
        m_var3 = 'c';
    }
};
```
```c++
private:
    int m_var1;
    double m_var2;
    char m_var3;
 
public:
    Example() : m_var1(1), m_var2(2.2), m_var3('c') 
    {
    }
```
## Destructor
Un destructor es otro tipo especial de función miembro de la clase que se ejecuta cuando un objeto de esa clase se destruye, están diseñados para ayudar a limpiar
* El destructor debe tener el mismo nombre que la clase, precedido por una tilde (~). 
* El destructor no puede tomar argumentos.
* El destructor no tiene tipo de retorno.
```c++
class Example{
  private :
    int m_var1;
    float m_var2;
  public :
    Example(){
      m_var1 = 1;
      m_var2 = 2;
    }
    Example( int var1, int var2 ){
      m_var1 = var1;
      m_var2 = var2;
    }
    int getMayor(){
      if( m_var1 > m_var2 )
        return m_var1;
      else
        return m_var2;
    }
    ~Example(){
    } 
};
```
