#ifndef TEST_H
#define TEST_H

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

// Define easy, medium, and hard question structures
struct EasyQuestion {
    std::string questionText;
    std::string correctAnswer;
};

struct MediumQuestion {
    std::string questionText;
    std::string correctAnswer;
};

struct HardQuestion {
    std::string questionText;
    std::string correctAnswer;
};

// Function declarations
bool askEasyQuestion(const EasyQuestion& question);
bool askMediumQuestion(const MediumQuestion& question);
bool askHardQuestion(const HardQuestion& question);
int SciencesTest();

#endif // TEST_H
