#include <iostream>
#include "classes.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");
    Circle a = Circle(3);
    std::cout << a.posy << "      " << a.rad << endl;
//    Kompleks r(34, 4);
//    Circle c;
//    Vector vv(2, 4);
    return 0;
}
