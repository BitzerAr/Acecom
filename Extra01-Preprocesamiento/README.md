# Preprocesamiento en C/C++

Herramienta de código disponible en un entorno de trabajo previo a la compilación de un programa en C o C++. Las directivas (o métodos) que la componen se denominan MACROS y funcionan de manera secuencial

### Ejemplos:
* Incluir headers:
```cpp
#include <iostream>
```
* Definir constantes
```cpp
#define EULER 2.71828
#define CUSTOM_STRING "Acecom - C++"
```
* Definir funciones macro
```cpp
#define MY_MACRO_PRINT(...) printf(__VA_ARGS__) 
```

Para aplicar lo aprendido tomemos el siguiente ejercicio básico y su output

```cpp
// Ejemplo 1
#include <iostream> // Incluyendo el header de la libreria "iostream" para usar std::cout
#define PI 3.14159

using namespace std;

int main(){
	cout << "El area de un circulo de radio r = 2 es: " << PI*2*2 << endl;
}
```
```
output~: El area de un circulo de radio r = 2 es: 12.5664
```

```cpp
// Ejemplo 2
#include <iostream>
#define MAX(a,b) (a > b) ? a : b

using namespace std;

int main(){
	int result = MAX(45, 93);
	cout << "El máximo entre los numeros 45 y 93 es: " << result << endl;
}
```
```
output~: El máximo entre los numeros 45 y 93 es: 93
```

### Operadores:
Existen 4 operadores básicos en preprocesamiento con los que podemos trabajar:
* **#define**
* **Stringize** (#) (Crear un string luego del simbolo '#' y envolverlo con comillas)
* **Token de pegado** ('##')  (pega los valores a la izquierda y derecha del operador tal cual)
* **Next-line macro** ('\\') (Herramienta de formateo para construir macros en lineas posteriores)

#### 1. **#define**
MACRO de definción de parámetros en preprocesamiento; uno de los más comúnmente usados cuando se desea crear una clase y no queremos depender del compilador (solo como seguridad), o para definir funciones MACRO o constantes de pp.

#### 2. **stringize ('#')**
MACRO que convierte todo argumento en un string y lo envuelve en comillas dobles. Usado muchas veces cuando se requiere trabajar con strings constantes.
```cpp
#include <iostream>
#define to_string(value) #value
#define to_string_2(value) to_string(value)
#define x 5

using namespace std;

int main(){
	cout << "[" to_string(x) "]" << endl;
	cout << "[" to_string_2(x) "]" << endl;
}
```
```
output~:
[x]
[5]
```

#### 3. **Token de pegado ('##')**
También llamado token MACRO de concatenación. Concatena
```cpp
#include <iostream>
#define get(x,y) x##y

using namespace std;

int main(){
	int my_var = 30;
	cout << "Valor de my_var: " << get(my, _var) << endl;
}
```
```
output~: Valor de ab: 30
```

#### 4. **Next line macro(\\)**
Permite escribir sentencias MACRO en multilínea para presentar el código de manera mas ordenada

```cpp
#include <iostream>
#define print_seq(a, b) \  // Obviar este comentario
for(int i = a; i <= b; i++){\
	cout << i << " ";\
}\
cout << endl;\

using namespace std;

int main(){
	print_seq(1, 20)
}
```

```
output~: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
```

### Pasos de expansión
1. Se procesan los tokens precedidos por '#' o '##'
2. Se aplica el reemplazo MACRO a todos los argumentos
3. Se reemplaza cada parámetro con el resultado de la expansión MACRO
4. Se escanea para nuevos MACROS

 
### Ejemplos:

```cpp
// Del ejemplo anterior
#include <iostream>
#define to_string(value) #value
#define to_string_2(value) to_string(value)
#define x 5

using namespace std;

int main(){
	cout << "[" to_string(x) "]" << endl;
	cout << "[" to_string_2(x) "]" << endl;
}
```
```
output~:
[x]
[5]
```

```cpp
// File: example.h
METHOD(ATTACK)
METHOD(DEFENSE)
METHOD(LEVEL_UP)
METHOD(SPEED)
METHOD(CLASS)
```
```cpp
// File: test.cpp
#include <iostream>
#define METHOD(x) x##_COMMAND,
enum Parameters {
		#include "example.h"
		COMMAND_TOTAL
};

using namespace std;

int main(){
	cout << ATTACK_COMMAND << endl;
	cout << DEFENSE_COMMAND << endl;
	cout << LEVEL_UP_COMMAND << endl;
	cout << SPEED_COMMAND << endl;
	cout << CLASS_COMMAND << endl;
}
```
```
~: g++ test.cpp
~: ./a.out
output~:
0
1
2
3
4
```
