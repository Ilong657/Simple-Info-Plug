#include <iostream>
#include <string>


int main() {
    std::string name;
    std::string age;
    std::string city;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << "Enter your age: ";
    std::getline(std::cin, age);

    std::cout << "Enter your city: " << '\n';
    std::getline(std::cin, city);

    std::cout << "Hello, " << name << "! You are " << age << " years old and live in " << city << ".\n";

    return 0;
}