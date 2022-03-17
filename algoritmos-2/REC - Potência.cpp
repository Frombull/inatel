#include <iomanip>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


int batata(int, int);


int main() {
    int a, n;
    cin >> a >> n;
    cout << batata(a, n) << endl;
}


int batata(int a, int n){   //a^n
    if (n > 0){
        return (a * batata(a, n-1));
    }
    else{
        return 1;
    }
}
