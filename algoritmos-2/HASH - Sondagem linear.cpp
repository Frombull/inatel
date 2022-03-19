#include <iomanip>
#include <iostream>
using namespace std;


int hash_aux(int k, int m){
    int mod = (k%m)>=0 ? k%m : (k%m)+m;
    return mod;
}


int hash1(int k, int i, int m){
    for(int i=0; i< m; i++){
        cout << hash_aux(k, m) << " ";
        k++;
    }
    cout << endl;
}


int main() {
    int k, m;

    cin >> k >> m;

    hash1(k, 0, m);

    return 0;
}
