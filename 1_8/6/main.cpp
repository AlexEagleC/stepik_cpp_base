#include <iostream>

using namespace std;

int int_log(int a){
     int x = 1, i = 0;
     while (a >= x){
        x = x * 2;
        i++;
     }
     return i - 1;
}

int main(){
    int T, p, a;
    cin >> T;
    while (T > 0){
       cin >> a;
       p = int_log(a);
       cout << p << '\n';
       T--;
    }
    return 0;
}
