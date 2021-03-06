#include <iostream>

using namespace std;



int main(){
    int n;
    cin >> n;
     int a[n+1];
    bool t[n+1];
    for(int i =0 ; i <=n ; i++){
        a[i] = i;
        t[i] = true;
    }
    for(int i = 2 ; i <= n ; i++){
        if(t[i] == true){
            for(int j = i + 1; j<=n ; j++){
                if(a[j] % a[i] == 0){
                    t[j] = false;

                }
            }
        }
    }
    a[0] = false;
    a[1] = false;
    for(int i = 2; i <= n; i++){
        if(t[i] == true){
            cout << a[i] <<" ";
        }
    }

    return 0;

}
