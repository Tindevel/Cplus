#include <iostream>
#include <iomanip>

struct aika_ty {
    int hours;
    int minutes;
    int seconds;
};

aika_ty aikojen_erotus(aika_ty aika1, aika_ty aika2) {
    int seconds1 = aika1.hours * 3600 + aika1.minutes * 60 + aika1.seconds;
    int seconds2 = aika2.hours * 3600 + aika2.minutes * 60 + aika2.seconds;
    int diff = seconds2 - seconds1;

    aika_ty result;
    result.hours = diff / 3600;
    diff %= 3600;
    result.minutes = diff / 60;
    result.seconds = diff % 60;

    return result;
}

int main() {
    aika_ty aika1, aika2;
    std::cout << "Anna ensimmäinen ajankohta (tunnit minuutit sekunnit): ";
    std::cin >> aika1.hours >> aika1.minutes >> aika1.seconds;
    std::cout << "Anna toinen ajankohta (tunnit minuutit sekunnit): ";
    std::cin >> aika2.hours >> aika2.minutes >> aika2.seconds;

    aika_ty ero = aikojen_erotus(aika1, aika2);
    std::cout << "Aikojen ero on: " << std::setfill('0') << std::setw(2) << ero.hours << ":" << std::setw(2) << ero.minutes << ":" << std::setw(2) << ero.seconds << "\n";

    return 0;
}