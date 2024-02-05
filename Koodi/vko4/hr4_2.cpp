#include <iostream>
#include <fstream>

int main() {
    std::ifstream file("Random.txt");
    if (!file) {
        std::cerr << "Unable to open file";
        return 1;
    }

    double number;
    double sum = 0.0;
    int count = 0;

    while (file >> number) {
        sum += number;
        count++;
    }

    file.close();

    double average = sum / count;

    std::cout << "Number of numbers: " << count << std::endl;
    std::cout << "Sum of numbers: " << sum << std::endl;
    std::cout << "Average of numbers: " << average << std::endl;

    return 0;
}