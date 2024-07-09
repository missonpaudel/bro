#include <iostream>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player,char computer);



int main (){
    char player;
    char computer;

    player = getUserChoice();
    std::cout << " Your choice: ";
    showChoice(player);

    computer = getComputerChoice();
    std::cout << " Computer's choice: ";
    showChoice(computer);

    chooseWinner(player,computer);

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

    srand(time(0));
    int num = (rand()%3)+1;
    char computer;

    switch (num){
        case 1: computer = 'r';
            break;
        case 2: computer = 'p';
            break;
        case 3: computer = 's';
            break;
    }

return computer;
}
void showChoice(char choice){
    switch(choice){
        case 'r': std::cout << "ROCK \n";
            break;
        case 'p': std::cout <<"PAPER \n";
            break;
        case 's': std::cout << "SCISSORS \n";
    }


}
void chooseWinner(char player,char computer){
switch(player){
    case 'r': 
        if(computer == 'r'){
            std::cout << "It's a tie";
        }
        else if (computer == 'p'){
            std::cout << "You loose";
        }
        else {
            std::cout <<"YOOU WIN!!";
        }
    break;


    case 'p': 
        if(computer == 'p'){
            std::cout << "It's a tie";
        }
        else if (computer == 's'){
            std::cout << "You loose";
        }
        else {
            std::cout <<"YOOU WIN!!";
        }
    break;


    case 's': 
        if(computer == 's'){
            std::cout << "It's a tie";
        }
        else if (computer == 'r'){
            std::cout << "You loose";
        }
        else {
            std::cout <<"YOOU WIN!!";
        }
    break;
}

}