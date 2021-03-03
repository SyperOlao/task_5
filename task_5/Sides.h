#pragma once
#include "Formulas.h"
class Sides :
    public Formulas
{
private:
    int a;
    int b; //стороны треуголька
    int c;
public: 
    void setA(int a);
    void setB(int b);
    void setC(int c);

    int getA();
    int getB();
    int getC();
    
    double median() override; 
    double height() override;
    double bisector() override;

    bool isExists(int a, int b, int c);

    Sides(int a, int b, int c) {
        if (isExists(a, b, c)) {
            this->a = a;
            this->b = b;
            this->c = c;
        }
    }
};

