#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void triangle();

int main(){
    // Первая попытка
    const double PI = acos(-1.0); // число пи (аркосинус -1)
    double radius;
    double corner;
    int rounding;

    cout << "----Окружность----" << "\n";

    cout << "Введите радиус: ";
    cin >> radius;
    if (radius < 0) {
            cout << "Радиус не может быть отрицательным!" << endl;
            return 0;
        }
    cout << "Введите угол: ";
    cin >> corner;
    if (corner < 0) {
        cout << "Угол не может быть отрицательным!" << endl;
        return 0;
    }
    if (corner >360) {
            cout << "Угол не может быть больше 360!" << endl;
            return 0;
        }
    cout << "Введите положительное число для округления: ";
    cin >> rounding;
    if (rounding < 0) {
        cout << "Округление не может быть отрицательным!" << endl;
        return 0;
    }

    double circuit = 2 * PI * radius;// Длина окружности
    double area = PI * radius * radius;// Площадь круга
    double sector = (corner / 360) * area;// Площадь кругового сектора

    cout << "---------------" << "\n";
    cout << "Длина окружности: " << setprecision(rounding) << circuit << "\n";
    cout << "Площадь круга: " << setprecision(rounding) << area << "\n";
    cout << "Площадь кругового сектора: " << setprecision(rounding) << sector << "\n";
    triangle();
    return 0;    
}

