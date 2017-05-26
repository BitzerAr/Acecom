#include <iostream>
int main()
{
    enum class Color
    {
        RED,
        BLUE
    };
 
    Color color = Color::RED;
 
    if (color == Color::RED) 
        std::cout << "El color es rojo\n";
    else if (color == Color::BLUE)
        std::cout << "El color es azul!\n";
 
    return 0;
}
