#include <iostream>
    
int main(){
    std::string name_1,name_2;
    int age;

    std::cout<<"what's  your full name";
    std::getline(std::cin >>std::ws ,name_1);// getline used to get a string includeing spaces 
    //>>std::ws was used above to remove the nextline bufferor any extra whitespaces
    
    std::cout<<"Whats your age";
    std::cin>>age;

    std::cout<<"your name is "<<name_1;
    std::cout<<" and you are "<<age<<"years old";
    
return 0;
}