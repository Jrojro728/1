﻿#include <iostream>

int plus(int x, int y);

int subtract(int x, int y);

int main()
{
    std::cout << "输入两个数字：";
    int x;
    int y;
    std::cin >> x >> y;

    std::cout << x << "+" << y << "=" << plus(x,y) <<"\n";
    std::cout << x << "-" << y << "+" << subtract(x, y);
}