/*
*    На этом уроке вы узнаете, что такое массив и как им пользоваться.
*    Массив это несколько переменных, массивы объявляются так: тип название[количество переменных]
*    Пример:
*        int a[50];
*    В данном примере был создан целочисленный массив a с 50 переменными.
*    
*    Давайте напишем программу, в которой пользователь должен будет ввести 20 целых чисел, а затем все эти числа будут увеличены в два раза и будут выведены на экран.
*    Первая переменная в массиве имеет индекс 0
*/
#include <stdio.h>
int main()
{
    int n[20];
    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &n[i]);
    }
    for (int i = 0; i < 20; i++)
    {
        n[i] = n[i] * 2;
    }
    for (int i = 0; i < 20; i++)
    {
        printf("%d", n[i]);
    }
    puts("\n");
    return (0);
}
