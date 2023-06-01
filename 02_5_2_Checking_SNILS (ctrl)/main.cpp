#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    system("chcp 1251");

    

    int number_snils;
    int sumOfNumberSnils = 0;
    int inputCheckNum, checkNum;
    int limitation = 0;

    cout << "Введите СНИЛС: ";
    for (int i = 1; i <= 9; i++) {
        cin >> number_snils;

        if (i != 0) {
            sumOfNumberSnils += number_snils * i;
        }
        else {
            inputCheckNum = number_snils;
        }
    }
    cout << sumOfNumberSnils << endl;

    /*limitation = sum % 101;

    if (sum < 100) {
        checkNum = inputCheckNum;
    }
    else if (sum == 100 || sum == 101) {
        checkNum = 0;
    }
    else if (remainder < 100) {
        checkNum = limitation;
    }
    else {
        checkNum = 0;
    }

    cout << "Результат проверки: ";
    if (checkNum == inputCheckNum) {
        cout << true << std::endl;
    }
    else {
        cout << false << std::endl;
    }*/
}