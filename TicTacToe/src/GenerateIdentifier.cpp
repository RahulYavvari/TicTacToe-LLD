
#include "GenerateIdentifier.h"

int GenerateIdentifier::lower_bound = 10000;
int GenerateIdentifier::upper_bound = 99999;

GenerateIdentifier::GenerateIdentifier() {
    std::random_device rd;
    generator = std::mt19937(rd());
}

int GenerateIdentifier::get_identifier(int lower_bound, int upper_bound) {
    std::uniform_int_distribution<int> distribution(lower_bound, upper_bound);
    return distribution(generator);
}
