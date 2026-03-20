#include <iostream>
#include <cmath>

using namespace std;

void  triangle() {
    double a, b, c;
    cout <<" _______Треугольник_________"<<"\n";
    cout << "Введите стороны треугольника: ";
    cin >> a >> b >> c;
if (a <=0 || b <=0 || c <=0 ) {
        cout << "стороны не могут быть отрицательныи!" << endl;
    }

    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "Треугольник не существует" << endl;
    }

    double P = a + b + c;

    double p = P / 2;

    double S = sqrt(p * (p - a) * (p - b) * (p - c));

    cout << "Периметр: " << P << endl;
    cout << "Площадь: " << S << endl;

    if (a == b || a == c || b == c) {
        cout << "Треугольник равнобедренный" << endl; //коментарий
    } else {
        cout << "Треугольник не равнобедренный" << endl;
    }

}
