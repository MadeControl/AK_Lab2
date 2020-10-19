#include <iostream>
#include "calculator.h"

using namespace std;

Calculator calc;
double a = 2.2;
double b = 3.3;
double c = 2.0;
double d = 3.0;


int main() {

    std::cout << "Add result:\n";
    std::cout << "a + b = " << calc.Add(a, b) << std::endl;

    std::cout << "Sub result:\n";
    std::cout << "a - b = " << calc.Sub(a, b) << std::endl;

    std::cout << "Mul result:\n";
    std::cout << "c * d = " << calc.Mul(c, d) << std::endl;

    return 0;
}