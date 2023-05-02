//Задание 1.
//Напишите программу, которая поочерёдно запрашивает у пользователя переменные различных типов, 
//после чего выводит их все через пробел обратно в консоль. 
//Обязательно использовать такие типы данных как int, double, char, bool, string. 
//То есть, например, программа просит пользователя “Enter int: “, затем “Enter double: “ и так далее, 
//а в конце выводит “You entered: 5 3.14 random_string “ и так далее.

#include <iostream>

using namespace std;

//Структура с полями нужных типов

//Функция проверки ввода.
// Ошибка ввода, если: 
//- преобразование введенных данных к выбранному типу закончилось с ошибкой
//- после считывания остались данные в буфере (введены лишние символы) 
bool check_user_input() {

    if (cin.fail())
    {
        cin.clear();
        cin.ignore(100, '\n');
        return false;
    }

    if (cin.peek() != '\n') {

        cin.clear();
        cin.ignore(100, '\n');
        return false;
    };

    return true;

}

//Перегруженные функции ввода значения с проверкой введенных данных

void inter_value (int& val ){

    while (true) {
        
        cout << "Inter <int>: ";
        cin >> val;

        if (!check_user_input()) continue;
             
        break;
    } 
}

void inter_value(double& val) {

    while (true) {

        cout << "Inter <double>: ";
        cin >> val;

        if (!check_user_input()) continue;

        break;
    }
}

void inter_value(char& val) {

    while (true) {

        cout << "Inter <char>: ";
        cin >> val;

        if (!check_user_input()) continue;

        break;
    }
}

void inter_value(string& val) {

    while (true) {

        cout << "Inter <string>: ";
        cin >> val;

        if (!check_user_input()) continue;

        break;
    }
}

void inter_value(bool& val) {

    while (true) {

        cout << "Inter <boll> (0/1): ";
        cin >> val;

        if (!check_user_input()) continue;

        break;
    }
}


int main()
{   
    int int_val;
    double vouble_val;
    char   char_val;
    string string_val;
    bool bool_val;    
    
    inter_value(int_val);
    inter_value(vouble_val);
    inter_value(char_val);
    inter_value(string_val);
    inter_value(bool_val);
    
    cout << "You entered: Int = " << int_val << "; double =  " << vouble_val << "; char = " << char_val << "; string = " << string_val << "; bool = " << ((bool_val) ? "true" : "false");
}