//Задание 4:
//Пользователь вводит N и M –количество строк и столбцов в матрице.
//Программа должна заполнить матрицу случайными двузначными числами и  корректно вывести полученную матрицу в консоль.
//После этого пользователь вводит номер строки или столбца, а программа выводит сумму числе в соответствующей строке или соответствующем столбце.

#include <iostream>
#include <time.h>

using namespace std;

void inter_matrix_size(int& row, int& col){

    cout << "Vvedite kolichestvo strok: ";
    cin >> row;

    cout << "Vvedite kolichestvo kolonok: ";
    cin >> col;

}

void init_matrix(int matrix[][100], int row, int col)
{
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            matrix[i][j] = 0;
        }
    }
}

void fill_matrix(int matrix[][100], int row, int col)
{
    srand(time(NULL));

    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            matrix[i][j] = 10 + rand() % (90);
        }
    }
}

void print_matrix(int matrix[][100], int row, int col){

    cout << "   ";
    for (size_t i = 0; i < col; i++)
    {
        cout << (i + 1) << "  ";
    };

    cout << endl
         << endl;

    for (size_t i = 0; i < row; i++)
    {
        cout << (i + 1) << "  ";

        for (size_t j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }

        cout << endl;
    }

    cout << endl;

}

void inter_summ_row_coll(int& num_row, int& num_col, int row, int col){

    do
    {
        cout << "Vvedite nomer stroki: ";
        cin >> num_row;
        num_row--;
    } while (num_row < 0 || num_row + 1 > row ) ;

    do
    {
        cout << "Vvedite nomer kolonki: ";
        cin >> num_col;
        num_col--;
    } while (num_col < 0 || num_col + 1 > col);

}

void calculate_summ(int matrix[][100], int& sum_row, int& sum_col, int row, int num_row, int num_col){

    for (size_t i = 0; i < row; i++)
    {
        sum_col = sum_col + matrix[i][num_col];
    }

    for (size_t i = 0; i < row; i++)
    {
        sum_row = sum_row + matrix[num_row][i];
    }

}

void print_summ(int sum_row, int sum_col, int num_row, int num_col){

    cout << endl;
    cout << "Sunmma stroki " << (num_row + 1) << " = " << sum_row << endl;
    cout << endl;
    cout << "Sunmma kolonki " << (num_col + 1) << " = " << sum_col << endl;
    cout << endl;
}

int main()
{

    int row, col, num_row, num_col, sum_row = 0, sum_col = 0;
    int matrix[100][100];

    inter_matrix_size(row, col);
    init_matrix(matrix, row, col);
    fill_matrix(matrix, row, col);
    print_matrix(matrix, row, col);
    inter_summ_row_coll(num_row, num_col, row, col);
    calculate_summ(matrix, sum_row, sum_col, row, num_row, num_col);
    print_summ(sum_row, sum_col, num_row, num_col);

    return 0;
}