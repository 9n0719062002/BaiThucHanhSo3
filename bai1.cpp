#include <iostream>

using namespace std;



int main(){
    bool t = false;
    int k= 0;
    int n;
    cin >> n;
    int x[n+1] ,y[n+1];

    for(int i = 1; i <= n; i++){
        cin >> x[i] >> y[i];
    }

    for(int i = 1 ; i <= n ; i++){
        for(int j = i + 1; j <= n; j++ ){
            if(x[i] == x[j]){
                t = true;

                break;

            }
            if(y[i] == y[j]){
                t = true;

                break;

            }
            if( (x[i]-y[i]) - (x[j]-y[j]) == 0 ){
                t = true;
                break;

            }
            if( (x[i] + y[i]) == (x[j] + y[j]) ){
                t = true;
                break;

            }
        }
        if(t) break;
    }
    if(t == true){
        cout << "yes";
    }else{
        cout<< "no";
    }

}
