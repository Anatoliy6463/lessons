/*
*    Сегодня вы узнаете про генерацию случайных чисел и вы сможете даже сыграть в «Угадай число»
*    Для этого нам понадобятся новые библиотеки - stdlib.h и time.h
*    Давайте сделаем так, чтобы компьютер сообщал нам, что число которое мы ввели больше или меньше загаданного.
*    Число будет между 1 и 100
*    Начнём писать код
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL)); // без этой команды компьютер всегда будет загадывать число 8
    int n = rand()%100 + 1;
    int a = 0;
    puts("Я загадал число!\n");
    while (a != n)
    {
        scanf("%d", &a);
        if (a < n)
            puts("Ваше число меньше загаданого\n"); // можно и так
        if (a > n)
            puts("Ваше число больше загаданого\n");
        if (a == n)
        {
            puts("Вы выиграли!!\007\n"); // \007 включает звук, чаще всего системного предупреждения
            break;
        }
    }
    return (0);
}
/*
*    Попробуйте сделать счётчик, который будет увеличиваться с каждым неправильным угадыванием числа и если его значение будет больше 15, игра закончится
*/
