//
// Created by Екатерина Чебыкина on 01.06.2022.
//

#ifndef HW_12_HED_H
#define HW_12_HED_H

#include <iostream>
#include <math.h>
using namespace std;
template<typename Type>
void pyz(Type* arr, int size)
{
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

#endif //HW_12_HED_H
