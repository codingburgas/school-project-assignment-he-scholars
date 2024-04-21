#include "compass.h"
#include <iostream>
#include <string>




void displayRecommendation(const std::string& learningMethod) {
    std::cout << "Based on your answers, we recommend " << learningMethod << " learning method for you." << std::endl;
}

void studentCompass() {
    std::cout << "Welcome to Student Compass!" << std::endl;
    std::cout << "Please answer the following questions to determine your preferred learning method." << std::endl;

    int visualScore = 0;
    int auditoryScore = 0;
    int kinestheticScore = 0;


    std::cout << "1. When learning new information, do you prefer to read textbooks or watch videos? (Enter 1 for textbooks, 2 for videos): ";
    std::cin >> visualScore;



    std::cout << "2. When studying for a test, do you find it helpful to discuss the material with others or listen to recorded lectures? (Enter 1 for discuss, 2 for listen): ";
    std::cin >> auditoryScore;



    std::cout << "3. When trying to understand a complex concept, do you prefer to draw diagrams, use models, or engage in hands-on activities? (Enter 1 for draw/use models, 2 for hands-on activities): ";
    std::cin >> kinestheticScore;



    if (visualScore > auditoryScore && visualScore > kinestheticScore) {
        displayRecommendation("visual");
        std::cout << "Visual learners must see information in order to learn it." << std::endl;
        std::cout << "It is a type of learning style in which students prefer to use images, graphics, colors, and maps to communicate ideas and thoughts.";
    }
    else if (auditoryScore > visualScore && auditoryScore > kinestheticScore) {
        displayRecommendation("auditory");
        std::cout << "Auditory learning means that a student learns most effectively by listening. " << std::endl;
        std::cout << "They would prefer listening to a lecture over reading a textbook, or hearing the instructions for a project instead of figuring it out hands-on.";
    }
    else if (kinestheticScore > visualScore && kinestheticScore > auditoryScore) {
        displayRecommendation("kinesthetic");
        std::cout << "Kinesthetic learning links the process of learning to physical activity." << std::endl;
        std::cout << "It is a learning style during which the learner has to feel or move to learn more effectively.";
    }
    else {
        std::cout << "It seems your preferences are balanced between different learning methods. Experiment with different approaches to see what works best for you!" << std::endl;
    }
}