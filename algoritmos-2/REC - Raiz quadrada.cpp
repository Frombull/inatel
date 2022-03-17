#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;


long double raiz(long double x, long double xo, long double e){
    if((abs(xo*xo - x)) <= e){
        return xo;
    }else{
        return raiz(x, (xo+x/xo)/2, e);
    }
}


int main(){
    long double x, xo, e;
    cout << setprecision(6);
    cin >> x >> xo >> e;
    cout << raiz(x, xo, e) << endl;
}
