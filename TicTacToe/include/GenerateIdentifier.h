#pragma once

#include <random>

class GenerateIdentifier {
private:
    std::mt19937 generator;

public:
    static int lower_bound;
    static int upper_bound;

    GenerateIdentifier();

    int get_identifier(int lower_bound, int upper_bound);
};

