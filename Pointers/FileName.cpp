#include <iostream>
#include <stdio.h>
#include <malloc.h>

void SumArray(int* array, int count) //Ввод и вывод одномерного массива и подсчет суммы
{
    for (int i = 0; i < count; i++) 
    {
        printf("Введите элемент [%d] -> ", i);
        scanf_s("%d", (array + i));
    }
    int sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum += *(array + i);
    }
    printf("Сумма элементов массива: %d\n", sum);
}

void input_print_one_data(int* arr, int size) //Ввод и вывод одномерного массива
{
    for (int i = 0; i < size; i++)
    {
        printf("Введите элемент [%d] -> ", i);
        scanf_s("%d", &arr[i]);
    }
    printf("Элементы массива:\n");
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}
void input_print_two_data(int* array, int n, int m) //Ввод и вывод двумерного массива
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Введите элемент [%d][%d] - > ", i, j);
            scanf_s("%d", (array + i * m + j));
        }
    }
    printf("\n");
    printf("Элементы массива: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("array[%d][%d] = %d\n", i, j, *(array + i * m + j));
        }
    }
    printf("\n");
}


int main() {
    system("chcp 1251>null");

    /*printf("Задание 1: а) Создать одномерный числовой массив, заполнить его, вывести значения на экран (память под массив должна быть выделена динамически)\n");
    int size = 0;
    printf("Введите количество элементов массива: ");
    scanf_s("%d", &size);
    int* arr = (int*)malloc(size * sizeof(int)); //Выделяем память под массив   
    input_print_one_data(arr, size);
    free(arr); //Освобождаем память
    printf("\n");*/
    
    
    
    /*printf("Задание 1: б) Создать двумерный числовой массив, заполнить его, вывести значения на экран (память под массив должна быть выделена динамически)\n");
    int n = 0, m = 0;
    printf("Введите количество строк: ");
    scanf_s("%d", &n);
    printf("Введите количество столбцов: ");
    scanf_s("%d", &m);
    //Выделяем память под массив
    int* Two_array = (int*)malloc(n * m * sizeof(int)); 
    input_print_two_data(Two_array, n, m);
    free(Two_array); //Освобождаем память
    printf("\n");*/
   
    /*printf("Задание 1: в) Создать строку(массив символов), заполнить его, вывести значения на экран (память под массив должна быть выделена динамически)\n");
    int length = 0;
    printf("Введите длину строки: ");
    scanf_s("%d", &length);
    while (getchar() != '\n');
    char* str = (char*)malloc(sizeof(char) * length + 1); // Выделяем память под массив
    printf("Введите строку: ");
    for (int i = 0; i < length; i++) 
    {
        scanf_s("%c", &str[i]);
    }
    str[length] = '\0';
    printf("Строка: %s", str);
    free(str); //Освобождаем память
    printf("\n");*/

    printf("Задание 2: Вычислить сумму элементов массива, не используя переменные с индексом.\n");
    int count = 0;
    printf("Введите количество элементов массива: ");
    scanf_s("%d", &count);
    int* array = (int*)malloc(count * sizeof(int)); //Выделяем память под массив 
    SumArray(array, count);
    free(array); // Освобождаем память


    return 0;
}
