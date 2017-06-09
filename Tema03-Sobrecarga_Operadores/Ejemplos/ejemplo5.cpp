#include<iostream>
using namespace std;

class Libros{
	private :
		int m_cantidad;
	public:
		Libros( int cantidad ){
			m_cantidad = cantidad;
		}
		friend bool operator > (const Libros &l1, const Libros &l2);
		friend bool operator >= (const Libros &l1, const Libros &l2);

		friend bool operator < (const Libros &l1, const Libros &l2);
		friend bool operator <= (const Libros &l1, const Libros &l2);
};

bool operator > (const Libros &l1, const Libros &l2){
	return l1.m_cantidad > l2.m_cantidad;
}
bool operator >= (const Libros &l1, const Libros &l2){
	return l1.m_cantidad >= l2.m_cantidad;
}
bool operator < (const Libros &l1, const Libros &l2){
	return l1.m_cantidad < l2.m_cantidad;
}
bool operator <= (const Libros &l1, const Libros &l2){
	return l1.m_cantidad <= l2.m_cantidad;
}

int main(){
	Libros tipoA(12);
	Libros tipoB(14);
	Libros tipoC(12);
	if( tipoA > tipoB )
		cout << "Cantidad de libros tipoA mayor a tipoB" << endl;
	else
		cout << "Cantidad de libros tipoB mayor a tipoA" << endl;
		
	if( tipoA >= tipoC )
		cout << "Cantidad de libros tipoA mayor igual a tipoC" << endl;
	else
		cout << "Cantidad de libros tipoA meno tipoB" << endl;
	return 0;
}
