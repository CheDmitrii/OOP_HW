#include <iostream>
#include <math.h>

using namespace std;

class komplex{
private:
    double re;
    double im;
public:
    void set_re(double x){
        re = x;
    }

    void set_im(double x){
        im = x;
    }

    double get_re(){
        double x;
        x = re;
        return x;
    }

    double get_im(){
        double x;
        x = im;
        return x;
    }

    double mod_komp(){
        double mod;
        mod = sqrt(re * re + im * im);
        return mod;
    }

    void Print_mod(){
        if (im < 0){
            cout << "комплексное число:" << endl;
            cout << re << " " << "- i" << -im << "\n" << endl;
            cout << "его модуль равен" << endl;
            cout << mod_komp() << endl;
        } else{
            if (im == 0){
                cout << "комплексное число:" << endl;
                cout << re << "\n" << endl;
                cout << "его модуль равен" << endl;
                cout << mod_komp() << endl;
            } else{
                cout << "комплексное число:" << endl;
                cout << re << " " << "+ i" << im << "\n" << endl;
                cout << "его модуль равен" << endl;
                cout << mod_komp() << endl;
            }
        }
    }
};

class circle{
private:
    double pos_x;
    double pos_y;
    double rad;
public:
    void set_pos_x(double x){
        pos_x = x;
    }

    void set_pos_y(double y){
        pos_y = y;
    }

    void set_rad(double r){
        rad = r;
    }


    double get_pos_x(circle b){
        double x;
        x = b.pos_x;
        return x;
    }

    double get_pos_y(circle b){
        double y;
        y = b.pos_x;
        return y;
    }

    double get_rad(circle b){
        double r;
        r = b.rad;
        return r;
    }

    double S_circle(){
        double S;
        S = rad * rad * M_PI;
        return S;
    }

    double perimeter_circle(){
        double P;
        P = 2 * M_PI * rad;
        return P;
    }

    void Print_parametrs(){
        cout << "Площадь круга равна\n" << endl;
        cout << S_circle() << "\n" << endl;
        cout << "Периметр круга равен\n" << endl;
        cout << perimeter_circle() << "\n" << endl;
    }

};

class vectorr{
private:
    double pos_x_1;
    double pos_y_1;
    double pos_x_2;
    double pos_y_2;

public:
    void set_pos_x_1(double x){
        pos_x_1 = x;
    }

    void set_pos_x_2(double x){
        pos_x_2 = x;
    }

    void set_pos_y_1(double y){
        pos_y_1 = y;
    }

    void set_pos_y_2(double y){
        pos_y_2 = y;
    }


    double get_pos_x_1(vectorr b){
        double x;
        x = b.pos_x_1;
        return x;
    }

    double get_pos_x_2(vectorr b){
        double x;
        x = b.pos_x_2;
        return x;
    }

    double get_pos_y_1(vectorr b){
        double y;
        y = b.pos_y_1;
        return y;
    }

    double get_pos_y_2(vectorr b){
        double y;
        y = b.pos_y_2;
        return y;
    }

    double Lenth_vektor(){
        double L;
        L = sqrt((pos_x_2 - pos_x_1) * (pos_x_2 - pos_x_1) + (pos_y_2 - pos_y_1) * (pos_y_2 - pos_y_1));
        return L;
    }

    void Print_lenth(){
        cout << "длинна вектора равна\n" << endl;
        cout << Lenth_vektor() << "\n" << endl;
    }

};

int main(int r){
    setlocale(LC_ALL, "RUS");
    vectorr B;
    komplex C1;
    circle O;
    int b;

    cout << "с чем вы хотите работать: комплексное число, вектор или кругом?" << endl;
    AGAIN:
    cout << "для работы с комплексным числом введите 1\n" << "для работы с вектором введите 2\n" << "для работв с кругом введите 3" << endl;
    cin >> b;
    switch (b) {
        case 1:
            double im, re;
            cout << "введите действиедльну и мнимую чать числа без i" << endl;
            cin >> re >> im;
            C1.set_re(re);
            C1.set_im(im);
            C1.mod_komp();
            C1.Print_mod();
            break;
        case 2:
            double x1, x2, y1, y2;
            cout << "введите координаты начала вектора" << endl;
            cin >> x1 >> y1;
            cout << "введите координаты конца вектора" << endl;
            cin >> x2 >> y2;
            B.set_pos_x_1(x1);
            B.set_pos_y_1(y1);
            B.set_pos_x_2(x2);
            B.set_pos_y_2(y2);
            B.Print_lenth();
            break;
        case 3:
            double rad, pos_x, pos_y;
            cout << "введите координаты центра круга" << endl;
            cin >> pos_x >> pos_y;
            O.set_pos_x(pos_x);
            O.set_pos_y(pos_y);
            cout << "введите радиус круга" << endl;
            cin >> rad;
            O.set_rad(rad);
            O.Print_parametrs();
            break;
        default:
            cout << "вы ввели неправильное число" << endl;
            goto AGAIN;
            break;
    }
    return 0;
}
