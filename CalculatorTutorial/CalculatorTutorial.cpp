// CalculatorTutorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Calculator.h"

int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char op = '+';

    std::cout << "Calculator Console Application\n" << std::endl;
    std::cout << "Please enter the operation to perform. Format: a + b | a - b | a * b | a / b" << std::endl;

    Calculator c;
    while (true)
    {
        std::cin >> x >> op >> y;
        if (op == '/' && y == 0)
        {
            std::cout << "Division by 0 exception" << std::endl;
            continue;
        }
        else
        {
            result = c.Calculate(x, op, y);
        }
        std::cout << "Result is: " << result << std::endl;
    }

    return 0;
}
