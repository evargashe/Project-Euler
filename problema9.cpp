#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const int sum = 1000;
    int a, b, c = 0;
    bool found = false;

    for (a = 1; a < sum / 3; a++) {
        for (b = a; b < sum / 2; b++) {
            c = sum - a - b;
            if (a * a + b * b == c * c) {
                found = true;
                break;
            }
        }
        if (found) {
            break;
        }
    }

    if (found) {
        cout << "El triplete pitagórico es: a=" << a << ", b=" << b << ", c=" << c << endl;
        cout << "El producto abc es: " << a * b * c << endl;
    } else {
        cout << "No se encontró ningún triplete pitagórico." << endl;
    }

    return 0;
}
