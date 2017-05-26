#include <iostream>
 
enum class ErrorCode
{
    ERROR_SUCCESS = 0,
    ERROR_NEGATIVE_NUMBER = -1
};
 
ErrorCode doSomething(int value){
    if (value < 0)
        return ErrorCode::ERROR_NEGATIVE_NUMBER; 
    return ErrorCode::ERROR_SUCCESS;
}
 
int main()
{
    std::cout << "Enter a positive number: ";
    int x;
    std::cin >> x;
 
    if (doSomething(x) == ErrorCode::ERROR_NEGATIVE_NUMBER)
    {
        std::cout << "You entered a negative number!\n";
    }
    else
    {
        std::cout << "It worked!\n";
    }
 
    return 0;
}
