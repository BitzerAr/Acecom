# Sobrecarga de Operadores
-------------------------------
En C ++, los operadores están implementados como funciones.
Aplicando la sobrecarga de funciones en la funcion de un operador, usted podra definir sus propias versiones de los operadores que trabajen con diferentes datos que los habiltuales.
Esto realiza constantemente:
```c++
int x = 1;
int y = 1;
cout << x + y << endl;

double a = 1;
double b = 1;
cout << a + b << endl;
```
Se ha sobrecargado la funcion operacion "+" para trabajar con enteros y double, si se desea usar el operador en dos objetos que hemos creado.
```c++
Cadena string1 = "Hola ";
Cadena string2 = "mundo";
cout << string1 + string2 << endl
```
El resultado que uno esperaria es "Hola mundo", pero no sera asi ya que la funcion operador "+" no tiene integrado el realizar dicho operacion sobre mi clase Cadena.

## Nota :
Los operadores que no se pueden sobracargar es el operador ternario, sizeof, ámbito, selector miembro y selector puntero.

#  La sobrecarga de los operadores aritméticos utilizando funciones friend
```c++
class Cadena{
private:
	string m_nombre;
public:
	Cadena(string nombre) { 
	    m_nombre = nombre; 
    }
    
	friend Cadena operator+(const Cadena &cadena1, const Cadena &cadena2);
 
	string getCadena() const { return m_cadena; }
};

Cadena operator+(const Cadena &cadena1, const Cadena &cadena2){
	return Cadena(cadena1.m_cadena + cadena2.m_cadena;
}
```
* [Ejemplo 01](https://github.com/BitzerAr/Acecom/blob/master/Tema03-Sobrecarga_Operadores/Ejemplos/ejemplo1.cpp)
# Operadores Sobrecarga utilizando funciones normales
 ```c++
 class Cadena{
private:
	string m_nombre;
public:
	Cadena(string nombre) { 
	    m_nombre = nombre; 
    }

	string getCadena() const { return m_cadena; }
};

Cadena operator+(const Cadena &cadena1, const Cadena &cadena2){
	return Cadena(cadena1.getCadena() + cadena2.getCadena();
}
 ```
 * [Ejemplo 01-1](https://github.com/BitzerAr/Acecom/blob/master/Tema03-Sobrecarga_Operadores/Ejemplos/ejemplo1-1.cpp)
 * [Ejemplo 02](https://github.com/BitzerAr/Acecom/blob/master/Tema03-Sobrecarga_Operadores/Ejemplos/ejemplo2.cpp)
# La sobrecarga de operadores <<
Sobrecarga de operadores << es similar a la sobrecarga del operador + (ambos son operadores binarios), excepto que los tipos de parámetros son diferentes.
En la expresion cout << miembro, el operando de la izquierda es el objeto std::cout y el de la derecha el objeto que nosotros definimos.

std :: cout es un objeto de tipo std :: ostream, entonces definiendo un ejemplo para imprimir cierta cantidad de puntos de una coordenada en 3d.
 ```c++
class Punto{
    private:
        double m_x, m_y, m_z;
 
    public:
        Point(double x=0.0, double y=0.0, double z=0.0): m_x(x), m_y(y), m_z(z){}

        friend ostream& operator<< (std::ostream &out, const Punto &punto);
};
 
ostream& operator<< (ostream &out, const Point &point){
    
    out << "Point(" << point.m_x << ", " << point.m_y << ", " << point.m_z << ")";
 
    return out;
}
  ```
  * [Ejemplo 03](https://github.com/BitzerAr/Acecom/blob/master/Tema03-Sobrecarga_Operadores/Ejemplos/ejemplo3.cpp)
# Sobrecarga operado >> 
Se realiza de forma analoga al operador de salida, con la diferencia de que "std :: cin es un objeto de tipo std :: istream"
  ```c++
istream& operator>> (istream &in, Punto &punto){
    in >> point.m_x;
    in >> point.m_y;
    in >> point.m_z;
 
    return in;
}
  ```
# Sobrecarga de operadores unitarios +, -, y!
  ```c++
// Convertimos un punto en su equivalente negativo
Point Point::operator- () const{
    return Point(-m_x, -m_y, -m_z);
}
 
// Return true if the point is set at the origin, false otherwise
bool Point::operator! () const
{
    return (m_x == 0.0 && m_y == 0.0 && m_z == 0.0);
}
   ```
* [Ejemplo 04](https://github.com/BitzerAr/Acecom/blob/master/Tema03-Sobrecarga_Operadores/Ejemplos/ejemplo4.cpp)
# Sobrecarga de los operadores de comparación
   ```c++
bool operator> (const Librros &l1, const Libros &l2){
    return l1.m_cantidad > c2.m_cantidad;
}
bool operator>= (const Libros &l1, const Cents &l2){
    return c1.m_cantidad >= c2.m_cantidad;
}
```

* [Ejemplo 05](https://github.com/BitzerAr/Acecom/blob/master/Tema03-Sobrecarga_Operadores/Ejemplos/ejemplo5.cpp)
