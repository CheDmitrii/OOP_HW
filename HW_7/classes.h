#ifndef HW_7_CLASSES_H
#define HW_7_CLASSES_H

#include <iostream>

using namespace std;

class Kompleks{
private:
    double re;
    double im;
public:
    Kompleks();
    Kompleks(double re){
        this->re = re;
    }
    Kompleks(double re, double im): Kompleks(re) {
        this->im = im;
    }
    ~Kompleks(){
        cout << "деструктор комплексного числа, его память\t" << this << endl;
    };
};

class Circle {
private:

public:
    double * a;
    double pos_x;
    double posy;
    double rad;
    Circle(): pos_x(0), posy(0), rad(1){};
//    Circle(double x){
//        pos_x = x;
//    }
//    Circle(double x, double y): Circle(x){
//        posy = y;
//    }
    Circle(double x = 0, double y = 0, double rad = 1){
        this->rad = rad;
    }
    Circle(const Circle& ref){
        pos_x = ref.pos_x;
        posy = ref.posy;
        rad = ref.rad;
        a = ref.a;
    };
    ~Circle(){
        cout << "деструктор круга, его память\t" << this << endl;
    };
};

class Vector {
private:
    double x_1;
    double y_1;
    double x_2;
    double y_2;
public:
    Vector(){};
    Vector(double x_1, double y_1){
        this->x_1 = x_1;
        this->y_1 = y_1;
    }
    Vector(double x, double y, double x2, double y2): Vector(x, y){
        this->x_2 = x2;
        this->y_2 = y2;
    }
    ~Vector(){
        cout << "деструктор вектора, его память\t" << this << endl;
    }

};
#endif //HW_7_CLASSES_H
