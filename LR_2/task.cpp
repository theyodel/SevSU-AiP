#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    float a, b, x_start, x_end, dx;

    // Ввод параметров
    cout << "Введите параметр a: ";
    cin >> a;
    cout << "Введите параметр b: ";
    cin >> b;
    cout << "Введите начальное значение x: ";
    cin >> x_start;
    cout << "Введите конечное значение x: ";
    cin >> x_end;
    cout << "Введите шаг dx: ";
    cin >> dx;
    float z = 0;

    // Проверка корректности шага
    if (dx <= 0)
    {
        cout << "Ошибка: шаг dx должен быть положительным!" << endl;
        return 1;
    }
    if (cos(x_start) == 0)
    {
        printf("Ошибка: cos(x) = 0, что по условию не может быть!\n");
        return 1;
    }
    if (x_start <= 0)
    {
        printf("Ошибка: x = 0, что по условию не может быть!\n");
        return 1;
    }

    cout << fixed << setprecision(4);

    cout << "\n";
    cout << "________________________________" << endl;
    cout << "|      x      |    z = f(x)    |" << endl;
    cout << "|_____________|________________|" << endl;

    // Вычисление и вывод значений функции
    for (float x = x_start; x <= x_end; x += dx)
    {
        if (x <= a)
        {
            z = log(x) + sin(x);
        }
        else if (a < x && x < b)
        {
            z = log(x) + cos(x);
        }
        else
        {
            z = tan(x);
        }
        cout << "|  " << setw(9) << x << "  |" << setw(10) << z << "      |" << endl;
        cout << "|_____________|________________|" << endl;
    }
    return 0;
}