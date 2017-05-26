# Curso Acecom C++ Orientado a Objetos
# Objetivo del Curso 

Tengan los conceptos claros acerca del paradigma de programacion orientada a objetos
============
# Metas 
Todos tengan la base para p

## A darle con todo al curso

Un programa de computadora es una secuencia de instrucciones que le indican a la computadora qué hacer.

Una declaración en C++ es la unidad más pequeña del lenguaje es análogo a una frase en el lenguaje humano. Escribimos frases con el fin de transmitir una idea.

Todas las variables en un programa deben ser declaradas antes de ser utilizados.

Una biblioteca es una colección de código precompilado (por ejemplo, funciones) que ha sido “empaquetados” para su reutilización en muchos programas diferentes. 

Biblioteca estándar de C ++ es la biblioteca iostream, que contiene la funcionalidad para escribir en la pantalla y conseguir la entrada de un usuario de la consola.

# Clasico hola mundo
```c++
#include <iostream>
 
int main()
{
   std::cout << "Hello world!";
   return 0;
}

```
Al poner extends AppCompatActivity nos solicita importar la siguiente libreria 

**import android.support.v7.app.AppCompatActivity;**
```java
package com.example.bitzer.primeraaplicacion;

import android.support.v7.app.AppCompatActivity;

/**
 * Created by bitzer on 02/04/17.
 */

public class SegundaActividad extends AppCompatActivity {
}
```
Al igual que el caso anterior al implementar el metodo onCreate nos solicita importar la libreria 
***import android.os.Bundle;***
```java
package com.example.bitzer.primeraaplicacion;

import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;

/**
 * Created by bitzer on 02/04/17.
 */

public class SegundaActividad extends AppCompatActivity {
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }
}
```
Cambiamos el nombre de la interfaz gráfica llamandola 
***activity_segunda_actividad***
```java
package com.example.bitzer.primeraaplicacion;

import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;

/**
 * Created by bitzer on 02/04/17.
 */

public class SegundaActividad extends AppCompatActivity {
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_segunda_actividad);
    }
}
```
Lo anterior genera un error por lo que no existe dicha interfaz, por lo que creamos nuestra nueva interfaz
***activity_segunda_actividad.xml***
```xml
<?xml version="1.0" encoding="utf-8"?>
<android.support.constraint.ConstraintLayout xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    xmlns:tools="http://schemas.android.com/tools"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    tools:context="com.example.bitzer.primeraaplicacion.SegundaActividad">

    <TextView
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:text="@string/app_nombre"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintLeft_toLeftOf="parent"
        app:layout_constraintRight_toRightOf="parent"
        app:layout_constraintTop_toTopOf="parent" />

</android.support.constraint.ConstraintLayout>
```
Para esto creamos nuestra nueva variable y asignarle un valor en ***strings.xml***
```xml
<resources>
    <string name="app_name">PrimeraAplicacion</string>
    <string name="app_nombre">SegundaActividad</string>
 </resources>
 ```
 Creada nuestra Segunda Activida debemos indicarlo en el ***AndroidManifest.xml***
```xml
<?xml version="1.0" encoding="utf-8"?>
<manifest xmlns:android="http://schemas.android.com/apk/res/android"
    package="com.example.bitzer.primeraaplicacion">

    <application
             ----------
            >
        -------------
        -------------
        <!--Añadimos lo siguiente -->
        <activity
            android:name=".SegundaActividad"
            android:label="@string/seg_actividad" >
        </activity>
    </application>

</manifest>
```
Creamos otro string en ***strings.xml***
```xml
<resources>
    <string name="app_name">PrimeraAplicacion</string>
    <string name="app_nombre">SegundaActividad</string>
    <string name="seg_actividad">Mi Segunda Actividad</string>
</resources>
```
