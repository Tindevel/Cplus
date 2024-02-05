#include <iostream>
using namespace std;

int main() {
    int num = 2;
    //pointer variable
    int* num_p = &num;
    *num_p = 7;
    cout << &num_p << *num_p << endl;
    cout << &num << num << endl;

    int* num_p2 = &(*num_p);

    cout << sizeof(num) << endl;
    cout << sizeof(num_p) << endl;

    int* num_p3;
   // cout << num_p3;

    num_p3 = nullptr;
    cout << num_p3 << endl;
    cin.get();
    return 0;
}
