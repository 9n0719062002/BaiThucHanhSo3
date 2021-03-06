#include <iostream>

using namespace std;



int main(){
    bool t = false;
    int n , x;
    cin >> n >> x;
    int a[n];
    for(int i=0 ; i < n ; i++){
        cin >> a[i];
    }
    int left = 0, right = n-1, mid = (left+(right-left))/2;
    while(left <= right){
        //cout << mid << " "<< left <<" "<< right << endl;
        if(a[mid] == x){
            t= true;
            break;
        }
        if(a[mid] < x){
            left = mid +1;
        }else{
            right = mid -1;
        }
        mid = (left+right)/2;
    }
    if(t){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;

}
