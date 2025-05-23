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

int main() {
    int NumberA = 0, NumberB = 0;
    
    EnterDigit(NumberA, "input height A");

    EnterDigit(NumberB, "input height B");


    int RectangleArea = CalcRectangleArea(NumberA, NumberB);

    cout << "Area of Rectangle is " << RectangleArea << endl;

    return 0;
}