#include <iostream>
#include <string>
 
enum Opcion
{
    opcion1,
    opcion2,
    opcion3
};
 
std::string getItemName(Opcion opcion)
{
    if (opcion == opcion1)
        return std::string("escogio Opcion1");
    if (opcion == opcion2)
        return std::string("escogio Opcion2");
    if (opcion == opcion3)
        return std::string("escogio Opcion3");
}
 
int main()
{
    Opcion opcion(opcion1);
 
    std::cout << "Llamamos :  " << getItemName(opcion) << "\n";
 
    return 0;
}
