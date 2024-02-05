#include <iostream>
#include <cmath>

enum KolmioTyyppi {
    EPSAANNOLLINEN,
    TASAKYLKINEN,
    TASASIVUINEN,
    SUORAKULMAINEN
};

bool onKolmiollinen(double sivu1, double sivu2, double sivu3, KolmioTyyppi& kolmioTyyppi) {
    if (sivu1 + sivu2 > sivu3 && sivu1 + sivu3 > sivu2 && sivu2 + sivu3 > sivu1) {
        if (sivu1 == sivu2 && sivu2 == sivu3) {
            kolmioTyyppi = TASASIVUINEN;
        }
        else if (sivu1 == sivu2 || sivu1 == sivu3 || sivu2 == sivu3) {
            kolmioTyyppi = TASAKYLKINEN;
        }
        else {
            // Tarkistetaan suorakulmaisuus Pythagoraan lauseen avulla
            if (std::pow(sivu1, 2) + std::pow(sivu2, 2) == std::pow(sivu3, 2) ||
                std::pow(sivu1, 2) + std::pow(sivu3, 2) == std::pow(sivu2, 2) ||
                std::pow(sivu2, 2) + std::pow(sivu3, 2) == std::pow(sivu1, 2)) {
                kolmioTyyppi = SUORAKULMAINEN;
            }
            else {
                kolmioTyyppi = EPSAANNOLLINEN;
            }
        }
        return true;
    }
    return false;
}

int main() {
    double sivu1, sivu2, sivu3;
    KolmioTyyppi kolmioTyyppi;

    // Kysytään käyttäjältä sivujen pituudet
    std::cout << "Anna 1. sivun pituus: ";
    std::cin >> sivu1;

    std::cout << "Anna 2. sivun pituus: ";
    std::cin >> sivu2;

    std::cout << "Anna 3. sivun pituus: ";
    std::cin >> sivu3;

    // Tarkistetaan ja tulostetaan kolmion tyyppi
    if (onKolmiollinen(sivu1, sivu2, sivu3, kolmioTyyppi)) {
        std::cout << "Annetuista sivuista voidaan muodostaa ";
        switch (kolmioTyyppi) {
        case EPSAANNOLLINEN:
            std::cout << "epäsäännöllinen";
            break;
        case TASAKYLKINEN:
            std::cout << "tasakylkinen";
            break;
        case TASASIVUINEN:
            std::cout << "tasasivuinen";
            break;
        case SUORAKULMAINEN:
            std::cout << "suorakulmainen";
            break;
        }
        std::cout << " kolmio." << std::endl;
    }
    else {
        std::cout << "Annetuista sivuista ei voida muodostaa kolmiota." << std::endl;
    }

    return 0;
}
