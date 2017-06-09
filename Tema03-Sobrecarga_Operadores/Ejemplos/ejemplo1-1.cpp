#include<iostream>
using namespace std;

class Cadena{
	private: 
		string m_nombre;
	public :
		Cadena(string nombre) { 
			m_nombre = nombre;
		}
			
		string getCadena() const{
			return m_nombre;
		}
};

Cadena operator+(const Cadena &cadena1, const Cadena &cadena2){
	return Cadena(cadena1.getCadena() + cadena2.getCadena());
}

int main(){
	Cadena cad1("Hola");
	Cadena cad2(" mundo");
	Cadena cadSum = cad1 + cad2;
	cout << cadSum.getCadena() << endl;
	return 0;
}
