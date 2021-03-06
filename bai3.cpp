#include <iostream>

using namespace std;

int sqr(int x){
    return x * x;
}

int POW(int a, int b, int mod){
    if (b == 0)
        return 1 % mod;

    else
    if( b % 2 == 0)
        return sqr( POW( a, b / 2, mod) ) % mod;

    else
        return a * ( sqr( POW( a, b/2, mod)) % mod) % mod;

}
int main(){
    int a, b, mod;
    cin >> a >> b >> mod;
    cout << POW(a,b,mod);
    return 0;
}
