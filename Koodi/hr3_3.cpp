#include <iostream>
#include <iomanip>

struct aika_ty {
    int hours;
    int minutes;
    int seconds;
};

int main() {
    aika_ty aika;
    std::cout << "Anna tunnit: ";
    std::cin >> aika.hours;
    std::cout << "Anna minuutit: ";
    std::cin >> aika.minutes;
    std::cout << "Anna sekunnit: ";
    std::cin >> aika.seconds;

    if (aika.hours < 0 || aika.hours > 23 || aika.minutes < 0 || aika.minutes > 59 || aika.seconds < 0 || aika.seconds > 59) {
        std::cout << "Virheellinen syöte.\n";
        return 1;
    }

    std::cout << std::setfill('0') << std::setw(2) << aika.hours << ":" << std::setw(2) << aika.minutes << ":" << std::setw(2) << aika.seconds << "\n";

    aika_ty* aika_ptr = &aika;
    std::cout << std::setw(2) << aika_ptr->hours << ":" << std::setw(2) << aika_ptr->minutes << ":" << std::setw(2) << aika_ptr->seconds << "\n";

    aika_ty aika1 = {12, 34, 56};
    aika_ty aika2 = aika1;

    if (aika1.hours == aika2.hours && aika1.minutes == aika2.minutes && aika1.seconds == aika2.seconds) {
        std::cout << "Sisällöt ovat samat.\n";
    }

    return 0;
}