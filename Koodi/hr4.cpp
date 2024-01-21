#include <iostream>

void swapByPointer(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int myArray[10];

    for (int i = 0; i < 10; ++i) {
        myArray[i] = i + 1;
    }

    std::cout << "Taulukko alkuper�isess� j�rjestyksess�: ";
    for (int i = 0; i < 10; ++i) {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    int* start = myArray;
    int* end = myArray + 9;

    while (start < end) {
        swapByPointer(start, end);
        ++start;
        --end;
    }

    std::cout << "Taulukko kaannettyna: ";
    for (int i = 0; i < 10; ++i) {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
