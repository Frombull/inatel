#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;


void media(int x, int y, float &m){
    m = sqrt(x*y);
}


int main() {
    int x, y;
    float m;

    cout << fixed << setprecision(2);
    cin >> x >> y;

    media(x, y, m);
    cout << "Media: " << m << endl;

    return 0;
}
