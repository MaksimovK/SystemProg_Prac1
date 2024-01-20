#include <iostream>

using namespace std;

int countDigits(int number) {
    int count = 0;
    while (number != 0) {
        number /= 10;
        ++count;
    }
    return count;
}

int main() {
    int number;
    setlocale(LC_ALL, "rus");
    cout << "Введите число: ";
    cin >> number;

    int digitCount = countDigits(number);
    cout << "Количество цифр в числе: " << digitCount << std::endl;

    return 0;
}
