#include <iostream>
 
int main(){
    std::cout << "Entero1 : ";
    int x;
    std::cin >> x;
 
    std::cout << "Entero2: ";
    int y;
    std::cin >> y;
 
    if (x == y)
        std::cout << x << " equivlantes " << y << "\n";
    if (x != y)
        std::cout << x << " no equivalente " << y << "\n";
    if (x > y)
        std::cout << x << " es mayor " << y << "\n";
    if (x < y)
        std::cout << x << " es menor " << y << "\n";
    if (x >= y)
        std::cout << x << " es mayor igual " << y << "\n";
    if (x <= y)
        std::cout << x << " es menor igual " << y << "\n";
 
    return 0;
}
