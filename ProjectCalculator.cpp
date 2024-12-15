#include <iostream>
#include <cmath>
using namespace std;

void Addition() {
    int n, total = 0, number;
    cout << "\n\n Enter Numbers to Add: ";
    cin >> n;
    cout << "\n Please Enter " << n << " Numbers One by One: ";
    for (int i = 0; i < n; ++i) {
        cin >> number;
        total += number;
    }
    cout << "\n Sum is: " << total << "\n";
}

void Subtraction() {
    int a, b;
    cout << "\n\n Please Enter First Number: ";
    cin >> a;
    cout << "\n Please Enter Second Number: ";
    cin >> b;
    cout << "\n Subtraction is: " << (a - b) << "\n";
}

void Multiplication() {
    int a, b;
    cout << "\n\n Please Enter First Number: ";
    cin >> a;
    cout << "\n Please Enter Second Number: ";
    cin >> b;
    cout << "\n Multiplication is: " << (a * b) << "\n";
}

void Division() {
    double a, b;
    cout << "\n\n Please Enter First Number: ";
    cin >> a;
    cout << "\n Please Enter Second Number: ";
    cin >> b;
    if (b != 0) {
        cout << "\n Division is: " << (a / b) << "\n";
    } else {
        cout << "\n Division by zero is not allowed.\n";
    }
}

void Modulus() {
    int a, b;
    cout << "\n\n Please Enter First Number: ";
    cin >> a;
    cout << "\n Please Enter Second Number: ";
    cin >> b;
    if (b != 0) {
        cout << "\n Modulus is: " << (a % b) << "\n";
    } else {
        cout << "\n Modulus by zero is not allowed.\n";
    }
}

void Power() {
    int base, expo;
    cout << "\n\n Enter Base Number: ";
    cin >> base;
    cout << "\n Enter Expo Number: ";
    cin >> expo;
    cout << "\n Power is: " << pow(base, expo) << "\n";
}

void Factorial() {
    int n;
    cout << "\n\n Enter a Number to Find Factorial: ";
    cin >> n;
    if (n < 0) {
        cout << "\n\n\n Please Enter a Positive Number to find factorial and try again.\n";
        cout << " Factorial can be found for numbers greater than or equal to Zero.\n";
        return;
    }
    long long fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    cout << "\n Factorial of Entered Number " << n << " is: " << fact << "\n";
}

void Calculator() {
    cout << "\n Press + for Addition";
    cout << "\n Press - for Subtraction";
    cout << "\n Press * for Multiplication";
    cout << "\n Press / for Division";
    cout << "\n Press % for Modulus";
    cout << "\n Press ^ for Power";
    cout << "\n Press ! for Factorial\n";

    char choice;
    cout << "\n\n Enter Choice: ";
    cin >> choice;

    switch (choice) {
        case '+':
            Addition();
            break;
        case '-':
            Subtraction();
            break;
        case '*':
            Multiplication();
            break;
        case '/':
            Division();
            break;
        case '%':
            Modulus();
            break;
        case '^':
            Power();
            break;
        case '!':
            Factorial();
            break;
        default:
            cout << "\n\n\n Enter a Valid Choice\n";
    }
}

int main() {
    cout << "\t\t\t\t\t\t--------------\n";
    cout << "\t\t\t\t\t\t| Calculator |\n";
    cout << "\t\t\t\t\t\t--------------\n\n\n\n";

    Calculator();

    int process;
    while (true) {
        cout << "\n\n\n Enter 1 for More Calculations or 2 for Exit: ";
        cin >> process;
        switch (process) {
            case 1:
                Calculator();
                break;
            case 2:
                return 0;
            default:
                cout << "\n Enter a Valid Process";
        }
    }
}