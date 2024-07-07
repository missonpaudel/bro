
//typedef,namespace,using examples

#include <iostream>
namespace misson{
    int x=10;
}
// typedf used below which is commented out
// typedef std:: string  text_t ;
// typedef float dec_t;
using text_t = std::string;
using dec_t = float;
int main(){
    
    text_t m="paudel";
    dec_t mis;
    std::cout <<"enter any number\n" ;

    std::cin >> mis;
    std::cout << mis;
    std::cout <<misson::x;


return 0;
}