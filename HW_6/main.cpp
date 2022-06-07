#include <iostream>
#include <cmath>

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

    void Print_komp(){
        cout << re;
        if (im > 0){
            cout << " + i" << im << endl;
        } else{
            if (im < 0){
                cout << " - i" << -im << endl;
            } else{
                if (im == 0){
                    cout << endl;
                }
            }
        }
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

void bubble(int arrr[], int n){
    int p;
    cout << "введите элементы" << endl;
    for (int i = 0; i < n; i++){
        cin >> p;
        arrr[i] = p;
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - 1; j++){
            if (arrr[j] > arrr[j + 1]){
                int c = arrr[j];
                arrr[j] = arrr[j + 1];
                arrr[j + 1] = c;
            }
        }
    }
}

void bubble(double *arrr, int n){
    double p;
    cout << "введите элементы" << endl;
    for (int i = 0; i < n; i++){
        cin >> p;
        arrr[i] = p;
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - 1; j++){
            if (arrr[j] > arrr[j + 1]){
                double c = arrr[j];
                arrr[j] = arrr[j + 1];
                arrr[j + 1] = c;
            }
        }
    }
}

void bubble(komplex *arr, int n){
    double mm, mn;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - 1; j++){
            mm = arr[j].mod_komp();
            mn = arr[j + 1].mod_komp();
            if (mm > mn){
                komplex t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
}

void bubble_kom(double **arrrw, int n){
    komplex C1, C2;
    double mm, mn;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - 1; j++){
            C1.set_re(arrrw[0][j]);
            C1.set_im(arrrw[1][j]);
            C2.set_re(arrrw[0][j + 1]);
            C2.set_im(arrrw[1][j + 1]);
            mm = C1.mod_komp();
            mn = C2.mod_komp();
            if (mm > mn){
                double q = arrrw[0][j];
                double w = arrrw[1][j];
                arrrw[0][j] = arrrw[0][j + 1];
                arrrw[1][j] = arrrw[1][j + 1];
                arrrw[0][j + 1] = q;
                arrrw[1][j + 1] = w;
            }
        }
    }
}

int main() {
    setlocale(LC_ALL, "rus");
    int p;
    cout << "числа какого типа будут лежать в массиве?" << endl;
    AGAIN:
    cout << "введите 1 если типа int, 2 если типа double и 3 если это массив:\n" << endl;
    int k;
    cin >> k;
    if (k != 1 && k != 2 && k != 3){
        cout << "вы ввели неправильное число. Введите его еще раз" << endl;
        goto AGAIN;
    }
    cout << "введите колличество элементов в массиве" << endl;
    cin >> p;
    int arr[p];
    double aarr[p];
    double ar[2][p];
    double *dinArr[2];
    dinArr[0] = new double[p];
    dinArr[1] = new double[p];
    komplex arw[p];
    double s, ss;
    switch (k) {
        case 1:
            bubble(arr, p);
            for (int i = 0; i < p; i++){
                cout << arr[i] << endl;
            }
            break;
        case 2:
            bubble(aarr, p);
            for (int i = 0; i < p; i ++){
                cout << aarr[i] << endl;
            }
            break;
        case 3:
            for (int i = 0; i < p; i++){
                cin >> s;
                cin >> ss;
                arw[i].set_re(s);
                arw[i].set_im(ss);
            }
//            bubble_kom(dinArr,p);
            bubble(arw, p);
            for (int i = 0; i < p; i++){
                arw[i].Print_komp();
            }
        default:
            cout << "вы ввели неправильное число. Введите его еще раз" << endl;
            goto AGAIN;

    }


    return 0;
}
