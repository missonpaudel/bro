#include <iostream>
    
int main()
{
    //the numbers generated are pseudo random

    srand(time(NULL));

    int num = (rand() % 6)+1;//% to set the range of numbers and the +1 to make it start from 1-6 instead of 1-5


    std::cout << num;

return 0;
}