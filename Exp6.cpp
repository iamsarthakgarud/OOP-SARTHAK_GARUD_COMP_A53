#include <iostream>
#include <iomanip>
using namespace std;

class Time {
    int h, m;
public:
    Time() : h(0), m(0) {}

    friend istream& operator>>(istream& in, Time& t);
    friend ostream& operator<<(ostream& out, const Time& t);
};

istream& operator>>(istream& in, Time& t) {
    cout << "Hours? ";
    in >> t.h;
    cout << "Minutes? ";
    in >> t.m;
    if (t.m >= 60) {
        t.h += t.m / 60;
        t.m = t.m % 60;
    }
    return in;
}

ostream& operator<<(ostream& out, const Time& t) {
    out << setw(2) << setfill('0') << t.h << ":"
        << setw(2) << setfill('0') << t.m;
    return out;
}

int main() {
    Time t;
    cin >> t;
    cout << "Time: " << t << endl;
    return 0;
}