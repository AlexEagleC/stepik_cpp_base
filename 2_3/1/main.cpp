#include <iostream>
using namespace std;

void rotate(int a[], unsigned size, int shift)
{
    while (shift != 0)
    {
        int next = a[0];
        for (int i = size - 1; i >= 0; i--)
        {
            int current = a[i];
            a[i] = next;
            next = current;
        }
        shift--;
    }
}



int main(){
    int a[] = {1, 2, 3, 4, 5};
    //cout << sizeof(a)/sizeof(int) << '\n';
    int size = sizeof(a)/sizeof(int);
    rotate(a, size,7);
    for (int i = 0; i < size; ++i)
    {
        cout << a[i] << ' ';
    }
    cout << '\n';
    return 0;
}
