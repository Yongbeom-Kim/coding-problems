#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <iostream>
#include <fstream>

// From https://adventofcode.com/2022/day/1#part2
int main()
{
    std::ifstream infile ("input.in");
    std::string line;

    long long sum = 0;
    long long first_max_sum = 0;
    long long second_max_sum = 0;
    long long third_max_sum = 0;
    while (!infile.eof()) {
        std::getline(infile, line);

        if (line == "") {
            if (sum > first_max_sum) {
                third_max_sum = second_max_sum;
                second_max_sum = first_max_sum;
                first_max_sum = sum;
            } else if (sum > second_max_sum) {
                third_max_sum = second_max_sum;
                second_max_sum = sum;
            } else if (sum > third_max_sum) {
                third_max_sum = sum;
            }
            sum = 0;
            continue;
        }

        sum += std::stoll(line);
    }


    if (sum > first_max_sum) {
        third_max_sum = second_max_sum;
        second_max_sum = first_max_sum;
        first_max_sum = sum;
    } else if (sum > second_max_sum) {
        third_max_sum = second_max_sum;
        second_max_sum = sum;
    } else if (sum > third_max_sum) {
        third_max_sum = sum;
    }
    
    std::cout << (first_max_sum + second_max_sum + third_max_sum) << std::endl;
}
//206780