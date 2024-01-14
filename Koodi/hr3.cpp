#include <iostream>

void increaseValues(int arr[]) {
    for (int i = 0; i < 10; ++i) {
        arr[i] += 1;
    }
}

void increaseValuesWithPointer(int* arr) {
    for (int i = 0; i < 10; ++i) {
        *(arr + i) += 1;
    }
}

int main() {
    int myArray[10] = {0}; 

    std::cout << "Ennen kasvatusta: ";
    for (int i = 0; i < 10; ++i) {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    increaseValues(myArray);

    std::cout << "Perustaulukkokäsittelyn jälkeen: ";
    for (int i = 0; i < 10; ++i) {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    for (int i = 0; i < 10; ++i) {
        myArray[i] = 0;
    }

    increaseValuesWithPointer(myArray);

    std::cout << "Osoitinaritmetiikan jälkeen: ";
    for (int i = 0; i < 10; ++i) {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}