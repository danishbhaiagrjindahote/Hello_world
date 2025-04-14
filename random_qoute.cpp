#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

int main() {
    std::vector<std::string> quotes = {
        "Code is like humor. When you have to explain it, it’s bad.",
        "In order to be irreplaceable, one must always be different.",
        "Experience is the name everyone gives to their mistakes.",
        "Java is to JavaScript what car is to Carpet.",
        "Before software can be reusable it first has to be usable.",
        "Fix the cause, not the symptom.",
        "Make it work, make it right, make it fast."
    };

    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int index = std::rand() % quotes.size();

    std::cout << "Random Developer Quote:\n";
    std::cout << "\"" << quotes[index] << "\"" << std::endl;

    return 0;
}
