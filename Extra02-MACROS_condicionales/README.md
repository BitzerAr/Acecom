# MACROS condicionales en C/C++
Herramienta de código ejecutable en el entorno de precompilamiento con estructura condicional sobre los macros definidos

# Tipos
## 1. Condicional de definición
Bloque condicional de código que depende de el estado de definición de algún MACRO
### Ejemplo:
``` cpp
#include <iostream>
#define INDEX 9 // Definicion de INDEX presente

using namespace std;

int main(){
	int array[10];
	array[9] = 0;

	#ifdef INDEX // Bloque de pp. condicional
	array[INDEX] = 123;
	#endif // Cerradura del bloque
	
	cout << array[9] << endl;
}
```

```
output~: 123
```

## 2. Condicional complementario de definición
Similar al bloque anterior, solo que en este caso se revisa si la no existe la definición del MACRO en cuestión.
```cpp
#include <iostream>
#define VAR -1 // Definicion de VAR presente

using namespace std;

int main(){
	#ifndef VAR // Bloque de pp. condicional
	cout << "Si lees esto, no se definio VAR" << endl;
	return 0;
	#endif // Cerradura del bloque
	
	cout << "Si lees esto, se definio VAR" << endl;
	return 0;
}
```

```
output~: Si lees esto, se definio VAR
```

### 3. Condicionales generales
Análogo al caso tradicional de un bloque condicional de código en C/C++, estos bloques de pp. condicionales responden ante el valor booleano que se presente.

```cpp
#include <iostream>
#define VAR 1

#if VAR > 0
#undef VAR
#define VAR -1
#endif

using namespace std;

int main(){
	cout << VAR << endl;
}
```

```
output~: -1
```
### 4. Condicionales generales compuestas
Se adiciona la cláusula de complemento "ELSE" a la estructura
```cpp
#include <iostream>
#define VAR 0

#if VAR > 0
#undef VAR
#define VAR 100

#elif VAR == 0
#undef VAR
#define VAR 1

#else
#undef VAR
#define VAR -100
#endif

using namespace std;

int main(){
	cout << VAR << endl;
}
```
```
output~: -1
```