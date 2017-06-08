# Clases en formato reusable
Basado en la idea de ordenar un proyecto que involucra muchos archivos de código. Este formato permite la reutilización, modulación y orden de un gran conjunto de archivos con un mismo propósito

## Sintaxis de trabajo
Del siguiente ejemplo se explicará la manera de implementar clases en archivos disjuntos

``` cpp
// ./miClase.h
#ifndef MI_CLASE_H
#define MI_CLASE_H

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

```
~: g++ principal.cpp miClase.cpp
output~:
5
10
```
