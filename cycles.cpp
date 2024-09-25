/*************************
* Автор: Сатин В.С.      *
* Дата: 24.09.2024       *
* Название: Вариант№8    *
*************************/

#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

// Вычисляет работу изотермического и адиабатического расширения
int main() {

    setlocale(LC_ALL, "russian");

    float R, n, T, V1;
    float A1, A2;
    int i = 0;

    R = 8.31;
    n = 1.2;
    T = 320.0;
    V1 = 2.0;
    float V2[9] = {2.2, 2.4, 2.6, 2.8, 3.0, 4.0, 5.0, 6.0, 7.0};

    while (i < 9) {
        // Уравнения
        A1 = R * T * log(V2[i]/V1);
        A2 = ((R * T)/(n-1)) * (1 - pow(V1/V2[i], n-1));  

        // Округление до 3 чисел после запятой
        cout.precision(3);
        cout.setf(ios::fixed);
        
        // Выравнивает вывод
        if (A1 < 1000) 
        {
            cout << "V2 = " << V2[i] << " |  A1 = " << A1 << "  |  A2 = " << A2 << endl;
        }
        else     
        {
            cout << "V2 = " << V2[i] << " |  A1 = " << A1 << " |  A2 = " << A2 << endl; 
        }

        i++;
    }
}
