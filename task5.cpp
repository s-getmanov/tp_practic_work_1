//Задание 5:
//Напишите рекурсивную функцию, которая переводит число из десятичной системы в двоичную. Допускается использовать тип string для хранения двоичного числа

#include <iostream>

using namespace std;

//Функция проверки ввода.
// Ошибка ввода, если:
//- преобразование введенных данных к выбранному типу закончилось с ошибкой
//- после считывания остались данные в буфере (введены лишние символы)
bool check_user_input()
{

    if (cin.fail())
    {
        cin.clear();
        cin.ignore(100, '\n');
        return false;
    }

    if (cin.peek() != '\n')
    {

        cin.clear();
        cin.ignore(100, '\n');
        return false;
    };

    return true;
}

string int_to_binary(int decimal_number){

    string bin_number = "";

    bin_number = to_string(decimal_number % 2);

    if (decimal_number / 2 == 0) { 
        return bin_number;
    };

    return int_to_binary(decimal_number / 2) + bin_number;
}

int main()
{

    int decimal_number = 0;

    while (true)
    {
        cout << "Vvedite desyatichnoe chislo: ";
        cin >> decimal_number;

        if (!check_user_input()) continue;
        
        break;
    }

    cout << int_to_binary(decimal_number);

}

