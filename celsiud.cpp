#include <iostream>
    
int main()
{
    double temp;
    char unit;

    std::cout << "**********TEMPERATURE CONVERSION**********\n";
    std::cout << "F = Fahrenheit\n";
    std::cout <<"C = Celsius \n";
    std::cout <<"What unit would you like to convert to: ";
    std::cin >> unit;

    if(unit=='F' || unit=='f'){
        std::cout << "enter the temperature in celsius";
        std::cin >> temp;

        temp = (1.8 *temp) +32;
        std::cout<<"the temperature in fahreheit is: "<< temp<< '\n';
    
    }
    else if (unit =='C'|| unit=='c')
    {
        std::cout << "enter the temperature in fahrenheit";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout<<"the temperature in celsius is: "<< temp<< '\n';
    }
    else {
    std::cout << " enter the expected character";
    }
return 0;
}
