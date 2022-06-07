#include <iostream>
#include <cmath>

using namespace std;

void algo(double a, double b, double *n, double *m){
    if (a >= b){
        *n = pow((a - b), 1 / 3);
    } else{
        *n = pow(a, 3) + ((a -b) / sin(a * b));
    }
    if (*n > b){
        *m = pow (b, 3) + *n * pow(a, 2);
    } else{
        if (*n < b){
            *m = (*n + a) / (-b) + sqrt(pow(sin(a), 2) - cos(*n));
        } else{
            if (*n == b){
                *m = pow(b, 2) + tan(*n * a);
            }
        }
    }
}

int main() {
    setlocale(LC_ALL, "RUS");
    double a, b, n, m;
    double *pn = &n;
    double *pm = &m;
    cout << "введите числа a и b\n" << endl;
    cout << "a =\t";
    cin >> a;
    cout << endl;
    cout << "b =\t";
    cin >> b;
    cout << endl;
    algo(a, b, pn, pm);
    cout << "a:\t" << a << endl;
    cout << "b:\t" << b << endl;
    cout << "n:\t" << *pn << endl;
    cout << "m:\t" << *pm << endl;
    return 0;
}
