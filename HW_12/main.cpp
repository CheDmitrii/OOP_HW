#include <iostream>
#include "hed.h"
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int arr[10];
    double a, b;


    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 1000 + 1;
    }
    double brr[10] ;
    for (int i = 0; i < 10; i++) {
        brr[i] = rand() % 1000 / 100. + 1;
    }
    pyz(arr, 10);
    pyz(brr, 10);

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
    for (int i = 0; i < 10; i++) {
        cout << brr[i] << ' ';
    }
    cout << endl;

}