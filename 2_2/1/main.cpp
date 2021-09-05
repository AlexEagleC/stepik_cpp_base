#include <iostream>
using namespace std;

unsigned gcd(unsigned a, unsigned b)
{
    /* ... */
    unsigned answer = 0;
    if (a < b)
    {
        int buf = 0;
        buf = a;
        a = b;
        b = buf;
    }
    if ((a % b) == 0)
        answer = b;
    else
    	answer = gcd(b, a % b);
    return answer;
}

int main(){
    cout << gcd(25,20) << '\n';
}
