#include <iostream>
#include <windows.h>









enum month
{
    goodbye,
    january,
    febrary,
    march,
    aipril,
    may,
    june,
    julie,
    august,
    september,
    october,
    november,
    desrmber    
};

int main(int argc, char** argv)
{
    
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    month chus_month;
    std::cout << "Для выхода из программы введите '0' ";
    do
    {
        std::cout << std::endl;
        int num;
        std::cout << "Введите номер месяца: ";
        std::cin >> num;
        std::cout << std::endl;
        chus_month = static_cast<month>(num);
        switch (chus_month)
        {
        case goodbye: std::cout << "До свидания!"; std::cout << std::endl; break;
        case january:std::cout << "Январь"; std::cout << std::endl; continue;
        case febrary:std::cout << "Февраль"; std::cout << std::endl; continue;
        case march:std::cout << "Март"; std::cout << std::endl; continue;
        case aipril:std::cout << "Апрель"; std::cout << std::endl; continue;
        case may:std::cout << "Май"; std::cout << std::endl; continue;
        case june:std::cout << "Июнь"; std::cout << std::endl; continue;
        case julie:std::cout << "Июль"; std::cout << std::endl; continue;
        case august:std::cout << "Август"; std::cout << std::endl; continue;
        case september:std::cout << "Сентябрь"; std::cout << std::endl; continue;
        case october:std::cout << "Октябрь"; std::cout << std::endl; continue;
        case november:std::cout << "Ноябрь"; std::cout << std::endl; continue;
        case desrmber:std::cout << "Декабрь"; std::cout << std::endl; continue;
        default: std::cout << "Введен не верный номер месяца! Повторите ввод!"; std::cout << std::endl; continue;
        }
    }
            while (chus_month != 0);
        
        return 0;
}




