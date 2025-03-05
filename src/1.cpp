#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Enter your age: ";
    std::cin >> age;
    if (age < 18) {
        std::cout << "Sorry, you are not eligible to vote yet.";
    } else {
        std::cout << "Congratulations, " << name << ". You are eligible to vote.";
    }
    return 0;
}