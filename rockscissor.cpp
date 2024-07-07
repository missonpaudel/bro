#include <iostream>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player,char computer);



int main (){
    char player;
    char computer;

    player = getUserChoice();
    std::cout << " your choice: ";
    showChoice(player);

    computer = getComputerChoice();

    return 0;
}
char getUserChoice(){
    char player;
    std::cout << "Rock-Paper-Scissors Game!  \n ";

    do{
    std::cout << "choose one of the following \n";
    std::cout << "R for Rock\n";
    std::cout << "P for Paper\n";
    std::cout << "S for Scissors\n";
    std::cin >> player;
    }while(player != 'r' && player != 'p' && player != 's' );

return player;
    
return 0;
}
char getComputerChoice(){

return 0;
}
void showChoice(char choice){
    switch(choice){
        case 'r': std::cout << "ROCK";
            break;
        case 'p': std::cout <<"PAPER";
            break;
        case 's': std::cout << "SCISSORS";
    }


}
void chooseWinner(char player,char computer){


}