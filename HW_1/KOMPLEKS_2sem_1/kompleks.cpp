//
// Created on 15.02.2022.
//

#include "kompleks.h"
#include <math.h>
#include <cmath>

komp kompcreate (double re, double im){
    komp result = {re, im};
    return result;
}
komp kompplus(komp c1, komp c2){
    return kompcreate(c1.re + c2.re, c1.im + c2.im);
}
komp kompmin(komp c1, komp c2){
    return kompcreate(c1.re - c2.re, c1.im - c2.im);
}
komp kompum(komp c1, komp c2){
    double a = c1.re;
    double b = c1.im;
    double c = c2.re;
    double d = c2.im;
    return kompcreate(a * c - b * d, a * d + b * c);
}
komp kompdel(komp c1, komp c2){
    double a = c1.re;
    double b = c1.im;
    double c = c2.re;
    double d = c2.im;
    double e = pow(c, c) - pow(d, d);
    return kompcreate((a * c - b * d) / e, (a * d + b * c)/ e);
}
double kompmod (komp c){
    double a, b;
    a = c.re;
    b = c.im;
    //double q;
    //q = sqrt(pow(a, 2) + pow(b, 2));
    //return q;
    return sqrt(pow(a, 2) + pow(b, 2));
}
