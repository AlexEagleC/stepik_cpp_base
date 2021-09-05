#include <iostream>

int main()
{
    int a = 10;
    int b = 20;
    int c = 0;
    #define MAX(x, y, r) {int p1 = (x), p2 = (y); r = p1 >= p2 ? p1 : p2;} /* присваивает r максимум из x и y */
    //MAX(a, b, c);
    MAX(a += b, b, c);
    std::cout << c << '\n';
    return 0;
}
