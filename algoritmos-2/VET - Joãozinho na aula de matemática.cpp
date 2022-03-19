#include <iostream>
using namespace std;

int main() {
    int input;

    cin >> input;

    for (int i = 0; i <= 10; i++) {
        cout << input << " x " << i << " = " << input * i << endl;
    }

    return 0;
}
