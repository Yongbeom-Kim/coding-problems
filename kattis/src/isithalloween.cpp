#include <stdio.h>
#include <string.h>

int main() {

    char mon[3];
    int day;

    scanf("%s %d", mon, &day);
    
    printf(((strcmp(mon, "OCT") == 0 && day == 31) || (strcmp(mon, "DEC") == 0 && day == 25)) ? "yup" : "nope");
}