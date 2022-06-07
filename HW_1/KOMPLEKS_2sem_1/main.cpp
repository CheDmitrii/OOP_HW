#include <iostream>
#include "kompleks.h"
#include <fstream>
#include "string"
#include <vector>

using namespace std;

void KompMax(){
    string text, per;
    vector <double> arr;
    vector <double> same;
    double pp, odin, maxi;
    komp first, max, sames;
    int q = 0, score = 0, f;
    //first.kompplus(max);

    cout << "введите имя файла без расширения:" << endl;
    getline(cin, text, '\n');
    text = text + ".txt";
    ifstream get;
    get.open(text);
    if (get.is_open()){
        while (get.eof() == 0){
            getline(get, per, ' ');
            pp = atof(per.c_str());
            arr.push_back(pp);
        }
        max = {arr.at(0), arr.at(1)};
        maxi = kompmod(max);
        for (int y = 0; y < arr.size(); y++){
            q = y * 2;
            first = {arr.at(q), arr.at(q + 1)};
            odin = kompmod(first);
            if (maxi < odin){
                maxi = odin;
                max = first;
            }
            else {
                if (maxi == odin){
                    score++;
                    same.push_back(q);
                }
            }
        }
        if (score == 0){
            if (max.im >= 0){
                cout << "максимальное число = " << max.re << "+" << max.im << endl;
                cout << "его модуль = " << maxi << endl;
            }
            else{
                cout << "максимальное число = " << max.re << "-i" << -max.im << endl;
                cout << "его модуль = " << maxi << endl;
            }
        }
        else{
            cout << "чисел с одинаковым модулем = " << score << endl;
            for (int d = 0; d < arr.size(); d++){
                f = d * 2;
                sames = {same.at(f), same.at(f + 1)};
                if (sames.im < 0){
                    cout << sames.re << "-i" << -sames.im << endl;
                }
                else{
                    if (sames.im == 0){
                        cout << sames.re << "+i" << sames.im << endl;
                    }
                    else{
                        cout << sames.re << endl;
                    }
                }
            }
        }
    }
    else{
        cout << "файл не открыт" << endl;
    }
    arr.clear();
    same.clear();
}

int main() {
    setlocale(LC_ALL, "rus");
//    KompMax();
    double u, q, r;
    komp c, w;
    int p, a, s;
    string str;
    cout << "введите кол-во чисел:" << endl;
    cin >> a;
    int tr = a / 2;
    double t[2][tr];
    ofstream on;
    on.open("komp.txt");
    if (on.is_open()){
        cout << "введите числа:" << endl;
        for (int i = 0; i < a; i++){
            cin >> r;
            on << r << " ";
            cin >> r;
            on << r << " ";
        }
    }
    else {
        cout << "файл не открыт" << endl;
    }
    on.close();


    r = 0;
    p = 0;
    ifstream from;
    from.open("komp.txt");
    if (!from.is_open()){
        cout << "файл не открыт" << endl;
    }
    else {
        while (from.eof() == 0){
//            cout << "файл открыт" << endl;
//            cin.get(from, r);
            from >> r;
            if (p % 2 == 0){
                s = p / 2;
                t[s][0] = r;
                cout << t[s][0] << endl;
            }
            else{
                s = p / 2;
                t[s][1] = r;
                cout << t[s][1] << endl;

            }
            p++;
        }
        c = {t[0][0], t[0][1]};
        q = kompmod(c);
        for (int s = 0; s < p / 2; s++){
            w = {t[s][0], t[s][1]};
            u = kompmod(w);
            if (q < u){
                q = u;
                c = w;
            }
        }
    }
    from.close();
    cout << "максимальное комплексное число:" << "\n" << c.re << " " << c.im << "i" << endl;
    cout << "его модуль = " << q << endl;
    return 0;
}