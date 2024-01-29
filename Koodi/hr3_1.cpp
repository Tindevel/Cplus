#include <iostream>
#include <string>



void sekunnit_ajaksi(int total_seconds, int& hours, int& minutes, int& seconds) {
    hours = total_seconds / 3600;
    total_seconds -= hours * 3600;
    minutes = total_seconds / 60;
    total_seconds -= minutes * 60;
    seconds = total_seconds;
}

int main() {
    int total_seconds, hours, minutes, seconds;
    std::cout << "Enter the total number of seconds: ";
    std::cin >> total_seconds;
    sekunnit_ajaksi(total_seconds, hours, minutes, seconds);
    std::cout << total_seconds << " seconds is " << hours << " hours " << minutes << " minutes " << seconds << " seconds.\n";
    return 0;
}