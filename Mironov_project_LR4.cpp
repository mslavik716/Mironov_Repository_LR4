#include <iostream>
#include <string>

using namespace std;

char ch1;
char ch2;
void task1()
{

}
void task2()
{
    cout << "Введите символ ch2: ";
    cin >> ch2;
}
void task3()
{
    
}
void task4()
{
    
}
int main() {
    int o;
    for (;;)
    {
       cout << "\nЗадание 1. Ввести первый символ ch1\n";
       cout << "Задание 2. Ввести второй символ ch2\n";
       cout << "Задание 3. Вывести каждый символ и его код ASCII\n";
       cout << "Задание 4. Вывести сумму кодов ASCII символов ch1 и ch2\n";
       cout << "Нажмите 0 если хотите закрыть программу\n";
       cin >> o;
       switch (o)
       {
            case 0:
                return 0;
            case 1: 
                task1();
                break;
            case 2:
                task2();
                break;
            case 3:
                task3();
                break;
            case 4:
                task4();
                break;
            default:
                cout << "До свидания!" << endl;
                break;
        }
    }

    return 0;
}