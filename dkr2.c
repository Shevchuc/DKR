#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void zamina(int *array, const int array_size);
void enter_arr(int *array, const int array_size);
void print_arr(int *array, const int array_size);

#define ARRAY_SIZE 5

int main()
{
    int arr[ARRAY_SIZE];
    enter_arr(arr, ARRAY_SIZE);
    zamina(arr, ARRAY_SIZE);
    print_arr(arr, ARRAY_SIZE);
    getch();
    return 0;
}

void zamina(int *array, const int array_size)
{
    for (int i = 0; i < array_size; i++) // перебір всіх елементів масиву
    {
        if (array[i] < 0)
            array[i] = -1;
        else if(array[i] > 0)
            array[i] = 1;
    }
}

void enter_arr(int *array, const int array_size)
{
    printf("\nenter a values of array:\n"); // вивід тексту
    for (int i = 0; i < array_size; i++)    // перебір всіх елементів масиву
    {
        printf("arr[%d] = ", i); // виведення індексу елемента
        scanf("%d", &array[i]);  // отримання значення елементу масива
    }
}

void print_arr(int *array, const int array_size)
{
    printf("\n\n"); // вивід тексту
    for (int i = 0; i < array_size; i++)    // перебір всіх елементів масиву
    {
        printf("arr[%d] = %d\n", i, array[i]); // виведення індексу елемента
    }
}