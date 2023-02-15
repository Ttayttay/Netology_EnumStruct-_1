#include <iostream>

using namespace std;

enum month {
    january = 1,
    february,
    march,
    april,
    may,
    june,
    jule,
    august,
    september,
    oktober,
    november,
    december,
};

int main()
{
    setlocale(LC_ALL, "russian");

    int num;
    bool run = true;

    do {
        cout << "Введите номер месяца: ";
        cin >> num;
        if (num == 0) {
            cout << "До свидания\n";
            run = false;
        }
        else if (num > 12) {
            cout << "Неправильный номер!\n";
        }
        else {
            switch (num) {
            case month::january:
                cout << "Январь\n";
                break;
            case month::february:
                cout << "Февраль\n";
                break;
            case month::march:
                cout << "Март\n";
                break;
            case month::april:
                cout << "Апрель\n";
                break;
            case month::may:
                cout << "Май\n";
                break;
            case month::june:
                cout << "Июнь\n";
                break;
            case month::jule:
                cout << "Июль\n";
                break;
            case month::august:
                cout << "Август\n";
                break;
            case month::september:
                cout << "Сентябрь\n";
                break;
            case month::oktober:
                cout << "Октябрь\n";
                break;
            case month::november:
                cout << "Ноябрь\n";
                break;
            case month::december:
                cout << "Декабрь\n";
                break;
            }
        }
    } while (run == true);
}
