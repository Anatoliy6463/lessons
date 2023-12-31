/*
*    На этом уроке вы научитесь разделять код на несколько функций
*    Вы же видели, что всё в функции main() {}? Сегодня вы сможете сделать так, чтобы одни команды были в одной функции, другие в другой
*    Начнём с hello world
*/
#include <stdio.h>
void helloworld()
{
    puts("Hello, world!\n");
}
int main()
{
    helloworld();
    return(0);
}
/*
*    В данном коде, команда для вывода на экран сообщения Hello, world! находится в функции helloworld() {}
*    Вы же увидели, что у этой функции тип void, а не int? void это тип переменных, который ничего не возращает(То есть не получится сделать return(0); ), поэтому его чаще всего используют для функций
*    До появления стандарта C89 в 1989 году, программисты писали вместо void helloworld() {} просто helloworld() {}, компилятор автоматически добавлял функции тип int, но в стандарте C99 в 1999 году эту функцию убрали, ведь все программисты стали писать void name() вместо name()
*
*    Я часто использую разделение на функции, когда создаю игры.
*    Попробуйте создать калькулятор, где вычисление будет в функции void calculate() {}, а сам калькулятор в функции int main() {}
*/
