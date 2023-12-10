#include <iostream>
#include <string>

// TASK 1
// Значення x буде 100 після завершення циклу for.
int main() {
    setlocale(LC_ALL, "ukr");
    int x;
    for (x = 0; x < 100; x++);
    std::cout << "TASK 1: Значення x пiсля завершення циклу: " << x << std::endl;

    // TASK 2
    // Вкладений цикл for, що друкує картинку з нулів розміром 10x10.
    std::cout << "\nTASK 2: 10x10 Зразок з нулiв\n";
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            std::cout << "0 ";
        }
        std::cout << std::endl;
    }

    // TASK 3
    // Цикли for, while, do...while для друку чисел від 100 до 200 через 2.
    std::cout << "\nTASK 3: Використання циклу for\n";
    for (int i = 100; i <= 200; i += 2) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    std::cout << "\nTASK 3: Використання циклу while\n";
    int j = 100;
    while (j <= 200) {
        std::cout << j << " ";
        j += 2;
    }
    std::cout << std::endl;

    std::cout << "\nTASK 3: Використання циклу do...while\n";
    int k = 100;
    do {
        std::cout << k << " ";
        k += 2;
    } while (k <= 200);
    std::cout << std::endl;

    // TASK 4
    // Програма для введення числа із заданого діапазону.
    std::cout << "\nTASK 4: Введiть число в межах [1, 100]\n";
    int userInput;
    do {
        std::cout << "Введiть число: ";
        std::cin >> userInput;

        if (userInput < 1 || userInput > 100) {
            std::cout << "Число поза межами. Будь ласка, спробуйте ще раз.\n";
        }
    } while (userInput < 1 || userInput > 100);

    std::cout << "Ви ввели: " << userInput << std::endl;

    // TASK 5
    // Програма обчислення суми та добутку чисел.
    std::cout << "\nTASK 5: Обчислення суми та добутку\n";
    int n, sum = 0, product = 1;
    std::cout << "Введiть кiлькiсть чисел: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int num;
        std::cout << "Введiть число " << i + 1 << ": ";
        std::cin >> num;

        sum += num;
        product *= num;
    }

    std::cout << "Сума: " << sum << std::endl;
    std::cout << "Добуток: " << product << std::endl;

    // TASK 6
    // Відсутній оператор збільшення counter у циклі while.
    std::cout << "\nTASK 6: В циклi while вiдсутнiй оператор збiльшення\n";

    // TASK 7
    // Помилка в ім'ямі змінної 'counter' в cout.
    std::cout << "\nTASK 7: Помилка у iменi змiнної 'counter'\n";

    // TASK 8
    // У циклі while counter спочатку виводиться, а потім зменшується.
    std::cout << "\nTASK 8: Значення 'counter' виводиться перед зменшенням\n";

    // TASK 9
    // Програма для введення параметрів об'єкта та їх роздруківки.
    std::cout << "\nTASK 9: Циклiчне введення та виведення параметрiв об'єкта\n";
    for (int i = 0; i < 3; i++) {
        std::string objectName;
        int objectAge;
        char objectGender;
        double objectScholarship;

        std::cout << "Введiть iм'я об'єкта " << i + 1 << ": ";
        std::cin >> objectName;
        std::cout << "Введiть вiк об'єкта " << i + 1 << ": ";
        std::cin >> objectAge;
        std::cout << "Введiть стать об'єкта " << i + 1 << " (M/F): ";
        std::cin >> objectGender;
        std::cout << "Введiть стипендiю об'єкта " << i + 1 << ": ";
        std::cin >> objectScholarship;

        std::cout << "Iм'я: " << objectName << ", Вiк: " << objectAge << ", Стать: " << objectGender << ", Стипендiя: " << objectScholarship << std::endl;
    }

    // TASK 10
    // Три варіанти switch для друку назв днів тижня.
    std::cout << "\nTASK 10: Використання switch для назв днiв тижня\n";

    // Варіант 1: Використання цілого числа.
    int dayNumber;
    std::cout << "Введiть номер дня тижня (1-7): ";
    std::cin >> dayNumber;

    switch (dayNumber) {
    case 1: std::cout << "Понедiлок\n"; break;
    case 2: std::cout << "Вiвторок\n"; break;
    case 3: std::cout << "Середа\n"; break;
    case 4: std::cout << "Четвер\n"; break;
    case 5: std::cout << "П'ятниця\n"; break;
    case 6: std::cout << "Субота\n"; break;
    case 7: std::cout << "Недiля\n"; break;
    default: std::cout << "Невiрний номер дня\n"; break;
    }

    // Варіант 2: Використання символу.
    char daySymbol;
    std::cout << "Введiть символ дня тижня (M, T, W, Th, F, Sa, S): ";
    std::cin >> daySymbol;

    switch (daySymbol) {
    case 'M': std::cout << "Понедiлок\n"; break;
    case 'T': std::cout << "Вiвторок\n"; break;
    case 'W': std::cout << "Середа\n"; break;
    case 'Th': std::cout << "Четвер\n"; break;
    case 'F': std::cout << "П'ятниця\n"; break;
    case 'Sa': std::cout << "Субота\n"; break;
    case 'S': std::cout << "Недiля\n"; break;
    default: std::cout << "Невiрний символ дня\n"; break;
    }

    // Варіант 3: Використання перерахування (enum).
    enum Days {
        ПОНЕДІЛОК, ВІВТОРОК, СЕРЕДА, ЧЕТВЕР, ПЯТНИЦЯ, СУБОТА, НЕДІЛЯ
    };
    std::cout << "Введiть номер дня (0-6) за допомогою перерахування: ";
    int enumDayNumber;
    std::cin >> enumDayNumber;

    switch (static_cast<Days>(enumDayNumber)) {
    case ПОНЕДІЛОК: std::cout << "Понедiлок\n"; break;
    case ВІВТОРОК: std::cout << "Вiвторок\n"; break;
    case СЕРЕДА: std::cout << "Середа\n"; break;
    case ЧЕТВЕР: std::cout << "Четвер\n"; break;
    case ПЯТНИЦЯ: std::cout << "П'ятниця\n"; break;
    case СУБОТА: std::cout << "Субота\n"; break;
    case НЕДІЛЯ: std::cout << "Недiля\n"; break;
    default: std::cout << "Невiрний номер дня\n"; break;
    }

    // TASK 11
    // Програма для виведення характеристики землетрусу за шкалою Ріхтера.
    std::cout << "\nTASK 11: Виведення характеристики землетрусу за шкалою Рiхтера\n";
    double richterScale;
    std::cout << "Введiть магнiтуду землетрусу за шкалою Рiхтера: ";
    std::cin >> richterScale;

    if (richterScale < 5)
        std::cout << "Легке, немає руйнувань\n";
    else if (richterScale < 5.5)
        std::cout << "Середнє, невеликi руйнування\n";
    else if (richterScale < 6.5)
        std::cout << "Серйозне, руйнування та пошкодження стiн\n";
    else if (richterScale < 7.5)
        std::cout << "Лихо, багато будинкiв та будинкiв пошкоджено\n";
    else
        std::cout << "Катастрофа, більшiсть будинкiв та будiвель зруйновано\n";


    // TASK 12
    std::cout << "\nTASK 12: Визначення термiну служби електричної лампочки\n";
    double power;
    std::cout << "Введiть потужнiсть лампочки (Вт): ";
    std::cin >> power;

    int lifespan;
    if (power == 25)
        lifespan = 2500;
    else if (power == 40 || power == 60)
        lifespan = 1000;
    else if (power == 75 || power == 100)
        lifespan = 750;
    else if (power == 150 || power == 200)
        lifespan = 500;
    else
        lifespan = 0; // Невірна потужність, термін служби не визначено.

    std::cout << "Термiн служби лампочки: " << lifespan << " годин\n";


    // TASK 13
    std::cout << "\nTASK 13: Помилка у switch (невикористовуваний break)\n";
    int caseNumber;
    std::cout << "Введiть номер випадку (1-2): ";
    std::cin >> caseNumber;

    switch (caseNumber) {
    case 1:
        std::cout << "Бiлий\n";
        // Відсутній break
    case 2:
        std::cout << "Iнший\n";
    }

    return 0;
}