#include <iostream>
#include "Egorov_MathTask.h"

using namespace std;

void EnterDigit(int& varLink, const string& label) {
    string raw_input;
    cout << label << " = ";
    getline(cin, raw_input);
    while (!UserInput(raw_input)) {
        cout << label << " = ";
        getline(cin, raw_input);
    }
    varLink = stoi(raw_input);
}


int CalcRectangleArea(int NumberA, int NumberB) {
    return NumberA * NumberB;
}

