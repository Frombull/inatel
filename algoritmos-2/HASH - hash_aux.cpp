#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;


int hash_aux(int k, int m){
    int mod = (k%m)>=0 ? k%m : (k%m)+m;
    return mod;
}


int main() {
    int k, m;

    while(cin >> k >> m){
        cout << hash_aux(k, m) << endl;
    }

    return 0;
}
