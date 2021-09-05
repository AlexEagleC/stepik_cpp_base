#include <iostream>

using namespace std;

int main(){
    char c = '\0';
    bool F = false;
    while (cin.get(c)){
        if ((F == false) && (c == ' ')){
            F = true;
            cout << c;
        }
        if (c != ' '){
            F = false;
            cout << c;
        }
         
    }
    return 0;
}
