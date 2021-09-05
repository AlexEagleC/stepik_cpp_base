#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int D = b * b - 4 * a * c;
    if (D < 0)
       cout << "No real roots" << '\n';
    else{
       double x1 = (double)((-b + sqrt(D)) / 2 / a); 
       double x2 = (double)((-b - sqrt(D)) / 2 / a);
       cout << x1 << ' ' << x2 << '\n';
    }
}
