#include <iostream>

// Swap-aliohjelma osoitinaritmetiikkaa käyttäen
void swapByPointer(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int myArray[10];

    // Alusta taulukko siten, että jokainen solu on yhtä isompi kuin indeksi
    for (int i = 0; i < 10; ++i) {
        myArray[i] = i + 1;
    }

    // Tulosta taulukko alkuperäisessä järjestyksessä
    std::cout << "Taulukko alkuperäisessä järjestyksessä: ";
    for (int i = 0; i < 10; ++i) {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    // Käännä taulukon sisältö osoitinaritmetiikkaa ja swap-aliohjelmaa käyttäen
    int* start = myArray;
    int* end = myArray + 9;

    while (start < end) {
        swapByPointer(start, end);
        ++start;
        --end;
    }

    // Tulosta taulukko käännetyssä järjestyksessä
    std::cout << "Taulukko kaannettyna: ";
    for (int i = 0; i < 10; ++i) {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
