#include <iostream>
double getTotal(double prices[],int size);
int main()
{
    int size;
    double prices[] = {40,99,258,869,9374,6};
    size = sizeof(prices) / sizeof(prices[0]);
    double total = getTotal(prices , size);
    std::cout << "The total is:" << total;

    return 0;
}
double getTotal(double prices[], int size){
    int total;
    for(int i = 0; i < size; i++){
        total += prices[i];
    }

    return total;
}