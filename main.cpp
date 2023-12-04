#include <iostream>
#include <string>

class Human {
private:
    std::string name;
    int birthday;
    double height;
    double weight;
    std::string country;

public:
    Human() {
    }

    void enterData() {
        std::cout << "Enter name: ";
        std::getline(std::cin, name);

        std::cout << "Enter birthday: ";
        std::cin >> birthday;

        std::cout << "Enter height: ";
        std::cin >> height;

        std::cout << "Enter weight: ";
        std::cin >> weight;

        std::cin.ignore(); 
        std::cout << "Enter country: ";
        std::getline(std::cin, country);
    }

    void displayData() {
        std::cout << "Name: " << name <<std::endl;
        std::cout << "Birthday: " << birthday << std::endl;
        std::cout << "Height: " << height << " cm" << std::endl;
        std::cout << "Weight: " << weight << " kg" << std::endl;
        std::cout << "Country: " << country << std::endl;
    }
};

int main() {
    Human person;

    person.enterData();

    std::cout << "\nEntered Information:\n";
    person.displayData();

    return 0;
}
