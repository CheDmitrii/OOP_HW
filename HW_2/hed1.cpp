//
// Created by Екатерина Чебыкина on 01.06.2022.
//

#include "hed1.h"


int rand(int a)
{
    return rand() % 10 - 5;
}

int sqr(int a)
{
    return a * a;
}

int minuss(int a)
{
    return a * (-1);
}

int coutq(int a)
{
    cout << a << "  ";
    return a;
}

void map(int* arr, unsigned size, int(*p)(int))
{
    for (unsigned i = 0; i < size; i++) {
        arr[i] = p(arr[i]);
    }
}
