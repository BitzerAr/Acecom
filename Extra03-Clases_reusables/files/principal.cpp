#include "miClase.h"
#include <iostream>

using namespace std;

int main(){
	miClase miObjeto(5);
	cout << miObjeto.getValue() << endl;
	miObjeto.setValue(10);
	cout << miObjeto.getValue() << endl;
}