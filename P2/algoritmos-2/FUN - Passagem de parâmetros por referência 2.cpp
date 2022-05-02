#include <iomanip>
#include <iostream>
using namespace std;


void converte(float F, float &C, float &K) {
    C = (5.f / 9.f) * (F - 32.f);
    K = C + 273;
}


int main() {
    float f, c, k;

    cout << fixed << setprecision(2);
    cin >> f;

    converte(f, c, k);

    cout << "Celsius: " << c << endl;
    cout << "Kelvin: " << k << endl;

    return 0;
}
