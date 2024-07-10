#include <iostream>
using namespace std;
    
int main()
{
    std::cout << "the size of a char data type is " << sizeof(char) << "byte" << '\n';
    std::cout << "the size of a boolean data type is " << sizeof(bool) << "bytes" << '\n';
    std::cout << "the size of a int data type is " << sizeof(int) << "bytes" << '\n';
    std::cout << "the size of a float data type is " << sizeof(float) << "bytes" << '\n';
    std::cout << "the size of a double data type is " << sizeof(double) << "bytes" << '\n';
    std::cout << "the size of a string data type is " << sizeof(std::string) << "bytes" << '\n';

return 0;
};