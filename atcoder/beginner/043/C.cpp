#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    scanf("%d", &N);

    vector<int> numbers (N, 0);
    for (int i = 0; i < N; i ++) {
        scanf("%d", &numbers[i]);
    }

    int min_num = *min_element(numbers.begin(), numbers.end());
    int max_num = *max_element(numbers.begin(), numbers.end());

    long min_cost = numeric_limits<long>::max();
    for (int final_num = min_num; final_num <= max_num; final_num ++) {
        long cost = 0;

        for (int number: numbers) {
            cost += (number - final_num) * (number - final_num);
        }
        min_cost = min(min_cost, cost);
    }

    printf("%ld\n", min_cost);
}