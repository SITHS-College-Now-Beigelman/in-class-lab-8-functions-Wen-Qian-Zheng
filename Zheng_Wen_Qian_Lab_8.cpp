// Wen Qian Zheng
// November 4, 2024
// Lab 8

#include <iostream>
#include <cmath> // math :D
using namespace std;

int doubleMultiply(int a, int b); // declaration of function 'doubleMultiply'
double getSum(double a, double b, double c); // declaration of function 'getSum'

int main()
{
    double number, num1, num2, num3, output; // defines double variables
    int intNum1, intNum2; // defines int variables

    cout << "Choose a number: "; // prompts for an input for number
    cin >> number; // stores the number

    cout << "The square root of " << number << " is " << sqrt(number) << ".\n"; // square roots the number
    cout << number << " to the fourth power is " << pow(number, 4) << ".\n"; // given number raised to the power of 4
    cout << number << " floors to " << floor(number) << ".\n\n"; // floors a given number down

    cout << "Enter two integers: ";
    cin >> intNum1 >> intNum2; // inputs two numbers respectively into intNum1 and intNum2
    cout << "Twice the product of the numbers is: " << doubleMultiply(intNum1, intNum2) << ".\n" << endl; // outputs twice the product of numbers (calling doubleMultiple)

    cout << "Enter three float numbers: ";
    cin >> num1 >> num2 >> num3;
    output = getSum(num1, num2, num3);  // inputs three numbers respectively into num1, num2, and num3
    cout << "The sum of the three numbers is: " << output << ".\n"; // outputs the sum of the numbers (calling getSum)
    return 0;
}

int doubleMultiply(int a, int b)
{
    return a * b * 2; // takes the product of the two integers and doubles it
}

double getSum(double a, double b, double c)
{
    return a + b + c; // adds the three numbers together
}

/*
Choose a number: 7
The square root of 7 is 2.64575.
7 to the fourth power is 2401.
7 floors to 7.

Enter two integers: 14 28
Twice the product of the numbers is: 784.

Enter three float numbers: 35 49 5.6
The sum of the three numbers is: 89.6.
 
*/
