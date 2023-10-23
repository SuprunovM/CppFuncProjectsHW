﻿#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    int user = 0, bot = 0, bothod, userhod;
    while (user < 5 && bot < 5) {
        srand((unsigned)time(NULL));
        bothod = 1 + (rand() % 3);
        cout << "Камень(1), ножницы(2) или бумага(3)\n";
        cin >> userhod;
        switch (userhod) {
        case 1:
            switch (bothod) {
            case 1:
                cout << "Ничья\n";
                break;
            case 2:
                cout << "Вы победили\n";
                user++;
                break;
            case 3:
                cout << "Вы проиграли\n";
                bot++;
                break;
            }
            break;
        case 2:
            switch (bothod) {
            case 1:
                cout << "Вы проиграли\n";
                bot++;
                break;
            case 2:
                cout << "Ничья\n";
                break;
            case 3:
                cout << "Вы победили\n";
                user++;
                break;
            }
            break;
        case 3:
            switch (bothod) {
            case 1:
                cout << "Вы победили\n";
                user++;
                break;
            case 2:
                cout << "Вы проиграли\n";
                bot++;
                break;
            case 3:
                cout << "Ничья\n";
                break;
            }
            break;
        }
        cout << "Компьютер-" << bot << ":Игрок-" << user << "\n";
    }
    (user == 5) ? cout << "Победа игрока" : cout << "Победа компьютера";
}