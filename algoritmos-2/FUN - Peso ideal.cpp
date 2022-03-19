#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    float height;
    char sex;
    cin >> height >> sex;

    cout << fixed << setprecision(2);
    cout << "Peso ideal = ";

    switch (sex)
    {
    case 'M':
        cout << (72.7*height)-58.01;
        break;
    case 'F':
        cout << (62.1*height)-44.7;
        break;
    }

    cout << " kg\n";

    return 0;
}
