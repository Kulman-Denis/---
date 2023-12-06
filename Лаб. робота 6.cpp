#include <iostream>
#include <string>

// Оголошення класу "Студент"
class Student {
private:
    int age;
    std::string gender;
    double scholarship;

public:
    // Конструктор за замовчуванням
    Student() : age(0), gender("Unknown"), scholarship(0.0) {}

    // Конструктор з параметрами
    Student(int a, const std::string& g, double s) : age(a), gender(g), scholarship(s) {}

    // Методи доступу (геттери та сеттери)
    int getAge() const {
        return age;
    }

    void setAge(int a) {
        age = a;
    }

    const std::string& getGender() const {
        return gender;
    }

    void setGender(const std::string& g) {
        gender = g;
    }

    double getScholarship() const {
        return scholarship;
    }

    void setScholarship(double s) {
        scholarship = s;
    }

    // Метод для введення даних
    void input() {
        std::cout << "Enter age: ";
        std::cin >> age;
        std::cout << "Enter gender: ";
        std::cin >> gender;
        std::cout << "Enter scholarship: ";
        std::cin >> scholarship;
    }

    // Метод для виведення даних
    void display() const {
        std::cout << "Age: " << age << std::endl;
        std::cout << "Gender: " << gender << std::endl;
        std::cout << "Scholarship: " << scholarship << " UAH" << std::endl;
    }

    // Деструктор
    ~Student() {
        std::cout << "Destructor called for a student." << std::endl;
    }
};

// Оголошення та реалізація класу для роботи з датою
class Date {
private:
    int day;
    int month;
    int year;

public:
    // Конструктор за замовчуванням
    Date() : day(1), month(1), year(2000) {}

    // Конструктор з параметрами
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    // Геттери та сеттери для дня, місяця та року
    int getDay() const {
        return day;
    }

    void setDay(int d) {
        day = d;
    }

    int getMonth() const {
        return month;
    }

    void setMonth(int m) {
        month = m;
    }

    int getYear() const {
        return year;
    }

    void setYear(int y) {
        year = y;
    }

    // Логічні методи для перевірки частин дати
    bool isLeapYear() const {
        return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
    }

    // Роздруківка дати у кількох форматах
    void printDate() const {
        std::cout << "Date: " << day << "." << month << "." << year << std::endl;
    }

    void printDateWithSlash() const {
        std::cout << "Date: " << day << "/" << month << "/" << year << std::endl;
    }

    void printDateMMMDDYYYY() const {
        std::string months[] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
        std::cout << "Date: " << months[month - 1] << "-" << day << "-" << year << std::endl;
    }
};

int main() {
    // Створення двох об'єктів класу "Студент" та встановлення їх даних
    Student student1;
    student1.setAge(20);
    student1.setGender("Male");
    student1.setScholarship(1500.00);

    Student student2;
    student2.input(); // виклик методу для введення даних

    // Виведення інформації про студентів
    std::cout << "\nStudent 1:" << std::endl;
    student1.display();

    std::cout << "\nStudent 2:" << std::endl;
    student2.display();

    // Визначення та роздрукування середнього віку та сумарної стипендії
    double averageAge = (student1.getAge() + student2.getAge()) / 2.0;
    double totalScholarship = student1.getScholarship() + student2.getScholarship();

    std::cout << "\nAverage Age: " << averageAge << std::endl;
    std::cout << "Total Scholarship: " << totalScholarship << " UAH" << std::endl;

    // Створення об'єкту класу "Date" та встановлення його даних
    Date currentDate(5, 12, 2023);

    // Виведення дати у кількох форматах
    std::cout << "\nCurrent Date:" << std::endl;
    currentDate.printDate();
    currentDate.printDateWithSlash();
    currentDate.printDateMMMDDYYYY();

    return 0;
}
