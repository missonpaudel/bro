#include <iostream>
#include <ctime>

int main(){
    srand(time(0));
    int randnum =rand()%5+1;

    switch (randnum){
        case 1:
        std::cout << "you win a sticker";
        break;

        case 2:
        std::cout << "you win a free lunch";
        break;

        case 3:
        std::cout << "you win a tshirt";
        break;

        case 4: 
        std::cout << "you win a  hoodie";
        break;

        case 5:
        std::cout << "you win a snike shoes";
        break;
        }


        return 0;
}