#include <iostream>
#include <cmath>
    
int main()
{
    double x=3.6;
    double y=4;
    double z;

    z=std::max(x,y);
    z=std::min(x,y);
    //max and min dont require math header others below do
    z=pow(x,y);
    z=sqrt(9);
    z=abs(-3);//turns any number positive
    z = round(x);//rounds to nearest ten
    z=ceil(x);//rounds to upper dec
    z=floor(x);//rounds to lower dec

    std::cout<<z;

return 0;
}