#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int num_inputs;
    int input;
    int max = 0;
    int min = 0;
    int media = 0;

    cout << fixed << setprecision(2);
    cin >> num_inputs;

    for (int i = 0; i < num_inputs; i++) {
        cin >> input;
        input == 1 ? max++ : min++;
    }

    if(max > min){
        cout << "A maioria gostou\n";
    }else if(min > max){
        cout << "A maioria nao gostou\n";
    }else{
        cout << "Deu empate\n";
    }

    return 0;
}
