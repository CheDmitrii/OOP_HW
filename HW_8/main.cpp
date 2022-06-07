#include <iostream>

using namespace std;

class Studet{
private:

public:
    string FifstName;
    string LastName;
    Studet(string fn, string ln){
        FifstName = fn;
        LastName = ln;
    }
    Studet(){}
    friend ostream& operator << (ostream &os, Studet &ss){
        return os << "first name:\n" << ss.FifstName << "\n" << "last name:\n" << ss.LastName << endl;
    }
    Studet& operator = (Studet &ss){
        if(&ss != this){
            FifstName = ss.FifstName;
            LastName = ss.LastName;
        }
        return *this;
    }
    friend istream& operator >> (istream &in, Studet &ss){
        in >> ss.FifstName >> ss.LastName;
        return in;
    }
};

class Date {
    int day;
    int month;
    int year;
public:
    Date(int d, int m, int y){
        day = d;
        month = m;
        year = y;
    }
    int getDay() { return day; }
    int getMonth() { return month; }
    int getYear() { return year; }

    friend ostream& operator<<(ostream &os, const Date &d) {
        return os  << '(' << d.day << '.' << d.month
                   << '.' << d.year << ')' << endl;
    }
};

int main() {

    Studet firstStudent("ilua", "wiwiwiwi");
    Date dd = {10, 10, 2010};
    cout << dd << endl;
    cout << firstStudent << endl;
    Studet ddd("ddd", "www");
    cout << ddd << endl;
    ddd.FifstName = "wwwwwwww";
    ddd.LastName = "qrtwrew";
    Studet ww;
    ww = ddd;
    cout << ww << endl;
    cin >> ww;
    cout << ww << endl;
    return 0;
}
