#include<iostream>

int searchArray(int array[], int size, int element);

int main()
{
    int numbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index ,myNum;

    std::cout << "Enter the element to search for: "<< '\n';
    std::cin >> myNum;

    index = searchArray(numbers, size, myNum);

    if(index != -1){
        std::cout <<  "My num is at index: " << index;
    }
    else{
        std::cout << "the number youre lookinf for is not in the array";
    }


    return 0;
}
int searchArray(int array[], int size, int element){
    for(int i = 0; i <size; i++){
        if (array[i] == element){
            return i;
        }
    }
        return -1;

}