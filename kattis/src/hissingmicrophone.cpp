#include <algorithm>
#include <cstdio>
#include <cstring>

int main() {
    char ss[] = "ss";
    
    char input[31];

    scanf("%s", &input);

    if(std::search(input, strlen(input)+input, ss, ss+strlen(ss)) != input + strlen(input)) {
        printf("hiss");
    } else {
        printf("no hiss");
    }
}