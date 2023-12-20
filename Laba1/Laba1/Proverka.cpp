#include <iostream>
#include <string>
#include "Proverka.h"

double getInRange(double x1, double x2)
{
    double x;
    while ((std::cin >> x).fail() || x1 > x || x > x2)
    {
        std::cout << "������������ �����, ���������� ��� ���: ";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }
    cerr << x << endl;
    return x;
}

string readLine() {
    string readline;
    cin >> ws;
    getline(cin, readline);
    cerr << readline << "\n";
    return readline;
}