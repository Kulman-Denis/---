#include <iostream>
#include <cmath>

using namespace std;

// Task 1
void solveQuadraticEquation(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
    }
    else if (discriminant == 0) {
        double root = -b / (2 * a);
        cout << "Double root: " << root << endl;
    }
    else {
        cout << "No real roots." << endl;
    }
}

// Task 2
double calculateThirdSide(double a, double b, double angleC) {
    return sqrt(a * a + b * b - 2 * a * b * cos(angleC));
}

// Task 3
double calculateDistance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Task 5
int findMax(int a, int b, int c) {
    return max(max(a, b), c);
}

// Task 6
void convertAndPrint(char* buffer) {
    int intValue = atoi(buffer);
    long longValue = atol(buffer);
    double doubleValue = atof(buffer);

    cout << "Integer: " << intValue << endl;
    cout << "Long: " << longValue << endl;
    cout << "Double: " << doubleValue << endl;
}

// Task 7
char tolowerR(char ch) {
    if (ch >= 'А' && ch <= 'Я') {
        return ch + ('а' - 'А');
    }
    return ch;
}

char toupperR(char ch) {
    if (ch >= 'а' && ch <= 'я') {
        return ch - ('а' - 'А');
    }
    return ch;
}

bool isalphaR(char ch) {
    return (ch >= 'А' && ch <= 'Я') || (ch >= 'а' && ch <= 'я');
}

bool islowerR(char ch) {
    return ch >= 'а' && ch <= 'я';
}

bool isupperR(char ch) {
    return ch >= 'А' && ch <= 'Я';
}

bool isalnumR(char ch) {
    return isalphaR(ch) || isdigit(ch);
}

// Task 8
void processAddress() {
    char city[50] = "";
    char district[50] = "";
    char street[50] = "";
    char house[50] = "";
    char apartment[50] = "";

    // Initialization of address elements
    strcpy_s(city, "Kyiv");
    strcpy_s(district, "Pechersky");
    strcpy_s(street, "Kreschatyk");
    strcpy_s(house, "10");
    strcpy_s(apartment, "25");

    // Concatenation of address elements
    char fullAddress[250] = "";
    strcat_s(fullAddress, city);
    strcat_s(fullAddress, ", ");
    strcat_s(fullAddress, district);
    strcat_s(fullAddress, ", ");
    strcat_s(fullAddress, street);
    strcat_s(fullAddress, ", ");
    strcat_s(fullAddress, house);
    strcat_s(fullAddress, ", ");
    strcat_s(fullAddress, apartment);

    // Displaying address information
    cout << "City: " << city << endl;
    cout << "District: " << district << endl;
    cout << "Street: " << street << endl;
    cout << "House: " << house << endl;
    cout << "Apartment: " << apartment << endl;

    // Displaying full address
    cout << "Full Address: " << fullAddress << endl;

    // Length of elements and full address
    cout << "Length of City: " << strlen(city) << endl;
    cout << "Length of Full Address: " << strlen(fullAddress) << endl;

    // Comparison of city and district
    if (strcmp(city, district) > 0) {
        cout << "City is greater than District" << endl;
    }
    else if (strcmp(city, district) < 0) {
        cout << "City is less than District" << endl;
    }
    else {
        cout << "City is equal to District" << endl;
    }
}

// Task 9
unsigned long Perimeter(int length, int width);

// Task 10
unsigned long Perimeter(int length, int width) {
    return 2 * (static_cast<unsigned long>(length) + static_cast<unsigned long>(width));
}

// Task 12
float divide(int numerator, int denominator) {
    if (denominator == 0) {
        return -1; // Division by zero
    }
    return static_cast<float>(numerator) / denominator;
}

// Task 14
bool isYesOrД(char ch) {
    return (ch == 'Y' || ch == 'y' || ch == 'д' || ch == 'Д');
}

// Task 15
inline int getNumericValue(char ch) {
    return static_cast<int>(ch);
}

// Task 16
void doubleNumber(int num) {
    num *= 2;
}

// Task 17
void doubleNumberByReference(int& num) {
    num *= 2;
}

// Task 18
int addNumbers(int a, int b = 10) {
    return a + b;
}

// Task 19
template <typename T1, typename T2>
bool areEqual(T1 a, T2 b) {
    return a == b;
}

int main() {
    // Task 1: Quadratic Equation
    double a, b, c;
    cout << "Enter coefficients (a, b, c) for the quadratic equation ax^2 + bx + c = 0:" << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    solveQuadraticEquation(a, b, c);

    // Task 2: Triangle Third Side
    double sideA, sideB, angleC;
    cout << "\nEnter lengths of two sides and the angle between them to calculate the third side:" << endl;
    cout << "Side A: ";
    cin >> sideA;
    cout << "Side B: ";
    cin >> sideB;
    cout << "Angle C (in degrees): ";
    cin >> angleC;
    cout << "Third side of the triangle: " << calculateThirdSide(sideA, sideB, angleC) << endl;

    // Task 3: Distance Between Points
    double x1, y1, x2, y2;
    cout << "\nEnter coordinates of two points to calculate the distance between them:" << endl;
    cout << "Point 1 (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Point 2 (x2 y2): ";
    cin >> x2 >> y2;
    cout << "Distance between points: " << calculateDistance(x1, y1, x2, y2) << endl;

    // Task 5: Find Max of Three Numbers
    int num1, num2, num3;
    cout << "\nEnter three numbers to find the maximum:" << endl;
    cout << "Number 1: ";
    cin >> num1;
    cout << "Number 2: ";
    cin >> num2;
    cout << "Number 3: ";
    cin >> num3;
    cout << "Maximum: " << findMax(num1, num2, num3) << endl;

    // Task 6: Convert String to Int, Long, Double
    char buffer[50];
    cout << "\nEnter a string to convert to int, long, and double:" << endl;
    cin >> buffer;
    convertAndPrint(buffer);

    // Task 7: Personal Character Functions for Russian Alphabet
    char ch;
    cout << "\nEnter a character from the Russian alphabet:" << endl;
    cin >> ch;
    cout << "tolowerR: " << tolowerR(ch) << endl;
    cout << "toupperR: " << toupperR(ch) << endl;
    cout << "isalphaR: " << isalphaR(ch) << endl;
    cout << "islowerR: " << islowerR(ch) << endl;
    cout << "isupperR: " << isupperR(ch) << endl;
    cout << "isalnumR: " << isalnumR(ch) << endl;

    // Task 8: Process Address
    processAddress();

    // Task 9 and Task 10: Perimeter of Rectangle
    int length, width;
    cout << "\nEnter length and width of a rectangle to calculate the perimeter:" << endl;
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Perimeter: " << Perimeter(length, width) << endl;

    // Task 11: Incorrect Code Fragment
    // This code fragment is incorrect and needs to be fixed.

    // Task 12: Divide Two Numbers
    int numerator, denominator;
    cout << "\nEnter two numbers to divide (numerator denominator):" << endl;
    cin >> numerator >> denominator;
    float result = divide(numerator, denominator);
    if (result == -1) {
        cout << "Error: Division by zero." << endl;
    }
    else {
        cout << "Result of division: " << result << endl;
    }

    // Task 14: Check for 'Y', 'y', 'д', 'Д'
    char choice;
    cout << "\nEnter 'Y', 'y', 'д', 'Д', or any other character:" << endl;
    cin >> choice;
    cout << "Is 'Y', 'y', 'д', 'Д'? " << (isYesOrД(choice) ? "Yes" : "No") << endl;

    // Task 15: Inline Function to Get Numeric Value of a Character
    char charValue;
    cout << "\nEnter a character to get its numeric value:" << endl;
    cin >> charValue;
    cout << "Numeric value: " << getNumericValue(charValue) << endl;

    // Task 17: Double Number by Reference
    int numToDouble;
    cout << "\nEnter a number to double by reference:" << endl;
    cin >> numToDouble;
    doubleNumberByReference(numToDouble);
    cout << "Doubled number by reference: " << numToDouble << endl;

    // Task 18: Add Numbers with Default Value
    int numToAdd;
    cout << "\nEnter a number to add with default value:" << endl;
    cin >> numToAdd;
    cout << "Result of addition: " << addNumbers(numToAdd) << endl;

    // Task 19: Overloaded Functions for Equality Check
    int intParam;
    double doubleParam;
    cout << "\nEnter an integer and a double for equality check:" << endl;
    cout << "Integer: ";
    cin >> intParam;
    cout << "Double: ";
    cin >> doubleParam;
    cout << "Are they equal? " << (areEqual(intParam, doubleParam) ? "Yes" : "No") << endl;

    return 0;
}