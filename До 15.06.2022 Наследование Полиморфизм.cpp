
#include <iostream>
#include<windows.h>
#include"Transport.cpp"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Train t("Поезд");
    Ship s("Парусник");
    Plane p("Самолет");
    t.transportation();
    s.transportation();
    p.transportation();
}

