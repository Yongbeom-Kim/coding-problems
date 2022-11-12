#include <string>
#include <iostream>
#include <sstream>
#include <stdio.h>

using namespace std;

int main() {

    string s;

    getline(cin, s);

    printf("Thank you, %s, and farewell!", s.c_str());
}