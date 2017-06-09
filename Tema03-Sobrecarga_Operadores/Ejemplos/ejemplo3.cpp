#include<iostream>
using namespace std;

class Punto{
	private :
		double m_x, m_y, m_z;
	public:
		Punto(double x, double y, double z){
			m_x = x;
			m_y = y;
			m_z = z;
		}
		friend ostream& operator<< (ostream &out, const Punto &punto){
			out << "Coordenada(" << punto.m_x << ", "<<punto.m_y << ", " << punto.m_z << ")";
			return out;
		}
};
int main(){
	Punto punto(2,4,5.0);
	cout << punto;
	return 0;
}
