﻿#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a six-digit number: \n";
    cin >> a;
    if (a / 100000 == 0 || a / 1000000 > 0) {
        cout << "Error";
    }
    else if ((a / 100000) + (a / 10000) % 10 + (a / 1000) % 10 == (a / 100) % 10 + (a / 10) % 10 + (a) % 10) {
        cout << "Given number is lucky";
    }
    else {
        cout << "The given number is unlucky";
    }
}
