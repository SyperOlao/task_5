#pragma once
#include "Formulas.h"
class Sides :
    public Formulas
{
private:
    double a;
    double b; //стороны треуголька
    double c;
public: 
    void setA(double a);
    void setB(double b);
    void setC(double c);

    double getA();
    double getB();
    double getC();
    
    double median() override; 
    double height() override;
    double bisector() override;

    bool isExists(double a, double b, double c);

    Sides(double a, double b, double c) {
        if (isExists(a, b, c)) {
            this->a = a;
            this->b = b;
            this->c = c;
        }
        else
        {
            this->a = 0;
            this->b = 0;
            this->c = 0;
        }
    }
};

