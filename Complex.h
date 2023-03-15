
#pragma once
#include <iostream>
#include <cmath>
using namespace std;

class Complex {
public:
    Complex();
    Complex(double _r, double _i = 0);
    void SetR(double _r);
    void SetI(double _i);
    double GetR();
    double GetI();
    void print();
    void operator= (Complex c1);
    bool operator== (Complex c1);
    double operator~ ();
    Complex operator+ (Complex c1);
    Complex operator- (Complex c1);
    Complex operator^ (int power);
    Complex operator * (Complex c1);
    Complex operator / (Complex c1);
    double r, i;
};