#include <iostream>
#include <ctime>

int main(){

    int num;
    int guess;
    int tries=0;

    srand(time(0));
    num=(rand()%1000)+1;

    std::cout<<"*********NUMBER GUESSING GAME**********\n";

    do{
        std::cout << "Enter a guess between 1 and 1000 :";
        std::cin >> guess;
        tries++;

        if(guess < num){
            std::cout << "the guess is too low\n";
        }
        else if(guess > num){
            std::cout<< "the guess is too high \n";
        }
        else{
            std::cout << "CORRECT! # of tries :"<<tries<< '\n';
        }

    }while( guess != num);

    std::cout <<"******************************";

    return 0;
}