#pragma once
#include "Formulas.h"
class Angel :
    public Formulas
{
private:
    double a;
    double b; //стороны треуголька
    double angel; //угол 
public:
    void setA(double a);
    void setB(double b);
    void setAngel(double angel);

    double getA();
    double getB();
    double getAngel();

    double median() override;
    double height() override;
    double bisector() override;


    Angel(double a, double b, double angel) {
        this->a = a;
        this->b = b;
        this->angel = angel;
    }
};

