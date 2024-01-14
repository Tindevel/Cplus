#include <iostream>

void swapOne(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
void swapTwo(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1 = 5;
    int num2 = 10;

    std::cout << "Ennen vaihtoa: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    swapOne(num1, num2);

    std::cout << "Vaihdon jälkeen : num1 = " << num1 << ", num2 = " << num2 << std::endl;

    num1 = 5;
    num2 = 10;

    std::cout << "Ennen vaihtoa: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    swapTwo(&num1, &num2);

    std::cout << "Vaihdon jälkeen : num1 = " << num1 << ", num2 = " << num2 << std::endl;

    return 0;
}