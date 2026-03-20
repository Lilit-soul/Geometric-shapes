#include <iostream>
#include <cmath>

using namespace std;

int tringle() {
    double a, b, c;

    cout << "Введите стороны треугольника: ";
    cin >> a >> b >> c;

    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "Треугольник не существует" << endl;
    }

    double P = a + b + c;

    double p = P / 2;

    double S = sqrt(p * (p - a) * (p - b) * (p - c));

    cout << "Периметр: " << P << endl;
    cout << "Площадь: " << S << endl;

    if (a == b || a == c || b == c) {
        cout << "Треугольник равнобедренный" << endl;
    } else {
        cout << "Треугольник не равнобедренный" << endl;
    }

}
