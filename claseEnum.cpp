#include <iostream>
int main()
{
   enum class Color 
	{
        RED, 
        BLUE
    };
 
    enum class Fruta
    {
        BANANA, 
        APPLE
    };
 
    Color color = Color::RED; 
    Fruta fruta = Fruta::BANANA; 
	
    if (color == fruta) 
        std::cout << "color y fruta son equivalentes\n";
    else
        std::cout << "color y fruta no son equivalentes\n";
 
    return 0;
}
