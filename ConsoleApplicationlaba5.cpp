// ConsoleApplicationlaba5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "windows.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int x, y;
    cout << "������ �������� ������ x: ";
    cin >> x;
    cout << "������ ������� ������ y: ";
    cin >> y;
    switch (x)
    {
    case 1: cout << "�"; break;
    case 2: cout << "�"; break;
    case 3: cout << "��"; break;
    case 4: cout << "��"; break;
    }
    switch (y)
    {
    case 1: cout << "0"; break;
    case 2: cout << "1"; break;
    case 3: cout << "-1"; break;
    }
}

//#include <iostream>
//#include "windows.h"
//#include <math.h>
//using namespace std;
//
//int main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	double a, b, x;
//	float F;
//	cout << "������ �������� a = ";
//	cin >> a;
//	cout << "������ �������� b = ";
//	cin >> b;
//	cout << "������ �������� x = ";
//	cin >> x;
//	if (x <= a)
//	{
//		F = 3 * a * a + abs(sqrt(b) + x * x * x);
//		cout << "��������� F = " << F;
//	}
//	else if (a < x < b)
//	{
//		F = (b + (x * x * x)) / 10 * x;
//		cout << "��������� F = " << F;
//	}
//	else
//	{
//		F = pow(b, 1 / 5.);
//		cout << "��������� F = " << F;
//	}
//}
