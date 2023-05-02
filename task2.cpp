//Задание 2:
//Пользователь вводит 2 целых числа, программа должна вывесит “YES”, если хотя бы одно из чисел чётное, или “NO”, если все числа нечётные

#include <iostream>

using namespace std;

int main()
{
    int val1, val2;

    cout << "Vvedite 2 celyh chisla: ";    
    cin >> val1 >> val2;  

    if (val1 % 2 == 0 || val2 % 2 ==0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}