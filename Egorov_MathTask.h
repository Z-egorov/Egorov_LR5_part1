#ifndef _EGOROV_MATHTASK_H__
#define _EGOROV_MATHTASK_H__

#include <string>

using namespace std;

int CalcRectangleArea(int NumberA, int NumberB);

bool UserInput(string input) {

    if (input.empty()) return false;

    try {

    int number = stoi(input);
    }
    catch (...)
    { return false; }
    return true;
}

#endif