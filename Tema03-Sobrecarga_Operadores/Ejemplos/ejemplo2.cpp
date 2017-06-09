#include <iostream>
using namespace std;

class Libros{
	private:
		int m_libros;
	public:
		Libros( int libros ) {
			m_libros = libros;
		}
		friend Libros operator+(const Libros &l1, int valorX){
			return Libros(l1.m_libros + valorX);
		}

		friend Libros operator+(int valorX, const Libros &l2){
			return Libros(valorX + l2.m_libros);
		}

		friend Libros operator-(const Libros &l1, int valorX){
			return Libros(l1.m_libros - valorX);
		}
		friend Libros operator-(int valorX, const Libros &l2){
			return Libros(valorX - l2.m_libros);
		}

		int getLibros() const{
			return m_libros;
		}
};
int main(){
	Libros l1 = Libros(5) + 7;
	Libros l2 = 8 - Libros(3);
	cout << "l1 : "<< l1.getLibros() << endl;
	cout << "l2 : "<< l2.getLibros() << endl;
	return 0;
}
