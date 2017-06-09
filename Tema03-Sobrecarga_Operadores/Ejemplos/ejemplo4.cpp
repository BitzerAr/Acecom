//Ejemplo sobrecarga operadores unitarios
#include <iostream>
using namespace std;

class Punto{
	private :
		double m_x, m_y, m_z;
	public :
		Punto(double x = 0.0, double y = 0.0, double z = 0.0) : m_x(x), m_y(y), m_z(z){}
		
		Punto operator-() const;
		
		bool operator! () const;
	
		double getX(){return m_x;}
		double getY(){return m_x;}
		double getZ(){return m_x;}
};

Punto Punto::operator- () const{
	return Punto(-m_x, -m_y, -m_z);
}

bool Punto :: operator! () const{
	return ( m_x == 0.0 && m_y == 0.0 && m_z == 0.0);
}

int main(){
	Punto punto(1.0,2.0,3.0);
	if(!punto)
		cout << "Punto ubicado en el origen "<< endl;
	else
		cout << "No esta en el origen" << endl;
	punto = -punto;
	cout << punto.getX() << endl;
	
	Punto punto1;
	if(!punto1)
		cout << "Punto ubicado en el origen "<< endl;
	else
		cout << "No esta en el origen" << endl;

	
	return 0;
}
