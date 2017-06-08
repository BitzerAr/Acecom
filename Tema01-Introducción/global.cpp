#include <iostream>
int value(5); //variable global
 
int main()
{
    int value = 7; //Oculta el valor de la variable global
    value++; // incrementa el valor local
    ::value--; // decrementa el valor global
 
    std::cout << "valor global: " << ::value << "\n";
    std::cout << "valor local: " << value << "\n";
    return 0;
}
