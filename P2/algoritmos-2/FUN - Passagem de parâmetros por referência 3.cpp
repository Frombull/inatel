#include <iostream>
using namespace std;


void troca(int &X, int &Y){
    int temp = X;
    X = Y;
    Y = temp;
}


int main() {
    int x, y;

    cin >> x >> y;

    troca(x, y);

    cout << x << " " << y << endl;

    return 0;
}
