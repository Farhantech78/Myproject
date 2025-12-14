// utils.cpp

#include "utils.h"
#include <iostream>
#include <limits>
using namespace std;

void Utils::clearInput()
{
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int Utils::getValidatedInt(int minVal, int maxVal)
{
    int value;
    while (true)
    {
        cin >> value;
        if (cin.fail() || value < minVal || value > maxVal)
        {
            cout << "Invalid input. Enter integer between " << minVal << " and " << maxVal << ": ";
            clearInput();
        }
        else
        {
            clearInput();
            return value;
        }
    }
}

double Utils::getValidatedDouble(double minVal, double maxVal)
{
    double value;
    while (true)
    {
        cin >> value;
        if (cin.fail() || value < minVal || value > maxVal)
        {
            cout << "Invalid input. Enter number between " << minVal << " and " << maxVal << ": ";
            clearInput();
        }
        else
        {
            clearInput();
            return value;
        }
    }
}

string Utils::getLine()
{
    string line;
    getline(cin, line);
    if (line.empty())
        getline(cin, line);
    return line;
}
