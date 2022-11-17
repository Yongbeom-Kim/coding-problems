#include <iostream>
#include <algorithm>

void print_array(int* a) {
    for (int i = 0; i < 6; i ++) {
        std::cout << a[i] << " ";
    }
    std::cout << "\n";
}

int main() {
    int a[6];

    std::iota(a, a+6);
    print_array(a);
    
}
