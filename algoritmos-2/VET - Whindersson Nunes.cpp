#include <iostream>
using namespace std;

int main() {
    int num_inputs;
    int input;
    int max = 0;
    int min = 0;

    cin >> num_inputs;

    for (int i = 0; i < num_inputs; i++) {
        cin >> input;
        if (input > 10000000) max++;
        if (input < 10000000) min++;
    }

    cout << max << " video(s) com mais de 10M views\n";
    cout << min << " video(s) com menos de 10M views\n";

    return 0;
}
