#include <iostream>
#include <cstdlib>

void displayMainMenu() {
    std::cout << R"(
  _____ _   _  _____   _____ _____  _   _ _____ _       ___  ______  _____ 
 |_   _| | | ||  ___| /  ___/  __ \| | | |  _  | |     / _ \ | ___ \/  ___|
   | | | |_| || |__   \ `--.| /  \/| |_| | | | | |    / /_\ \| |_/ /\ `--. 
   | | |  _  ||  __|   `--. \ |    |  _  | | | | |    |  _  ||    /  `--. \
   | | | | | || |___  /\__/ / \__/\| | | \ \_/ / |____| | | || |\ \ /\__/ /
   \_/ \_| |_/\____/  \____/ \____/\_| |_/\___/\_____/\_| |_/\_| \_|\____/ 
)" << std::endl;

    // Main menu options
    std::cout << "[1] Sciences test" << std::endl;
    std::cout << "[2] Student compass" << std::endl;
    std::cout << "[3] Exit" << std::endl;
}

int main() {
    int choice;

    do {
        displayMainMenu();
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "Starting Sciences test..." << std::endl;
            break;
        case 2:
            std::cout << "Opening Student compass..." << std::endl;
            break;
        case 3:
            std::cout << "Exiting program. Goodbye!" << std::endl;
            break;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
            break;
        }
    } while (choice != 3);

    return 0;
}


