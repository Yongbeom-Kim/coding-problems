#include <iostream>
#include <algorithm>

void print_array(int* a) {
    for (int i = 0; i < 6; i ++) {
        std::cout << a[i] << " ";
    }
    std::cout << "\n";
}

int main() {
    int a[] = {1,2,3,4,5,6};
    int b[] = {7,8,9,1,2,3};

    std::reverse_copy(a, a+6, b);
    print_array(b);
    
}
