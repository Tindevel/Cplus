#include <iostream>
#include <cmath>

int main() {
    double syotettyLuku;

    // Kysy käyttäjältä reaaliluku
    std::cout << "Anna luku: ";
    std::cin >> syotettyLuku;

    // Lasketaan edeltävä ja seuraava kokonaisluku
    int edeltavaKokonaisluku = static_cast<int>(std::floor(syotettyLuku));
    int seuraavaKokonaisluku = static_cast<int>(std::ceil(syotettyLuku));

    // Tulostetaan tulos
    std::cout << "Luku " << syotettyLuku << " sisaltyy valille [ " << edeltavaKokonaisluku << ", " << seuraavaKokonaisluku << " ]." << std::endl;

    return 0;
}
