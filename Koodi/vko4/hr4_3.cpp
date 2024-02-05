#include <iostream>

int main() {
    // Test local allocation
    const size_t localSize = 1024 * 1024; // 1 MB
    try {
        char test[localSize];
        test[0] = 'a';
        std::cout << "Local allocation successful: " << localSize / 1024 << " kilobytes\n";
    } catch (...) {
        std::cout << "Local allocation failed: " << localSize / 1024 << " kilobytes\n";
    }

    // Test dynamic allocation
    size_t dynamicMax = 0;
    for (size_t i = 100000; ; i += 50000) {
        char* test = nullptr;
        try {
            test = new char[i * 1024]; // kilobytes to bytes
            test[0] = 'a';
            delete[] test;
            dynamicMax = i;
        } catch (std::bad_alloc&) {
            std::cout << "Dynamic allocation failed at: " << i << " kilobytes\n";
            delete[] test;
            break;
        }
    }

    std::cout << "Max dynamic allocation: " << dynamicMax << " kilobytes\n";

    return 0;
}