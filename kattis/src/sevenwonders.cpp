#include <cstdio>
#include <algorithm>

int main() {
    int cards[3];
    std::fill(cards, cards+3, 0);

    char c;
    while (scanf("%c", &c) != EOF) {
        cards[0] += c == 'T';
        cards[1] += c == 'C';
        cards[2] += c == 'G';
    }

    printf("%d", (cards[0]*cards[0]+cards[1]*cards[1]+cards[2]*cards[2]+*std::min_element(cards, cards+3)*7));
}