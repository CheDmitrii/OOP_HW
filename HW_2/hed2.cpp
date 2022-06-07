#include "hed2.h"


void sortInver(int* arr, unsigned size)
{
    int b = 9;
    for (int i = 0; i < 5; i++) {
        swap(arr[i], arr[b]);
        b--;
    }
}
void(*yk(int* arr, unsigned size))(int*, unsigned) {
    int cym = 0;
    for (unsigned i = 0; i < size; i++) {
        cym += arr[i];
    }
    if (cym > arr[0]) {
        return sortB;
    }
    else if (cym < arr[0]) {
        return sortS;
    }
    else if (cym == arr[0]) {
        return sortInver;
    }
}
void sortS(int* arr, unsigned size)
{
    int a = 99999999, b = 0;
    for (int i = 0; i < 10 - 1; i++) {
        a = 9999999999; b = 0;
        for (int j = i; j < 10; j++) {
            if (a > arr[j]) {
                a = arr[j]; b = j;
            }
        }

        swap(arr[i], arr[b]);

    }
}

void sortB(int* arr, unsigned size)
{
    int a = 0, b = 0;
    for (int i = 0; i < 10 - 1; i++) {
        a = 0; b = 0;
        for (int j = i; j < 10; j++) {
            if (a < arr[j]) {
                a = arr[j]; b = j;
            }
        }

        swap(arr[i], arr[b]);

    }
}

