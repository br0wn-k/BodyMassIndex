// File Name: BodyMassIndex
// Programmer: Kaylee Brown
// Date: October 2025
// Requirements: This program is designed to calculate the user's BMI and determine
// if they are overweight, underweight, or opitmal weight.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double weight, height, bmi;

    // Module 1: Input
    {
        cout << "Enter your weight in pounds: ";
        cin >> weight;
        cout << "Enter your height in inches: ";
        cin >> height;

        if (weight <= 0 || height <= 0)
        {
            cout << "Input Error: Weight and height must be greater than zero." << endl;

            return 1;
        }
    }   

    // Module 2: Processing
    {
        bmi = weight * 703 / (height * height);
    }

    // Module 3: Output
    {
        cout << fixed << setprecision(1);
        cout << "Your BMI is: " << bmi << endl;

        if (bmi < 18.5)
            cout << "This concludes that you are underweight." << endl;
        else if (bmi > 25)
            cout << "This concludes that you are overweight." << endl;
        else
            cout << "This concludes that you have an optimal weight." << endl;
    }

    return 0;
}