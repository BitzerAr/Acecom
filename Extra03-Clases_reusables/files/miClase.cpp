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