#include <iostream>
using namespace std;

int k = 0;

int foo(int n) {
    k++;
    if (n <= 0)
        return 1;
    return foo((n * 2) / 3) + foo(n - 2);
}



int main(){
    foo(3);
    cout << k << '\n';
}
