#include <stdio.h>
#include <conio.h>

double power(double x, double exp);

int main()
{
    int N = 1, factorial = 1;
    double sum = 1;
    printf("Enter N(>=1)\nN = ");
    scanf("%d", &N);
    for (int i = 0; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            factorial *= j;
        }
        sum += power(2, i) / factorial;
    }

    printf("Sum = %lf", sum);
    getch();
    return 0;
}

double power(double x, double exp)
{
    if (exp >= 0)
    {
        double sum = 1;
        for (int i = 0; i < exp; i++)
            sum *= x;
        return sum;
    }
    else
    {
        double sum = 1;
        for (int i = 0; i > exp; i--)
            sum /= x;
        return sum;
    }
}