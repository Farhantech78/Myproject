// utils.h

#ifndef UTILS_H
#define UTILS_H

#include <string>
using namespace std;

// Helper functions for input
namespace Utils
{
    int getValidatedInt(int minVal, int maxVal);
    double getValidatedDouble(double minVal, double maxVal);
    void clearInput();
    string getLine();
}

#endif
