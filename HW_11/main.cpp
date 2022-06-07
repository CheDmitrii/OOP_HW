#include <iostream>

class Figure {

};
class Quadrilateral :public Figure {
public:
   virtual void perimeter() = 0;
   virtual void square() = 0;
   virtual ~Quadrilateral(){}
};
class Rhombus : public Quadrilateral {
private:
    double side, hight;
public:
    friend std::istream& operator>> (std::istream& in, Rhombus& rhoumbus) {
        std::cout << "Введине строну:";
        in >> rhoumbus.side;
        std::cout << "Введите высоту:";
        in >> rhoumbus.hight;
        return in;
    }
    void square(Rhombus a) {
        std::cout<< a.side*a.hight;
    }
    void perimeter(Rhombus a) {
        std::cout << a.side * 4;
    }
};
class Rectangle : public Quadrilateral {
public:
    friend std::istream& operator>> (std::istream& in, Rectangle& rectangle) {
        std::cout << "Введине ширину:";
        in >> rectangle.side1;
        std::cout << "Введите длину:";
        in >> rectangle.side2;
        return in;
    }
    void perimeter(Rectangle a) {
        std::cout << a.side1 *2+ a.side2*2;
    }
    void square(Rectangle a) {
        std::cout << a.side1 * a.side2;
    }
private:
    double side1, side2;
};

int main()
{
    std::cout << "Hello World!\n";
}
