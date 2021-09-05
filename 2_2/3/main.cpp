#include <iostream>
using namespace std;

int reverse(int c)
{
    int d = c;
    cin >> c;
    if (c != 0)
        reverse(c);
    cout << d << ' ';
    return 0;
}



int main(){
    int c = 0;
    cin >> c;
    if (c != 0)
        reverse(c);
    cout << '\n';
    return 0;
}
