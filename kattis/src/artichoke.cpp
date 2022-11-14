#include <stdio.h>
#include <cmath>
#include <algorithm>

// doing
int main() {
    int p,a,b,c,d,n;

    scanf("%d %d %d %d %d %d" ,&p,&a,&b,&c,&d,&n);

    double max_so_far, min_so_far, max_decline;

    max_so_far = p*(sin(a+b)+cos(c+d)+2);
    min_so_far = max_so_far;
    max_decline = 0;

    for (int i = 2; i <= n; i ++) {
        double curr = p*(sin(a*i+b)+cos(c*i+d)+2);
        if (curr > max_so_far) {
            max_decline = std::max(max_decline, max_so_far - min_so_far);
            max_so_far = curr;
            min_so_far = max_so_far;
        }

        if (curr < min_so_far) {
            min_so_far = curr;
            max_decline = std::max(max_decline, max_so_far - min_so_far);
        }
    }

    printf("%f", max_decline);
    
}