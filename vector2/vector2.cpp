// vector1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <clocale>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    int Summ = 1;
    int MinAbs, MaxAbs;
    size_t MinId= 0, MaxId=0;
    size_t Value, x; cin >> x;

    vector <int> arr;
    for (size_t i = 0; i < x; i++) {
        cin >> Value;
        arr.push_back(Value);
    }
    MinAbs = arr[0];
    MaxAbs = arr[0];
    if (x < 2) {
        cout << "Слишком мало элементов вектора";
    }
    else
    {
        for (size_t i = 0; i < x; i++) {
            if (abs(arr[i]) < abs(MinAbs)) {
                MinAbs = arr[i];
                MinId = i;
            }
            if (abs(arr[i]) > abs(MaxAbs)) {
                MaxAbs = arr[i];
                MaxId = i;
            }
        }
        for (size_t i = 0; i < x; i++) {
            if(MinId<MaxId)
            {
                if (i > MinId && i < MaxId) {
                    Summ *= arr[i];
                }
            }
            else {
                if (i < MinId && i > MaxId) {
                    Summ *= arr[i];
                }

            }
        }
    }
    cout << "Масимальное по модулю: " << MaxAbs << endl;
    cout << "Минимальное по модулю: " <<MinAbs << endl;

    cout << "Произведение " << Summ;
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
