#include <iostream>
#include <Windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number;
    cout << "Введите шестизначное число: ";
    cin >> number;

    if (number < 100000 || number > 999999)
    {
        cout << "Ошибка: Введенное число не является шестизначным.";
    }
    else 
    {
        int sumFirstThreeDigits = (number / 100000) + ((number / 10000) % 10) + ((number / 1000) % 10);
        int sumLastThreeDigits = ((number / 100) % 10) + ((number / 10) % 10) + (number % 10);

        if (sumFirstThreeDigits == sumLastThreeDigits) {
            cout << "Введенное число является счастливым!";
        }
        else 
        {
            cout << "Введенное число не является счастливым.";
        }
    }

    return 0;
}








#include <iostream>
#include <Windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number;
    cout << "Введите четырехзначное число: ";
    cin >> number;

    if (number < 1000 || number > 9999) 
    {
        cout << "Ошибка: Введенное число не является четырехзначным.";
    }
    else
    {
        int firstTwoDigits = number / 100;
        int lastTwoDigits = number % 100;
        int swappedNumber = (lastTwoDigits * 100) + firstTwoDigits;
        cout << "Число после замены: " << swappedNumber;
    }

    return 0;
}






#include <iostream>
#include <Windows.h>
using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int maxNumber = INT_MIN; 

    for (int i = 0; i < 7; i++) 
    {
        int number;
        cout << "Введите целое число: ";
        cin >> number;

        if (number > maxNumber)
        {
            maxNumber = number;
        }
    }

    cout << "Максимальное число: " << maxNumber;

    return 0;
}






#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int distanceAB, distanceBC, cargoWeight;
    cout << "Введите расстояние между пунктами А и В (в км): ";
    cin >> distanceAB;
    cout << "Введите расстояние между пунктами В и С (в км): ";
    cin >> distanceBC;
    cout << "Введите вес груза (в кг): ";
    cin >> cargoWeight;

    int fuelNeeded = 0;

    if (cargoWeight <= 500)
    {
        fuelNeeded = distanceAB + distanceBC;
    }
    else if (cargoWeight <= 1000)
    {
        fuelNeeded = 4 * (distanceAB + distanceBC);
    }
    else if (cargoWeight <= 1500) 
    {
        fuelNeeded = 7 * (distanceAB + distanceBC);
    }
    else if (cargoWeight <= 2000)
    {
        fuelNeeded = 9 * (distanceAB + distanceBC);
    }
    else 
    {
        cout << "Самолет не может подняться из-за превышения максимального веса груза.";
        return 0;
    }

    int remainingFuel = 300 - fuelNeeded;
    if (remainingFuel >= 0) 
    {
        cout << "Минимальное количество топлива для дозаправки в пункте В: " << remainingFuel << " литров.";
    }
    else 
    {
        cout << "Невозможно преодолеть любое из расстояний. Полет по введенному маршруту невозможен.";
    }

    return 0;
}
