#include <iostream>
#include "Computer.h"
using namespace std;

int main()
{
    int n = 5;
    Computer* arr = new Computer[n]{
            {"Asus", 8, 9999.99},
            {"HP", 16, 19999.99},
            {"Lenovo", 4, 29999.99},
            {"MacBook", 32, 59999.99},
            {"Acer", 8, 39999.99}
    };
}