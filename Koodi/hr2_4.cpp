#include <iostream>
#include <cmath>

bool isPrime(int number) {
    // Alkuluvut ovat positiivisia kokonaislukuja suurempia kuin 1
    if (number <= 1) {
        return false;
    }

    // Tarkistetaan, onko luku jaollinen muilla luvuilla kuin 1 ja luku itsessään
    for (int i = 2; i <= std::sqrt(number); ++i) {
        if (number % i == 0) {
            return false; // Luku ei ole alkuluku, jos se on jaollinen jollakin muulla luvulla
        }
    }

    return true; // Luku on alkuluku
}

int main() {
    int luku;

    // Kysy käyttäjältä luku
    std::cout << "Syota kokonaisluku: ";
    std::cin >> luku;

    // Kutsu isPrime-aliohjelmaa ja tulosta tulos
    if (isPrime(luku)) {
        std::cout << luku << " on alkuluku." << std::endl;
    } else {
        std::cout << luku << " ei ole alkuluku." << std::endl;
    }

    return 0;
}
