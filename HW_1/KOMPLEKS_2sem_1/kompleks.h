//
// Created on 15.02.2022.
//

#ifndef KOMPLEKS_2SEM_1_KOMPLEKS_H
#define KOMPLEKS_2SEM_1_KOMPLEKS_H
struct komp{
    double re;
    double im;

    komp kompplus (komp c1);
};
komp kompcreate(double re, double im);

komp kompmin (komp c1, komp c2);
komp kompum (komp c1, komp c2);
komp kompdel (komp c1, komp c2);
double kompmod(komp c1);

#endif //KOMPLEKS_2SEM_1_KOMPLEKS_H
