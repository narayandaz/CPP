#include <iostream>
#include <string>

using namespace std;

void _divide(int &x, int &y, int &f, int &c, string &z) {
    int i = x / y;
    z += to_string(i);
    x -= y * i;
    signed int s = -1;
    while (y > x) {
        x *= 10;
        s++;
        if (x == 0) break;
    }
    if (c == 0) z += ".";
    if (s > 0)  z += string(s, '0');
    if ((c += s + 1) <= f)
        _divide(x, y, f, c, z);
}

string divide(int x, int y, int f) {
    signed int c = 0;
    string z = "";
    z.reserve(f + 2);
    _divide(x, y, f, c, z);
    return z;
}

int main(int argc, char **argv) {
    int x, y, f;
    if (argc < 3) {
        cerr << "usage: " << argv[0] << " A B [precision]" << endl;
        return 1;
    }
    if (argc < 4) f = 64;
    else f = atoi(argv[3]);
    x = atoi(argv[1]);
    y = atoi(argv[2]);
    cout << divide(x, y, f) << endl;
    return 0;
}
