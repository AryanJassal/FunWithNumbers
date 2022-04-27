#pragma once

#include <iostream>  //* for std::string ...
#include <algorithm>  //* for ...
#include <vector>  //* for std::vector ...

#include "classes.hpp"  //* for Statistics

//* Initialise the program
void init_program();

//* Clean up and exit the program
void exit_program(Statistics &stats);
void exit_program(Statistics &stats, int return_value);

//* Find all factors of a number
std::vector<long long> find_factors(long long num);

//* Strips all characters from the input
std::string strip(std::string str, char target);
std::string strip(std::string str);

//* Find random number between given numbers. <range> + <min> gives maximum number; <min> is the minimum number
long long random_number(long long min, long long range, long long seed_offset);

//* Replace a substring within a string with the given substring
std::string replace(std::string str, std::string match, std::string replacement);

//* Return unicode-aware length of a stirng
int unicode_len(std::string str);

//* Seconds to formatted string
std::string seconds_to_string(long long seconds);

//* Creating an enumerator for easier access to each Statistics element according to its ID
enum {
    NUMBERS_ENTERED = 1,
    TOTAL_OF_NUMBERS = 2,
    AVERAGE_OF_NUMBERS = 3,
    SMALLEST_NUMBER_ENTERED = 4,
    LARGEEST_NUMBER_ENTERED = 5,
    COORDINATE_ENTERED = 6,
    MEMORY_BENCHMARK_MAX_DIGITS = 7,
    BRAIN_SPEED_TEST_SCORE = 8,
    BRAIN_SPEED_TOTAL_QUESTIONS = 9,
    BRAIN_SPEED_CORRECT_ANSWERS = 10,
    BRAIN_SPEED_ACCURACY_PERCENTAGE = 11,
    TIME_IN_APPLICATION = 12
} StatsID;
