#include "Formulas.h"
#include "Angel.h"
#include "Sides.h"
#include <iostream>
#include <windows.h>

using namespace std; 

void showInfo(Formulas* formulas);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "В треугольнике где известно 3 стороны\n";
    Sides trABC(13, 14, 15);
    cout << "A:"<<trABC.getA()<< " B:" << trABC.getB() << " C:" << trABC.getC() <<"\n";
    showInfo(&trABC);
    cout << "В треугольнике где известно 2 стороны и угол между ними\n";
    Angel trAngel(12, 10, 0.5);
    cout << "A:" << trAngel.getA() << " B:" << trAngel.getB() << " Angel:" << trAngel.getAngel() << "\n";
    showInfo(&trAngel);
}


void showInfo(Formulas* formulas) {
    cout << "Медиана: " << formulas->median() << endl
        << "Высота: " << formulas->height() << endl
        << "Биссектриса: " << formulas->bisector() << endl;

}

