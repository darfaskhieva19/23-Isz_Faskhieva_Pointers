#include <iostream>
#include <stdio.h>
#include <malloc.h>

void SumArray(int* array, int count) //���� � ����� ����������� ������� � ������� �����
{
    for (int i = 0; i < count; i++) 
    {
        printf("������� ������� [%d] -> ", i);
        scanf_s("%d", (array + i));
    }
    int sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum += *(array + i);
    }
    printf("����� ��������� �������: %d\n", sum);
}

void input_print_one_data(int* arr, int size) //���� � ����� ����������� �������
{
    for (int i = 0; i < size; i++)
    {
        printf("������� ������� [%d] -> ", i);
        scanf_s("%d", &arr[i]);
    }
    printf("�������� �������:\n");
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}
void input_print_two_data(int* array, int n, int m) //���� � ����� ���������� �������
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("������� ������� [%d][%d] - > ", i, j);
            scanf_s("%d", (array + i * m + j));
        }
    }
    printf("\n");
    printf("�������� �������: \n");
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

    /*printf("������� 1: �) ������� ���������� �������� ������, ��������� ���, ������� �������� �� ����� (������ ��� ������ ������ ���� �������� �����������)\n");
    int size = 0;
    printf("������� ���������� ��������� �������: ");
    scanf_s("%d", &size);
    int* arr = (int*)malloc(size * sizeof(int)); //�������� ������ ��� ������   
    input_print_one_data(arr, size);
    free(arr); //����������� ������
    printf("\n");*/
    
    
    
    /*printf("������� 1: �) ������� ��������� �������� ������, ��������� ���, ������� �������� �� ����� (������ ��� ������ ������ ���� �������� �����������)\n");
    int n = 0, m = 0;
    printf("������� ���������� �����: ");
    scanf_s("%d", &n);
    printf("������� ���������� ��������: ");
    scanf_s("%d", &m);
    //�������� ������ ��� ������
    int* Two_array = (int*)malloc(n * m * sizeof(int)); 
    input_print_two_data(Two_array, n, m);
    free(Two_array); //����������� ������
    printf("\n");*/
   
    /*printf("������� 1: �) ������� ������(������ ��������), ��������� ���, ������� �������� �� ����� (������ ��� ������ ������ ���� �������� �����������)\n");
    int length = 0;
    printf("������� ����� ������: ");
    scanf_s("%d", &length);
    while (getchar() != '\n');
    char* str = (char*)malloc(sizeof(char) * length + 1); // �������� ������ ��� ������
    printf("������� ������: ");
    for (int i = 0; i < length; i++) 
    {
        scanf_s("%c", &str[i]);
    }
    str[length] = '\0';
    printf("������: %s", str);
    free(str); //����������� ������
    printf("\n");*/

    printf("������� 2: ��������� ����� ��������� �������, �� ��������� ���������� � ��������.\n");
    int count = 0;
    printf("������� ���������� ��������� �������: ");
    scanf_s("%d", &count);
    int* array = (int*)malloc(count * sizeof(int)); //�������� ������ ��� ������ 
    SumArray(array, count);
    free(array); // ����������� ������


    return 0;
}
