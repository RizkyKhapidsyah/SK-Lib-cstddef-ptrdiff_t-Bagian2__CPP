#include <cstddef>
#include <iostream>
#include <conio.h>

/*
    Source by CPPReference
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    const std::size_t N = 10;
    int* a = new int[N];
    int* end = a + N;

    for (std::ptrdiff_t i = N; i > 0; --i) {
        std::cout << (*(end - i) = i) << ' ';
    }
        
    delete[] a;

    _getch();
    return 0;
}