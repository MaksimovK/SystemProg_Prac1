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

void printEvenDigits(int number) {
    cout << "Четные цифры числа: ";
    while (number != 0) {
        int digit = number % 10;
        if (digit % 2 == 0) {
            cout << digit << " ";
        }
        number /= 10;
    }
    cout << endl;
}

int main() {
    int number;
    setlocale(LC_ALL, "rus");
    cout << "Введите число: ";
    cin >> number;

    int digitCount = countDigits(number);

    if (digitCount == 3) {
        printEvenDigits(number);
    }
    else {
        cout << "Число не является трехзначным." << endl;
    }

    return 0;
}
