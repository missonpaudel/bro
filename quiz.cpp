#include <iostream>

int main()
{
    std::string questions[] = {"1.What is acrophobia a fear of?",
                    "2. Is the earth flat?",
                    "3. Who invented C++?",
                    "4. what is the predecessor of C++?"};

    std::string options[][4]={{"A. Love", "B. Height","C. Water","D. Insects"},
                                {"A. Yes", "B. No","C. Sometimes","D. What is earth "},
                                {"A. Guido Van Russom", "B. Jeff Bezos","C. Mark Zuckerberg","D. Bjarne Stroudtrup"},
                                {"A. C--", "B. C+","C. C","D. B++"}};

    int size = sizeof(questions) / sizeof(questions[0]);
    char answers[] = {'B','B','D','C'};
    char guess;
    int score;

    for(int i = 0; i < size; i++){
        std::cout <<"********************************" << '\n';
        std::cout << questions[i] << '\n';

            for(int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]);j++){
            std::cout << options[i][j] << '\n';
        }
        std::cin >> guess;
        guess = toupper(guess);

        if(guess == answers[i]){
            std::cout << "CORRECT \n";
            score ++;
        }
        else{
            std::cout << "WRONG \n";
            std::cout << "Answer:" << answers[i] << "\n\n";
        }
            
    }
    std::cout << "****************************************\n";
    std::cout << "*              RESULTS                 *\n";
    std::cout << "****************************************\n";
    std::cout << "CORRECT GUESSES: " << score <<'\n';
    std::cout << "NUMBER OF QUESTIONS :" << size << '\n';
    std::cout << "SCORE: " << (score / (double)size) * 100;

return 0;
}