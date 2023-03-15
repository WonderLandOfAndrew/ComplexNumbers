#pragma once
#include <iostream>
#include <cmath>
#include "Complex.h"
using namespace std;



Complex::Complex() { r = 0, i = 0; }
Complex::Complex(double _r , double _i) { r = _r, i = _i; }
void Complex::SetR(double _r) { r = _r; }
void Complex::SetI(double _i) { i = _i; }
double Complex::GetR() { return r; }
double Complex::GetI() { return i; }
void Complex::print() { cout << r << " + i * " << i; }

void Complex:: operator= (Complex c1)
    {
        SetR(c1.GetR());
        SetI(c1.GetI());
    }

bool Complex:: operator== (Complex c1)
    {
        if (this->r == c1.r && this->i == c1.i) return true;
        return false;
    }

    double Complex::operator~ () {
        return sqrt(r * r + i * i);
    }

    Complex Complex::operator+ (Complex c1)
    {
        Complex result;
        result.r = this->r + c1.r;
        result.i = this->i + c1.i;
        return result;
    }
    Complex Complex::operator- (Complex c1)
    {
        Complex result;
        result.r = this->r - c1.r;
        result.i = this->i - c1.i;
        return result;
    }
    Complex Complex::operator^ (int power)
    {
        Complex base = *this;
        double absoluteValue = ~base;
        double tangent = base.i / base.r;
        base.r = pow(absoluteValue, power) * (cos(power * tangent));
        base.i = pow(absoluteValue, power) * (sin(power * tangent));
        return base;
    }
    Complex Complex::operator * (Complex c1) {
        Complex result;
        double a, b, c, d;
        a = this->r;
        b = this->i;
        c = c1.r;
        d = c1.i;
        result.r = a * c - b * d;
        result.i = a * d + c * b;
        return result;
    }

    Complex Complex::operator / (Complex c1) {
        Complex result;
        float a, b, c, d;
        a = this->r;
        b = this->i;
        c = c1.r;
        d = c1.i;
        result.r = (a * c + b * d) / (c * c + d * d);
        result.i = (c * b - a * d) / (c * c + d * d);
        return result;
    }

   
