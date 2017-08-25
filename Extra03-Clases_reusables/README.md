# Clases en formato reusable
Basado en la idea de ordenar un proyecto que involucra muchos archivos de código. Este formato permite la reutilización, modulación y orden de un gran conjunto de archivos con un mismo propósito

## Sintaxis de trabajo
Del siguiente ejemplo se explicará la manera de implementar clases en archivos disjuntos. Se tiene un proyecto comprendido por 3 archivos: una cabecera (o header .h) y dos códigos (.cpp). Se puede entender el primero como el "prototipo" de la clase que vamos a crear de manera reusable.

``` cpp
// ./miClase.h

// MACROS de definicion
#ifndef MI_CLASE_H
#define MI_CLASE_H

// Definicion de la clase
class miClase{
	private:
		int value;
	public:
		miClase(int init_value);
		void setValue(int a);
		int getValue();
};

#endif
```
El segundo es simplemente la implementación de los métodos de la clase

``` cpp
// ./miClase.cpp
#include <iostream>
#include "miClase.h"

miClase::miClase(int init_value){
	value = init_value;
}

void miClase::setValue(int a){
	value = a;
}

int miClase::getValue(){
	return(value);
}
#endif
```

Y el tercero utiliza los otros dos para mostrar el resultado
``` cpp
// ./principal.cpp
#include "miClase.h"
#include <iostream>

using namespace std;

int main(){
	miClase miObjeto(5);
	cout << miObjeto.getValue() << endl;
	miObjeto.setValue(10);
	cout << miObjeto.getValue() << endl;
}
```

Para compilar en primera instancia los archivos creados, ubiquémolos de una manera simple:

```
- Folder
 |- miClase.h
 |- miClase.cpp
 |- principal.cpp
```
Luego, quedaría correr el programa como:

```
~: g++ principal.cpp miClase.cpp
output~:
5
10
```

Debido a la manera de definir la clase como reusable, podemos desligar esta al archivo principal y an así compilarlo con total normalidad, siempre que se especifique su ubicación. Supongamos la siguiente estructura de archivos:

```
- Folder
 |- F1
  |- F2
   |- miClase.h
   |- miClase.cpp
 |- principal.cpp
```


Entones, para correr el programa, redefinimos las ubicaciones en el archivo principal y al momento de compilar:
``` cpp
// ./principal.cpp
#include "F1/F2/miClase.h"
#include <iostream>

using namespace std;

int main(){
	miClase miObjeto(5);
	cout << miObjeto.getValue() << endl;
	miObjeto.setValue(10);
	cout << miObjeto.getValue() << endl;
}
```
```
~: g++ principal.cpp F1/F2/miClase.cpp
output~:
5
10
```
