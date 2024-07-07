#include <iostream>
    #include <cmath>
        
    int main()
    {
        double p,b,h;

        std::cout <<"enter the length of perpendicular";
        std::cin >> p;

        std::cout <<"enter the length of base";
        std::cin >>b;
        
        h = sqrt(pow(p,2)+pow(b,2));
        std::cout <<"the hypotenuse of the rt angled triangle is"<<h;
        
    return 0;
    }
