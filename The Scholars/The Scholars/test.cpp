#include "Test.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

// Function to ask an easy question
bool askEasyQuestion(const EasyQuestion& question) {
    std::cout << question.questionText << std::endl;
    std::cout << "Your answer: ";
    std::string userAnswer;
    std::cin.ignore(); // Ignore the newline character in the input buffer
    std::getline(std::cin, userAnswer);

    return (userAnswer == question.correctAnswer);
}

// Function to ask a medium question
bool askMediumQuestion(const MediumQuestion& question) {
    std::cout << question.questionText << std::endl;
    std::cout << "Your answer: ";
    std::string userAnswer;
    std::cin.ignore(); // Ignore the newline character in the input buffer
    std::getline(std::cin, userAnswer);

    return (userAnswer == question.correctAnswer);
}

// Function to ask a hard question
bool askHardQuestion(const HardQuestion& question) {
    std::cout << question.questionText << std::endl;
    std::cout << "Your answer: ";
    std::string userAnswer;
    std::cin.ignore(); // Ignore the newline character in the input buffer
    std::getline(std::cin, userAnswer);

    return (userAnswer == question.correctAnswer);
}

// Function to generate random questions
template<typename T>
T getRandomQuestion(const std::vector<T>& questions) {
    int index = rand() % questions.size();
    return questions[index];
}

int SciencesTest() {
    // Seed the random number generator
    srand(time(0));

    // Define easy, medium, and hard questions
    std::vector<EasyQuestion> easyQuestions = {
        {"What is the capital of France?", "Paris"},
        {"How many sides does a triangle have?", "3"},
        {"Who painted the Mona Lisa?", "Leonardo da Vinci"},
        {"What is the largest planet in our solar system?", "Jupiter"},
        {"How many legs does a spider have?", "8"},
        {"Name the process by which plants make their food.", "Photosynthesis"},
        {"What is the chemical symbol for water?", "H2O"},
        {"How many continents are there on Earth?", "7"},
        {"What is the opposite of 'day'?", "Night"},
        {"What is the square root of 25?", "5"},
        {"Who wrote 'Romeo and Juliet'?", "William Shakespeare"},
        {"Which ocean is the largest?", "Pacific Ocean"},
        {"What is the primary gas that makes up the Earth's atmosphere?", "Nitrogen"},
        {"How many players are there on a basketball team?", "5"}
    };

    std::vector<MediumQuestion> mediumQuestions = {
        {"What is the powerhouse of the cell?", "Mitochondria"},
        {"Who discovered penicillin?", "Alexander Fleming"},
        {"What is the longest river in the world?", "Nile"},
        {"Name the three primary colors.", "Red, Green, Blue"},
        {"What year did the Titanic sink?", "1912"},
        {"Who painted the ceiling of the Sistine Chapel?", "Michelangelo"},
        {"What is the formula for the area of a rectangle?", "Length x Width"},
        {"What is the speed of light in a vacuum?", "299,792,458 m/s"},
        {"Who is known as the father of modern physics?", "Albert Einstein"},
        {"What is the main ingredient in guacamole?", "Avocado"},
        {"Which gas do plants absorb during photosynthesis?", "Carbon Dioxide"},
        {"What is the chemical symbol for gold?", "Au"},
        {"Who wrote 'To Kill a Mockingbird'?", "Harper Lee"},
        {"What is the largest mammal in the world?", "Blue Whale"}
    };

    std::vector<HardQuestion> hardQuestions = {
        {"What is the Heisenberg Uncertainty Principle in physics?", "Principle stating that the more precisely the position of a particle is determined, the less precisely its momentum can be known, and vice versa."},
        {"Who proposed the heliocentric theory?", "Nicolaus Copernicus"},
        {"What is the difference between an alligator and a crocodile?", "Mainly differences in snout shape, habitat, and behavior"},
        {"Describe the Doppler Effect.", "The change in frequency or wavelength of a wave in relation to an observer who is moving relative to the wave source."},
        {"What are neurotransmitters?", "Chemicals that transmit signals across a synapse from one neuron to another."},
        {"Explain the concept of osmosis.", "The movement of solvent molecules from an area of lower solute concentration to an area of higher solute concentration through a semi-permeable membrane."},
        {"What is the main function of the mitochondria in a cell?", "To produce energy (ATP) through cellular respiration."},
        {"Who discovered radioactivity?", "Marie Curie"},
        {"What is Pascal's principle?", "A change in pressure at any point in an enclosed fluid is transmitted undiminished to all points in the fluid."},
        {"What is the structure of an atom according to Bohr's model?", "Electrons orbit the nucleus in discrete energy levels."}
        // Add more hard questions here if needed
    };

    // Variable to store the total score
    int score = 0;

    // Ask random easy questions, starting from the first one
    for (int i = 0; i < 5; ++i) { // 5 Easy Questions
        EasyQuestion easyQuestion = getRandomQuestion(easyQuestions);
        if (askEasyQuestion(easyQuestion)) {
            std::cout << "Correct!" << std::endl;
            score += 1; // Increment score for each correct answer
        }
        else {
            std::cout << "Wrong! The correct answer is: " << easyQuestion.correctAnswer << std::endl;
        }
        std::cout << std::endl;
    }

    // Ask random medium questions, starting from the first one
    for (int i = 0; i < 5; ++i) { // 5 Medium Questions
        MediumQuestion mediumQuestion = getRandomQuestion(mediumQuestions);
        if (askMediumQuestion(mediumQuestion)) {
            std::cout << "Correct!" << std::endl;
            score += 2; // Increment score for each correct answer
        }
        else {
            std::cout << "Wrong! The correct answer is: " << mediumQuestion.correctAnswer << std::endl;
        }
        std::cout << std::endl;
    }

    // Ask random hard questions, starting from the first one
    for (int i = 0; i < 10; ++i) { // 10 Hard Questions
        HardQuestion hardQuestion = getRandomQuestion(hardQuestions);
        if (askHardQuestion(hardQuestion)) {
            std::cout << "Correct!" << std::endl;
            score += 3; // Increment score for each correct answer
        }
        else {
            std::cout << "Wrong! The correct answer is: " << hardQuestion.correctAnswer << std::endl;
        }
        std::cout << std::endl;
    }

    return score;
}
