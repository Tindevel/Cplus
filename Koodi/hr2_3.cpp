#include <iostream>

// 2-parametrinen min()-funktio
int min(int x, int y) {
    return (x < y) ? x : y;
}

// 3-parametrinen min()-funktio, hyödyntää 2-parametrista versiota
int min(int x, int y, int z) {
    return min(min(x, y), z);
}

// 4-parametrinen min()-funktio, hyödyntää 3-parametristä versiota
int min(int x, int y, int z, int w) {
    return min(min(x, y, z), w);
}

int main() {
    // Testataan min()-funktioita pääohjelmassa
    int luku1, luku2, luku3, luku4;

    // Kysy käyttäjältä luvut
    std::cout << "Syota luku 1: ";
    std::cin >> luku1;

    std::cout << "Syota luku 2: ";
    std::cin >> luku2;

    std::cout << "Syota luku 3: ";
    std::cin >> luku3;

    std::cout << "Syota luku 4: ";
    std::cin >> luku4;

    // Kutsu min()-funktioita ja tulosta tulokset
    std::cout << "Pienin luku (2-parametrinen): " << min(luku1, luku2) << std::endl;
    std::cout << "Pienin luku (3-parametrinen): " << min(luku1, luku2, luku3) << std::endl;
    std::cout << "Pienin luku (4-parametrinen): " << min(luku1, luku2, luku3, luku4) << std::endl;

    return 0;
}
