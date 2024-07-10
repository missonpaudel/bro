#include<iostream>

int searchArray(std::string array[], int size, std::string element);

int main()
{
    std::string foods[] = {"dumplings","noodles", "burger", "pizza"};
    int size = sizeof(foods)/sizeof(foods[0]);
    int index ;
    std::string myFood;

    std::cout << "Enter the food to search for: "<< '\n';
    std::cin >> myFood;

    index = searchArray(foods, size, myFood);

    if(index != -1){
        std::cout <<  "My food is at index: " << index;
    }
    else{
        std::cout << "the food youre lookinf for is not in the array";
    }


    return 0;
}
int searchArray(std::string array[], int size, std::string element){
    for(int i = 0; i <size; i++){
        if (array[i] == element){
            return i;
        }
    }
        return -1;

}