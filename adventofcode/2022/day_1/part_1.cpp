#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <iostream>
#include <fstream>

// From https://adventofcode.com/2022/day/1
int main()
{
    std::ifstream infile ("input.in");
    std::string line;

    long long sum = 0;
    long long max_sum = 0;
    while (!infile.eof()) {
        std::getline(infile, line);

        if (line == "") {
            max_sum = std::max(sum, max_sum);
            sum = 0;
            continue;
        }

        sum += std::stoll(line);
    }

    std::cout << max_sum << std::endl;
}