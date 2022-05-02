#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;


int main() {
    int a, b, c;
    float x1, x2;
    cout << fixed << setprecision(2);

    cin >> a >> b >> c;

    x1 = (float)(-b + (sqrt(pow(b, 2) - 4.0 * a * c))) / (2.0 * a);
    x2 = (float)(-b - (sqrt(pow(b, 2) - 4.0 * a * c))) / (2.0 * a);

    if (x1 > x2){
        cout << "x1 = " << x2 << endl;
        cout << "x2 = " << x1 << endl;
    }else if(x2 > x1){
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }else if(x1 == x2){
        cout << "x = 0\n";
    }else{
        cout << "Nao ha raizes reais\n";
    }

    return 0;
}
