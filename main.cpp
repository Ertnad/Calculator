#include <iostream>
using namespace std;

double readFirstNumber() {
    double firstNumber;
    cout << "Print a first number: ";
    cin >> firstNumber;
    return firstNumber;
}

char readOperationSign () {
    char sign;
    cout << "Print the operation sign: ";
    cin >> sign;
    return sign;
}

double readSecondNumber(char sign) {
    double secondNumber;
    cout << "Print a second number: ";
    cin >> secondNumber;
    while (sign == '/' && secondNumber == 0) {
        cout << "Can't divide by zero " << endl;
        cout << "Try to print a another second number: ";
        cin >> secondNumber;
   }
    return secondNumber;
}

double calculateTheResultOfAnOperationWithNumbers(double firstNumber, char sign, double secondNumber) {
    switch (sign) {
        case '+':
        {
          return firstNumber + secondNumber;
        }
        case '-':
        {
            return firstNumber - secondNumber;
        }
        case '*':
        {
            return firstNumber * secondNumber;
        }
        case '/':
        {
            return firstNumber / secondNumber;
        }
        default:cout <<"Error"<< endl; return 0;
    }
}

int main() {
    double firstNumber = readFirstNumber();
    char sign = readOperationSign();
    double secondNumber = readSecondNumber(sign);

    cout <<"Result: "<< calculateTheResultOfAnOperationWithNumbers(firstNumber, sign, secondNumber);

    return 0;
}