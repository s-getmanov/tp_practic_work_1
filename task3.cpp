//Задание 3:
//Пользователь вводит 2 целых числа, которые задают диапазон. Через пробел вывести в консоль все нечётные числа из этого диапазона

#include <iostream>

using namespace std;

int main()
{
    int val1, val2;

    cout << "Введите два целых числа: ";    
    cin >> val1 >> val2;  

    for (size_t i = val1; i <= val2; i++)
    {
        if (i % 2 > 0)
        {
            cout << i << " ";
        }
        
    }
    
    return 0;
}