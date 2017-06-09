#include<iostream>
using namespace std;

class Cadena{
	private: 
		string m_nombre;
	public :
		Cadena(string nombre) { 
			m_nombre = nombre;
		}
		
		friend Cadena operator+(const Cadena &cadena1, const Cadena &cadena2);
		
		string getCadena() const{
			return m_nombre;
		}
};

Cadena operator+(const Cadena &cadena1, const Cadena &cadena2){
	return Cadena(cadena1.m_nombre + cadena2.m_nombre);
}

int main(){
	Cadena cad1("Hola");
	Cadena cad2(" mundo");
	Cadena cadSum = cad1 + cad2;
	cout << cadSum.getCadena() << endl;
	return 0;
}
