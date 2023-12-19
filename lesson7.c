/*
*    Сегодня мы пройдём цикл for() {}, который делает что-то определённое количество раз
*    
*    Цикл for() {} повторяет действия определённое количество раз, например, чтобы 50 раз вывести на экран звёздочку, надо написать:
*
*    for (int i = 0; i < 50; i++)
*        puts('*');
*    Таким образом, мы в цикле for создаём переменную i с исходным значением 0, оно будет увеличиваться с каждым повторением и когда значение переменной i достигнет значения 50, цикл закончится
*
*    Попробуем создать программу, которая будет возводить число в степень.
*
*/
#include <stdio.h>
int main()
{
    int a, b; // можно одновременно создать две переменные
    scanf("%d", &a);
    scanf("%d", &b);
    int a2 = a;
    for (int i = 1; i < b; i++)
    {
        a2 = a * a;
    }
    printf("%d ^ %d = %d", a, b, a2);
    return(0);
}
/*
*
*    Попробуйте добавить в калькулятор возведение в степень или КУПИТЕ КОНСОЛЬНЫЙ КАЛЬКУЛЯТОР T-CALC ЗА 49 РУБЛЕЙ И 90 КОПЕЕК
*
*/
