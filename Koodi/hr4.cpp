#include <iostream>

// Swap-aliohjelma osoitinaritmetiikkaa k�ytt�en
void swapByPointer(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int myArray[10];

    // Alusta taulukko siten, ett� jokainen solu on yht� isompi kuin indeksi
    for (int i = 0; i < 10; ++i) {
        myArray[i] = i + 1;
    }

    // Tulosta taulukko alkuper�isess� j�rjestyksess�
    std::cout << "Taulukko alkuper�isess� j�rjestyksess�: ";
    for (int i = 0; i < 10; ++i) {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    // K��nn� taulukon sis�lt� osoitinaritmetiikkaa ja swap-aliohjelmaa k�ytt�en
    int* start = myArray;
    int* end = myArray + 9;

    while (start < end) {
        swapByPointer(start, end);
        ++start;
        --end;
    }

    // Tulosta taulukko k��nnetyss� j�rjestyksess�
    std::cout << "Taulukko kaannettyna: ";
    for (int i = 0; i < 10; ++i) {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
