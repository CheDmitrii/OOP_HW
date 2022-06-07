#include <fstream>
#include <string>
#include "hed1.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int arr[10];
    map(arr, 10, rand);
    map(arr, 10, coutq);
    cout << endl;
    map(arr, 10, sqr);
    map(arr, 10, coutq);
    cout << endl;
    map(arr, 10, minuss);
    map(arr, 10, coutq);
    cout << endl;
    return 0;
}
