#include <iostream>

int main(){

// fill() = Fills a range of elements eithin a specified value
//      fill(begin, end, value)

    std::string foods[10];
    int size = sizeof (foods) / sizeof(std::string);
    fill (foods,foods+size/2 ,"pizza");
    fill (foods+size/2,foods+size ,"burgrer");
    for (int i =0;i < 10; i++){
    std::cout << foods[i] << '\n';
    }

    return 0;
}