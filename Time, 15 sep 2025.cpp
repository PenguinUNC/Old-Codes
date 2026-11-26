/*
Пользователь вводит с клавиатуры время, выраженное в секундах (в переменную int total_seconds ).
Нужно отделить часы, минуты и остаток секунд. (1000 ->  0 : 16 : 40)
Вывести на экран.
*/
# include <iostream>
int main()
{
    int total_seconds = 0;
    std::cout << "Введите время выраженное в секундах: ";
    std::cin >> total_seconds;
    int h = total_seconds /3600;
    int m = total_seconds %3600 /60;
    int s = total_seconds %60;
    int test = h * 3600 + m * 60 + s;
    std::cout << test << "\n";
    std::cout << h << ":" <<  m << ":" << s;
}
